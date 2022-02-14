
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zi_start; unsigned long long zi_end; int zi_object; int zi_level; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
typedef int err_type_t ;
struct TYPE_8__ {int dn_datablkshift; int dn_indblkshift; int dn_nlevels; } ;
typedef TYPE_2__ dnode_t ;
typedef int dnode_phys_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*,int ,int ,int ,int **) ;
 int FUNC_3 (int *,int,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_4 ;
 char* FUNC_6 (int) ;
 void* FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char*,int,...) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_5, err_type_t VAR_6, int VAR_7, char *VAR_8,
    zinject_record_t *VAR_9)
{
 objset_t *VAR_10 = ((void*)0);
 dnode_t *VAR_11 = ((void*)0);
 int VAR_12;
 int VAR_13 = -1;




 if (VAR_8 == ((void*)0)) {





  VAR_9->zi_start = 0;
  VAR_9->zi_end = -1ULL;
 } else {
  char *VAR_14;


  VAR_9->zi_start = FUNC_7(VAR_8, &VAR_14, 10);


  if (*VAR_14 == '\0')
   VAR_9->zi_end = VAR_9->zi_start + 1;
  else if (*VAR_14 == ',')
   VAR_9->zi_end = FUNC_7(VAR_14 + 1, &VAR_14, 10);

  if (*VAR_14 != '\0') {
   (void) FUNC_5(VAR_4, "invalid range '%s': must be "
       "a numeric range of the form 'start[,end]'\n",
       VAR_8);
   goto out;
  }
 }

 switch (VAR_6) {
 case 129:
  break;

 case 128:






  if (VAR_8 != ((void*)0)) {
   (void) FUNC_5(VAR_4, "range cannot be specified when "
       "type is 'dnode'\n");
   goto out;
  }

  VAR_9->zi_start = VAR_9->zi_object * sizeof (dnode_phys_t);
  VAR_9->zi_end = VAR_9->zi_start + sizeof (dnode_phys_t);
  VAR_9->zi_object = 0;
  break;
 }





 if ((VAR_12 = FUNC_2(VAR_5, VAR_1,
     VAR_0, VAR_2, &VAR_10)) != 0) {
  (void) FUNC_5(VAR_4, "cannot open dataset '%s': %s\n",
      VAR_5, FUNC_6(VAR_12));
  goto out;
 }

 if (VAR_9->zi_object == 0) {
  VAR_11 = FUNC_0(VAR_10);
 } else {
  VAR_12 = FUNC_3(VAR_10, VAR_9->zi_object, VAR_2, &VAR_11);
  if (VAR_12 != 0) {
   (void) FUNC_5(VAR_4, "failed to hold dnode "
       "for object %d\n",
       (u_longlong_t)VAR_9->zi_object);
   goto out;
  }
 }


 FUNC_8("data shift: %d\n", (int)VAR_11->dn_datablkshift);
 FUNC_8(" ind shift: %d\n", (int)VAR_11->dn_indblkshift);




 if (VAR_9->zi_start != 0 || VAR_9->zi_end != -1ULL) {
  VAR_9->zi_start >>= VAR_11->dn_datablkshift;
  VAR_9->zi_end >>= VAR_11->dn_datablkshift;
 }





 VAR_9->zi_level = VAR_7;
 if (VAR_7 > 0) {
  FUNC_8("level 0 blkid range: [%llu, %llu]\n",
      VAR_9->zi_start, VAR_9->zi_end);

  if (VAR_7 >= VAR_11->dn_nlevels) {
   (void) FUNC_5(VAR_4, "level %d exceeds max level "
       "of object (%d)\n", VAR_7, VAR_11->dn_nlevels - 1);
   goto out;
  }

  if (VAR_9->zi_start != 0 || VAR_9->zi_end != 0) {
   int VAR_15 = VAR_11->dn_indblkshift - VAR_3;

   for (; VAR_7 > 0; VAR_7--) {
    VAR_9->zi_start >>= VAR_15;
    VAR_9->zi_end >>= VAR_15;
   }
  }
 }

 VAR_13 = 0;
out:
 if (VAR_11) {
  if (VAR_11 != FUNC_0(VAR_10))
   FUNC_4(VAR_11, VAR_2);
 }
 if (VAR_10)
  FUNC_1(VAR_10, VAR_2);

 return (VAR_13);
}
