
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zbm_creation_txg; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,char*,int *,TYPE_1__*) ;
 int FUNC_4 (int *,char const*,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char const*,int ,int **) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,char**) ;
 int * FUNC_11 (char*,char) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_2, nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 dsl_pool_t *VAR_5;
 dsl_dataset_t *VAR_6;
 int VAR_7;
 char *VAR_8;
 boolean_t VAR_9;
 uint64_t VAR_10;

 VAR_7 = FUNC_6(VAR_2, VAR_1, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_4(VAR_5, VAR_2, VAR_1, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_7(VAR_5, VAR_1);
  return (VAR_7);
 }

 VAR_9 = FUNC_9(VAR_3, "compressok");

 VAR_7 = FUNC_10(VAR_3, "from", &VAR_8);
 if (VAR_7 == 0) {
  if (FUNC_11(VAR_8, '@') != ((void*)0)) {





   dsl_dataset_t *VAR_11;
   VAR_7 = FUNC_4(VAR_5, VAR_8, VAR_1, &VAR_11);
   if (VAR_7 != 0)
    goto out;
   VAR_7 = FUNC_1(VAR_6, VAR_11, VAR_9,
       &VAR_10);
   FUNC_5(VAR_11, VAR_1);
  } else if (FUNC_11(VAR_8, '#') != ((void*)0)) {





   zfs_bookmark_phys_t VAR_12;

   VAR_7 = FUNC_3(VAR_5, VAR_8, VAR_6,
       &VAR_12);
   if (VAR_7 != 0)
    goto out;
   VAR_7 = FUNC_2(VAR_6,
       VAR_12.zbm_creation_txg, VAR_9, &VAR_10);
  } else {




   VAR_7 = FUNC_0(VAR_0);
   goto out;
  }
 } else {



  VAR_7 = FUNC_1(VAR_6, ((void*)0), VAR_9, &VAR_10);
 }

 FUNC_8(VAR_4, "space", VAR_10);

out:
 FUNC_5(VAR_6, VAR_1);
 FUNC_7(VAR_5, VAR_1);
 return (VAR_7);
}
