
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef enum lzc_dataset_type { ____Placeholder_lzc_dataset_type } lzc_dataset_type ;
typedef int dmu_objset_type_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,char const*,int *,int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(const char *VAR_1, enum lzc_dataset_type VAR_2, nvlist_t *VAR_3)
{
 int VAR_4;
 nvlist_t *VAR_5 = FUNC_2();
 FUNC_0(VAR_5, "type", (dmu_objset_type_t)VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_5, "props", VAR_3);
 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_5, ((void*)0));
 FUNC_4(VAR_5);
 return (VAR_4);
}
