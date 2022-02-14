
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const**,int *) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_0,
         svn_ra_session_t *VAR_1,
         apr_pool_t *VAR_2)
{
  if (VAR_0 == ((void*)0))
    {
      svn_error_t *VAR_3 = FUNC_2(VAR_1, &VAR_0,
                                                VAR_2);
      if (VAR_3)
        {


          FUNC_1(VAR_3);
          return FUNC_0("<repository>");
        }
    }
  return VAR_0;
}
