
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,void*,int **) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,int *,int *) ;

__attribute__((used)) static int
FUNC_6(dsl_pool_t *VAR_3, const char *VAR_4,
    dsl_dataset_t **VAR_5, void *VAR_6, char **VAR_7)
{
 char VAR_8[VAR_2];
 char *VAR_9;

 if (FUNC_4(VAR_4) >= VAR_2)
  return (FUNC_0(VAR_1));
 VAR_9 = FUNC_2(VAR_4, '#');
 if (VAR_9 == ((void*)0))
  return (FUNC_0(VAR_0));

 *VAR_7 = VAR_9 + 1;
 if (FUNC_5(*VAR_7, ((void*)0), ((void*)0)))
  return (FUNC_0(VAR_0));
 (void) FUNC_3(VAR_8, VAR_4, VAR_9 - VAR_4 + 1);
 return (FUNC_1(VAR_3, VAR_8, VAR_6, VAR_5));
}
