
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_t ;
struct TYPE_3__ {int apply_textdelta; int delete_node_property; int close_revision; int close_node; int set_fulltext; int remove_node_props; int set_node_property; int set_revision_property; int new_node_record; int new_revision_record; int uuid_record; int * magic_header_record; } ;
typedef TYPE_1__ svn_repos_parse_fns3_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct parse_baton {int uuid_action; char const* parent_dir; void* normalize_props; void* ignore_dates; void* use_post_commit_hook; void* use_pre_commit_hook; scalar_t__ end_rev; scalar_t__ start_rev; void* last_rev_mapped; void* oldest_dumpstream_rev; int rev_map; int notify_pool; int * pool; void* notify_baton; int notify_func; void* validate_props; void* use_history; int fs; int * repos; } ;
typedef enum svn_repos_load_uuid { ____Placeholder_svn_repos_load_uuid } svn_repos_load_uuid ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *) ;
 int VAR_12 ;

svn_error_t *
FUNC_7(const svn_repos_parse_fns3_t **VAR_13,
                               void **VAR_14,
                               svn_repos_t *VAR_15,
                               svn_revnum_t VAR_16,
                               svn_revnum_t VAR_17,
                               svn_boolean_t VAR_18,
                               svn_boolean_t VAR_19,
                               enum svn_repos_load_uuid VAR_20,
                               const char *VAR_21,
                               svn_boolean_t VAR_22,
                               svn_boolean_t VAR_23,
                               svn_boolean_t VAR_24,
                               svn_boolean_t VAR_25,
                               svn_repos_notify_func_t VAR_26,
                               void *VAR_27,
                               apr_pool_t *VAR_28)
{
  svn_repos_parse_fns3_t *VAR_29 = FUNC_3(VAR_28, sizeof(*VAR_29));
  struct parse_baton *VAR_30 = FUNC_3(VAR_28, sizeof(*VAR_30));

  if (VAR_21)
    VAR_21 = FUNC_5(VAR_21, VAR_28);

  FUNC_0((FUNC_1(VAR_16) &&
                  FUNC_1(VAR_17))
                 || ((! FUNC_1(VAR_16)) &&
                     (! FUNC_1(VAR_17))));
  if (FUNC_1(VAR_16))
    FUNC_0(VAR_16 <= VAR_17);

  VAR_29->magic_header_record = ((void*)0);
  VAR_29->uuid_record = VAR_12;
  VAR_29->new_revision_record = VAR_7;
  VAR_29->new_node_record = VAR_6;
  VAR_29->set_revision_property = VAR_11;
  VAR_29->set_node_property = VAR_10;
  VAR_29->remove_node_props = VAR_8;
  VAR_29->set_fulltext = VAR_9;
  VAR_29->close_node = VAR_3;
  VAR_29->close_revision = VAR_4;
  VAR_29->delete_node_property = VAR_5;
  VAR_29->apply_textdelta = VAR_2;

  VAR_30->repos = VAR_15;
  VAR_30->fs = FUNC_6(VAR_15);
  VAR_30->use_history = VAR_18;
  VAR_30->validate_props = VAR_19;
  VAR_30->notify_func = VAR_26;
  VAR_30->notify_baton = VAR_27;
  VAR_30->uuid_action = VAR_20;
  VAR_30->parent_dir = VAR_21;
  VAR_30->pool = VAR_28;
  VAR_30->notify_pool = FUNC_4(VAR_28);
  VAR_30->rev_map = FUNC_2(VAR_28);
  VAR_30->oldest_dumpstream_rev = VAR_0;
  VAR_30->last_rev_mapped = VAR_0;
  VAR_30->start_rev = VAR_16;
  VAR_30->end_rev = VAR_17;
  VAR_30->use_pre_commit_hook = VAR_22;
  VAR_30->use_post_commit_hook = VAR_23;
  VAR_30->ignore_dates = VAR_24;
  VAR_30->normalize_props = VAR_25;

  *VAR_13 = VAR_29;
  *VAR_14 = VAR_30;
  return VAR_1;
}
