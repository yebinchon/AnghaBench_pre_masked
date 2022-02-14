
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
struct conflict_walker_baton {scalar_t__ quit; int ctx; int conflict_stats; int pb; int path_prefix; int editor_cmd; int accept_which; int printed_summary; int external_failed; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,int *,int *,int *,int ,int ,int ,int ,int ,int ,int *) ;
 int * FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2, svn_client_conflict_t *VAR_3,
                apr_pool_t *VAR_4)
{
  struct conflict_walker_baton *VAR_5 = VAR_2;

  FUNC_0(FUNC_1(&VAR_5->quit, &VAR_5->external_failed,
                                   &VAR_5->printed_summary, VAR_3,
                                   VAR_5->accept_which, VAR_5->editor_cmd,
                                   VAR_5->path_prefix, VAR_5->pb,
                                   VAR_5->conflict_stats,
                                   VAR_5->ctx, VAR_4));
  if (VAR_5->quit)
    return FUNC_2(VAR_0, ((void*)0), ((void*)0));

  return VAR_1;
}
