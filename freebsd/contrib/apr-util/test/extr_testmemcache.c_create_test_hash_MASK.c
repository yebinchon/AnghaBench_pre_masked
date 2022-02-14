
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int ,int ,int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(apr_pool_t *VAR_4, apr_hash_t *VAR_5)
{
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    char *VAR_7, *VAR_8;

    VAR_7 = FUNC_2(VAR_4, VAR_2, FUNC_1(VAR_4, VAR_6), ((void*)0));
    VAR_8 = FUNC_3(VAR_4, VAR_3, FUNC_4((apr_uint32_t)FUNC_5(VAR_3)));

    FUNC_0(VAR_5, VAR_7, VAR_0, VAR_8);
  }

  return VAR_6;
}
