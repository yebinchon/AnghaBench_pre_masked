
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int cred_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,char const*,int *) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_2, const char *VAR_3, cred_t *VAR_4)
{
 int VAR_5;
 dsl_dataset_t *VAR_6;
 dsl_pool_t *VAR_7;






 if (FUNC_0(VAR_1) && FUNC_5(VAR_4) == 0)
  return (0);

 VAR_5 = FUNC_3(VAR_2, VAR_0, &VAR_7);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_5 = FUNC_1(VAR_7, VAR_2, VAR_0, &VAR_6);
 if (VAR_5 != 0) {
  FUNC_4(VAR_7, VAR_0);
  return (VAR_5);
 }

 VAR_5 = FUNC_6(VAR_2, VAR_6, VAR_3, VAR_4);

 FUNC_2(VAR_6, VAR_0);
 FUNC_4(VAR_7, VAR_0);
 return (VAR_5);
}
