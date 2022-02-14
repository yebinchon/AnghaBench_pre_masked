
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static apr_status_t FUNC_3(void *VAR_1)
{
  svn_error_t *VAR_2 = VAR_1;
  FUNC_0(VAR_2);

  if (!FUNC_2("SVN_DBG_NO_ABORT_ON_ERROR_LEAK"))
    FUNC_1();
  return VAR_0;
}
