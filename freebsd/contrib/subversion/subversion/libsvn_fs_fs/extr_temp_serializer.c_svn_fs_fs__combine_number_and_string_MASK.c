
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 char* FUNC_0 (int *,scalar_t__) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

const char*
FUNC_4(apr_int64_t VAR_0,
                                     const char *VAR_1,
                                     apr_pool_t *VAR_2)
{
  apr_size_t VAR_3 = FUNC_3(VAR_1);



  char *VAR_4 = FUNC_0(VAR_2, VAR_3 + 12);
  const char *VAR_5 = VAR_4;




  VAR_4 = FUNC_1(VAR_0, VAR_4);
  *++VAR_4 = ' ';
  FUNC_2(++VAR_4, VAR_1, VAR_3+1);


  return VAR_5;
}
