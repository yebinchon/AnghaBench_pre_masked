
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int node_kind; scalar_t__ prop_changed; scalar_t__ summarize_kind; int path; } ;
typedef TYPE_1__ svn_client_diff_summarize_t ;
typedef scalar_t__ svn_client_diff_summarize_kind_t ;
typedef scalar_t__ svn_boolean_t ;
struct summarize_baton_t {int summarize_func_baton; int (* summarize_func ) (TYPE_1__*,int ,int *) ;int skip_relpath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct summarize_baton_t *VAR_3,
             const char *VAR_4,
             svn_client_diff_summarize_kind_t VAR_5,
             svn_boolean_t VAR_6,
             svn_node_kind_t VAR_7,
             apr_pool_t *VAR_8)
{
  svn_client_diff_summarize_t *VAR_9 = FUNC_2(VAR_8, sizeof(*VAR_9));

  FUNC_1(VAR_5 != VAR_2
                 || VAR_6);



  VAR_9->path = FUNC_4(VAR_3->skip_relpath, VAR_4);
  VAR_9->summarize_kind = VAR_5;
  if (VAR_5 == VAR_1
      || VAR_5 == VAR_2)
    VAR_9->prop_changed = VAR_6;
  VAR_9->node_kind = VAR_7;

  FUNC_0(VAR_3->summarize_func(VAR_9, VAR_3->summarize_func_baton, VAR_8));
  return VAR_0;
}
