
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int data; } ;
struct TYPE_9__ {TYPE_1__ path; scalar_t__ prop_mod; scalar_t__ text_mod; int node_kind; int copyfrom_rev; int copyfrom_path; int change_kind; } ;
typedef TYPE_2__ svn_repos_path_change_t ;
struct TYPE_10__ {void* props_modified; void* text_modified; int node_kind; int copyfrom_rev; int copyfrom_path; int action; } ;
typedef TYPE_3__ svn_log_changed_path2_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int * changes; int changes_pool; } ;
typedef TYPE_4__ log_entry_receiver_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,char const*,int ,TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_3,
                          svn_repos_path_change_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  log_entry_receiver_baton_t *VAR_6 = VAR_3;
  svn_log_changed_path2_t *VAR_7;
  const char *VAR_8 = FUNC_2(VAR_6->changes_pool, VAR_4->path.data,
                                    VAR_4->path.len);


  VAR_7 = FUNC_5(VAR_6->changes_pool);
  VAR_7->action = FUNC_3(VAR_4->change_kind);

  if (VAR_4->copyfrom_path)
    VAR_7->copyfrom_path = FUNC_1(VAR_6->changes_pool,
                                             VAR_4->copyfrom_path);

  VAR_7->copyfrom_rev = VAR_4->copyfrom_rev;
  VAR_7->node_kind = VAR_4->node_kind;
  VAR_7->text_modified = VAR_4->text_mod ? VAR_2
                                                : VAR_1;
  VAR_7->props_modified = VAR_4->prop_mod ? VAR_2
                                                 : VAR_1;



  if (VAR_6->changes == ((void*)0))
    VAR_6->changes = FUNC_4(VAR_6->changes_pool);


  FUNC_0(VAR_6->changes, VAR_8, VAR_4->path.len, VAR_7);

  return VAR_0;
}
