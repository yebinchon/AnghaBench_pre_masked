
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int * (* svn_repos_verify_callback_t ) (void*,int ,int *,int *) ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_revnum_t VAR_1,
             svn_error_t *VAR_2,
             svn_repos_verify_callback_t VAR_3,
             void *VAR_4,
             apr_pool_t *VAR_5)
{
  if (VAR_3)
    {
      svn_error_t *VAR_6;



      VAR_6 = VAR_3(VAR_4, VAR_1, VAR_2, VAR_5);
      FUNC_1(VAR_2);
      FUNC_0(VAR_6);

      return VAR_0;
    }
  else
    {

      return FUNC_2(VAR_2);
    }
}
