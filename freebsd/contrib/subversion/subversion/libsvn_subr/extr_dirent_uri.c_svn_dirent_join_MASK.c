
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,char const*,int) ;
 char* FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int *) ;

char *FUNC_11(const char *VAR_0,
                      const char *VAR_1,
                      apr_pool_t *VAR_2)
{
  apr_size_t VAR_3 = FUNC_8(VAR_0);
  apr_size_t VAR_4 = FUNC_8(VAR_1);
  char *VAR_5;
  int VAR_6;

  FUNC_4(FUNC_10(VAR_0, VAR_2));
  FUNC_4(FUNC_10(VAR_1, VAR_2));


  if (FUNC_9(VAR_1))
    return FUNC_2(VAR_2, VAR_1, VAR_4 + 1);


  if (FUNC_0(VAR_0))
    return FUNC_2(VAR_2, VAR_1, VAR_4 + 1);
  if (FUNC_0(VAR_1))
    return FUNC_2(VAR_2, VAR_0, VAR_3 + 1);
  VAR_6 = 1;
  if (VAR_0[VAR_3 - 1] == '/'



        )
          VAR_6 = 0;


  VAR_5 = FUNC_1(VAR_2, VAR_3 + VAR_6 + VAR_4 + 1);
  FUNC_7(VAR_5, VAR_0, VAR_3);
  if (VAR_6)
    VAR_5[VAR_3] = '/';
  FUNC_7(VAR_5 + VAR_3 + VAR_6, VAR_1, VAR_4 + 1);

  return VAR_5;
}
