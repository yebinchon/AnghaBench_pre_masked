
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,char const*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_revnum_t
FUNC_4(svn_fs_root_t *VAR_1,
                  const char *VAR_2,
                  apr_pool_t *VAR_3)
{
  svn_revnum_t VAR_4;
  svn_error_t *VAR_5;



  if (FUNC_1(VAR_1))
    return FUNC_3(VAR_1);



  if ((VAR_5 = FUNC_2(&VAR_4, VAR_1, VAR_2, VAR_3)))
    {
      VAR_4 = VAR_0;
      FUNC_0(VAR_5);
    }







  return VAR_4;
}
