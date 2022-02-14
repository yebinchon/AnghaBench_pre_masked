
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {char* name; scalar_t__ size; scalar_t__ value; } ;
typedef TYPE_1__ linker_symval_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_10__ {char const* fbtp_name; void** fbtp_patchpoint; int fbtp_patchval; int fbtp_rval; int fbtp_symindx; void* fbtp_hashnext; void* fbtp_savedval; int fbtp_loadcnt; TYPE_2__* fbtp_ctl; void* fbtp_id; struct TYPE_10__* fbtp_probenext; } ;
typedef TYPE_3__ fbt_probe_t ;
struct TYPE_9__ {int fbt_nentries; int loadcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (void***) ;
 scalar_t__ FUNC_2 (void***) ;
 void* FUNC_3 (int ,char*,char const*,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_23 ;
 void** VAR_24 ;
 TYPE_3__* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (void*,int,int) ;

int
FUNC_7(linker_file_t VAR_25, int VAR_26,
    linker_symval_t *VAR_27, void *VAR_28)
{
 fbt_probe_t *VAR_29, *VAR_30;
 uint32_t *VAR_31, *VAR_32;
 const char *VAR_33;
 char *VAR_34;
 int VAR_35;
 int VAR_36;

 VAR_34 = VAR_28;
 VAR_33 = VAR_27->name;


 if (FUNC_4(VAR_33))
  return (0);

 VAR_31 = (uint32_t *)(VAR_27->value);
 VAR_32 = (uint32_t *)(VAR_27->value + VAR_27->size);


 for (; VAR_31 < VAR_32; VAR_31++) {

  if (FUNC_6(*VAR_31, (VAR_12 | VAR_21 | VAR_19),
      (VAR_10 | VAR_20 | VAR_17))) {
   VAR_36 = VAR_3;
   VAR_35 = VAR_6;
   break;
  }


  if (FUNC_2(&VAR_31)) {
   VAR_36 = VAR_1;
   VAR_35 = VAR_4;
   break;
  }
 }

 if (VAR_31 >= VAR_32)
  return (0);

 VAR_29 = FUNC_5(sizeof (fbt_probe_t), VAR_13, VAR_14 | VAR_15);
 VAR_29->fbtp_name = VAR_33;
 VAR_29->fbtp_id = FUNC_3(VAR_23, VAR_34,
     VAR_33, VAR_5, 3, VAR_29);
 VAR_29->fbtp_patchpoint = VAR_31;
 VAR_29->fbtp_ctl = VAR_25;
 VAR_29->fbtp_loadcnt = VAR_25->loadcnt;
 VAR_29->fbtp_savedval = *VAR_31;
 VAR_29->fbtp_patchval = VAR_35;
 VAR_29->fbtp_rval = VAR_36;
 VAR_29->fbtp_symindx = VAR_26;

 VAR_29->fbtp_hashnext = VAR_24[FUNC_0(VAR_31)];
 VAR_24[FUNC_0(VAR_31)] = VAR_29;

 VAR_25->fbt_nentries++;

 VAR_30 = ((void*)0);
again:
 for (; VAR_31 < VAR_32; VAR_31++) {

  if (FUNC_6(*VAR_31, (VAR_11 | (VAR_22 << VAR_18)),
      (VAR_9 | VAR_16 | VAR_17 | VAR_8))) {
   VAR_36 = VAR_2;
   VAR_35 = VAR_6;
   break;
  }


  if (FUNC_1(&VAR_31)) {
   VAR_36 = VAR_0;
   VAR_35 = VAR_4;
   break;
  }
 }

 if (VAR_31 >= VAR_32)
  return (0);




 VAR_29 = FUNC_5(sizeof (fbt_probe_t), VAR_13, VAR_14 | VAR_15);
 VAR_29->fbtp_name = VAR_33;
 if (VAR_30 == ((void*)0)) {
  VAR_29->fbtp_id = FUNC_3(VAR_23, VAR_34,
      VAR_33, VAR_7, 3, VAR_29);
 } else {
  VAR_30->fbtp_probenext = VAR_29;
  VAR_29->fbtp_id = VAR_30->fbtp_id;
 }
 VAR_30 = VAR_29;

 VAR_29->fbtp_patchpoint = VAR_31;
 VAR_29->fbtp_ctl = VAR_25;
 VAR_29->fbtp_loadcnt = VAR_25->loadcnt;
 VAR_29->fbtp_symindx = VAR_26;
 VAR_29->fbtp_rval = VAR_36;
 VAR_29->fbtp_savedval = *VAR_31;
 VAR_29->fbtp_patchval = VAR_35;
 VAR_29->fbtp_hashnext = VAR_24[FUNC_0(VAR_31)];
 VAR_24[FUNC_0(VAR_31)] = VAR_29;

 VAR_25->fbt_nentries++;

 VAR_31++;
 goto again;
}
