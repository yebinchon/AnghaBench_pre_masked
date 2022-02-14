
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_t ;
struct TYPE_3__ {int * apply_textdelta; int * delete_node_property; int close_revision; int * close_node; int * set_fulltext; int * remove_node_props; int * set_node_property; int set_revision_property; int * new_node_record; int new_revision_record; int uuid_record; int * magic_header_record; } ;
typedef TYPE_1__ svn_repos_parse_fns3_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct parse_baton {void* normalize_props; void* ignore_dates; void* use_post_commit_hook; void* use_pre_commit_hook; scalar_t__ end_rev; scalar_t__ start_rev; void* last_rev_mapped; void* oldest_dumpstream_rev; int * rev_map; int notify_pool; int * pool; int * parent_dir; int uuid_action; void* notify_baton; int notify_func; void* validate_props; void* use_history; int fs; int * repos; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 void* FUNC_2 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_5(const svn_repos_parse_fns3_t **VAR_8,
                     void **VAR_9,
                     svn_repos_t *VAR_10,
                     svn_revnum_t VAR_11,
                     svn_revnum_t VAR_12,
                     svn_boolean_t VAR_13,
                     svn_boolean_t VAR_14,
                     svn_boolean_t VAR_15,
                     svn_repos_notify_func_t VAR_16,
                     void *VAR_17,
                     apr_pool_t *VAR_18)
{
  svn_repos_parse_fns3_t *VAR_19 = FUNC_2(VAR_18, sizeof(*VAR_19));
  struct parse_baton *VAR_20 = FUNC_2(VAR_18, sizeof(*VAR_20));

  FUNC_0((FUNC_1(VAR_11) &&
                  FUNC_1(VAR_12))
                 || ((! FUNC_1(VAR_11)) &&
                     (! FUNC_1(VAR_12))));
  if (FUNC_1(VAR_11))
    FUNC_0(VAR_11 <= VAR_12);

  VAR_19->magic_header_record = ((void*)0);
  VAR_19->uuid_record = VAR_7;
  VAR_19->new_revision_record = VAR_4;
  VAR_19->new_node_record = ((void*)0);
  VAR_19->set_revision_property = VAR_5;
  VAR_19->set_node_property = ((void*)0);
  VAR_19->remove_node_props = ((void*)0);
  VAR_19->set_fulltext = ((void*)0);
  VAR_19->close_node = ((void*)0);
  VAR_19->close_revision = VAR_3;
  VAR_19->delete_node_property = ((void*)0);
  VAR_19->apply_textdelta = ((void*)0);

  VAR_20->repos = VAR_10;
  VAR_20->fs = FUNC_4(VAR_10);
  VAR_20->use_history = VAR_0;
  VAR_20->validate_props = VAR_13;
  VAR_20->notify_func = VAR_16;
  VAR_20->notify_baton = VAR_17;
  VAR_20->uuid_action = VAR_6;
  VAR_20->parent_dir = ((void*)0);
  VAR_20->pool = VAR_18;
  VAR_20->notify_pool = FUNC_3(VAR_18);
  VAR_20->rev_map = ((void*)0);
  VAR_20->oldest_dumpstream_rev = VAR_1;
  VAR_20->last_rev_mapped = VAR_1;
  VAR_20->start_rev = VAR_11;
  VAR_20->end_rev = VAR_12;
  VAR_20->use_pre_commit_hook = VAR_0;
  VAR_20->use_post_commit_hook = VAR_0;
  VAR_20->ignore_dates = VAR_14;
  VAR_20->normalize_props = VAR_15;

  *VAR_8 = VAR_19;
  *VAR_9 = VAR_20;
  return VAR_2;
}
