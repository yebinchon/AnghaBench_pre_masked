
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_fs_root_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int *,char const*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_node_kind_t *VAR_4,
                svn_fs_root_t *VAR_5,
                const char *VAR_6,
                apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_8 &&
      ((VAR_8->apr_err == VAR_1)
       || (VAR_8->apr_err == VAR_0)))
    {
      FUNC_1(VAR_8);
      VAR_8 = VAR_2;
      *VAR_4 = VAR_3;
    }

  return FUNC_2(VAR_8);
}
