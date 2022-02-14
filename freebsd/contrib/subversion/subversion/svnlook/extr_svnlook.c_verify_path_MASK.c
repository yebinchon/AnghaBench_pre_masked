
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (scalar_t__*,int *,char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_node_kind_t *VAR_3,
            svn_fs_root_t *VAR_4,
            const char *VAR_5,
            apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6));

  if (*VAR_3 == VAR_2)
    {
      if (FUNC_4(VAR_5))
        return FUNC_2
          (VAR_0, ((void*)0),
           FUNC_1("'%s' is a URL, probably should be a path"), VAR_5);
      else
        return FUNC_2
          (VAR_0, ((void*)0), FUNC_1("Path '%s' does not exist"), VAR_5);
    }

  return VAR_1;
}
