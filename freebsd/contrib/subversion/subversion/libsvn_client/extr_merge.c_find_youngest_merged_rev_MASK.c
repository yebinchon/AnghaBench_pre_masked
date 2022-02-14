
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_revnum_t *VAR_2,
                         svn_mergeinfo_t VAR_3,
                         svn_mergeinfo_t VAR_4,
                         apr_pool_t *VAR_5)
{
  svn_mergeinfo_t VAR_6;

  FUNC_0(FUNC_4(
            &VAR_6,
            VAR_4, VAR_3, VAR_1,
            VAR_5, VAR_5));
  if (FUNC_2(VAR_6))
    {
      svn_revnum_t VAR_7, VAR_8;


      FUNC_0(FUNC_3(
                &VAR_8, &VAR_7,
                VAR_6, VAR_5));
      if (!FUNC_1(*VAR_2)
          || (VAR_8 > *VAR_2))
        *VAR_2 = VAR_8;
    }

  return VAR_0;
}
