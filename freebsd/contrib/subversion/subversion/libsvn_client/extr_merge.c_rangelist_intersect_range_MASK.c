
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_rangelist_t ;
typedef int svn_merge_range_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_4 (int **,int *,int const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_rangelist_t **VAR_2,
                          const svn_rangelist_t *VAR_3,
                          svn_revnum_t VAR_4,
                          svn_revnum_t VAR_5,
                          svn_boolean_t VAR_6,
                          apr_pool_t *VAR_7,
                          apr_pool_t *VAR_8)
{
  FUNC_1(VAR_4 <= VAR_5);

  if (VAR_4 < VAR_5)
    {
      svn_rangelist_t *VAR_9 =
        FUNC_3(VAR_4, VAR_5, VAR_1, VAR_8);

      FUNC_0(FUNC_4(VAR_2,
                                      VAR_9, VAR_3,
                                      VAR_6, VAR_7));
    }
  else
    {
      *VAR_2 = FUNC_2(VAR_7, 0,
                                      sizeof(svn_merge_range_t *));
    }
  return VAR_0;
}
