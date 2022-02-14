
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_6 (int *,int *,char const*,int *) ;
 char* FUNC_7 (char const*,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_root_t *VAR_3,
           const char *VAR_4,
           apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;
  const char *VAR_7;

  FUNC_0(FUNC_5(&VAR_6, VAR_3, VAR_4, VAR_5));
  if (VAR_6 == VAR_2)
    return VAR_1;
  for (VAR_7 = VAR_4;
       FUNC_3(VAR_7) > 1;
       VAR_7 = FUNC_7(VAR_7, VAR_5))
    {
      svn_revnum_t VAR_8;

      FUNC_0(FUNC_6(&VAR_8, VAR_3, VAR_7,
                                      VAR_5));
      if (!FUNC_1(VAR_8))
        {





          return VAR_1;
        }
    }

  return FUNC_4(VAR_0, ((void*)0),
                           FUNC_2("'%s' already exists, so may be out"
                             " of date; try updating"),
                           VAR_4);
}
