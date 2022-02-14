
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svnlook_ctxt_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int **,int *,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int FUNC_4 (int **,int *,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (int *,int ,int ,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (scalar_t__*,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svnlook_ctxt_t *VAR_3, const char *VAR_4, apr_pool_t *VAR_5)
{
  svn_fs_root_t *VAR_6;
  svn_node_kind_t VAR_7;
  svn_stream_t *VAR_8, *VAR_9;

  FUNC_0(FUNC_2(&VAR_6, VAR_3, VAR_5));
  FUNC_0(FUNC_8(&VAR_7, VAR_6, VAR_4, VAR_5));

  if (VAR_7 != VAR_2)
    return FUNC_3
      (VAR_0, ((void*)0), FUNC_1("Path '%s' is not a file"), VAR_4);



  FUNC_0(FUNC_4(&VAR_8, VAR_6, VAR_4, VAR_5));
  FUNC_0(FUNC_7(&VAR_9, VAR_5));

  return FUNC_5(VAR_8, FUNC_6(VAR_9, VAR_5),
                          VAR_1, ((void*)0), VAR_5);
}
