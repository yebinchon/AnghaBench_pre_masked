
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct propset_walk_baton {int notify_baton; int notify_func; int force; int propval; int propname; int db; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (int ,char const*,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_3,
                svn_node_kind_t VAR_4,
                void *VAR_5,
                apr_pool_t *VAR_6)
{
  struct propset_walk_baton *VAR_7 = VAR_5;
  svn_error_t *VAR_8;

  VAR_8 = FUNC_0(VAR_7->db, VAR_3, VAR_4, VAR_7->propname, VAR_7->propval,
                   VAR_7->force, VAR_7->notify_func, VAR_7->notify_baton, VAR_6);
  if (VAR_8 && (VAR_8->apr_err == VAR_0
              || VAR_8->apr_err == VAR_1))
    {
      FUNC_1(VAR_8);
      VAR_8 = VAR_2;
    }

  return FUNC_2(VAR_8);
}
