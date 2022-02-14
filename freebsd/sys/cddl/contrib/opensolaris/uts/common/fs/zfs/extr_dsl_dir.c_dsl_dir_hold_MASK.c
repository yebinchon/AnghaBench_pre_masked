
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dp_meta_objset; int dp_root_dir_obj; int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dir_t ;
typedef int ddobj ;
struct TYPE_7__ {int dd_child_dir_zapobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,char const*,char const*,...) ;
 int FUNC_3 (TYPE_1__*,int ,char*,void*,int **) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char const*,char*,char const**) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (int ,int ,char*,int,int,int *) ;

int
FUNC_11(dsl_pool_t *VAR_3, const char *VAR_4, void *VAR_5,
    dsl_dir_t **VAR_6, const char **VAR_7)
{
 char VAR_8[VAR_2];
 const char *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12;
 dsl_dir_t *VAR_13;
 uint64_t VAR_14;

 VAR_12 = FUNC_7(VAR_4, VAR_8, &VAR_10);
 if (VAR_12 != 0)
  return (VAR_12);


 VAR_9 = FUNC_8(VAR_3->dp_spa);
 if (FUNC_9(VAR_8, VAR_9) != 0)
  return (FUNC_1(VAR_1));

 FUNC_0(FUNC_6(VAR_3));

 VAR_12 = FUNC_3(VAR_3, VAR_3->dp_root_dir_obj, ((void*)0), VAR_5, &VAR_13);
 if (VAR_12 != 0) {
  return (VAR_12);
 }

 while (VAR_10 != ((void*)0)) {
  dsl_dir_t *VAR_15;
  VAR_12 = FUNC_7(VAR_10, VAR_8, &VAR_11);
  if (VAR_12 != 0)
   break;
  FUNC_0(VAR_10[0] != '\0');
  if (VAR_10[0] == '@')
   break;
  FUNC_2("looking up %s in obj%lld\n",
      VAR_8, FUNC_4(VAR_13)->dd_child_dir_zapobj);

  VAR_12 = FUNC_10(VAR_3->dp_meta_objset,
      FUNC_4(VAR_13)->dd_child_dir_zapobj,
      VAR_8, sizeof (VAR_14), 1, &VAR_14);
  if (VAR_12 != 0) {
   if (VAR_12 == VAR_0)
    VAR_12 = 0;
   break;
  }

  VAR_12 = FUNC_3(VAR_3, VAR_14, VAR_8, VAR_5, &VAR_15);
  if (VAR_12 != 0)
   break;
  FUNC_5(VAR_13, VAR_5);
  VAR_13 = VAR_15;
  VAR_10 = VAR_11;
 }

 if (VAR_12 != 0) {
  FUNC_5(VAR_13, VAR_5);
  return (VAR_12);
 }





 if (VAR_10 != ((void*)0) &&
     (VAR_7 == ((void*)0) || (VAR_11 && VAR_11[0] != '\0'))) {

  FUNC_5(VAR_13, VAR_5);
  FUNC_2("next=%p (%s) tail=%p\n", VAR_10, VAR_10?VAR_10:"", VAR_7);
  VAR_12 = FUNC_1(VAR_0);
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_10;
 *VAR_6 = VAR_13;
 return (VAR_12);
}
