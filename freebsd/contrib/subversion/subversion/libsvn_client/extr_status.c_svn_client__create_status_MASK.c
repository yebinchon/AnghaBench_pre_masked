
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; int moved_to_abspath; int moved_from_abspath; scalar_t__ conflicted; scalar_t__ versioned; int ood_changed_author; int ood_changed_date; int ood_changed_rev; int repos_lock; int repos_prop_status; int repos_text_status; int repos_node_status; int ood_kind; int depth; int changelist; int lock; scalar_t__ file_external; int switched; int repos_relpath; int repos_uuid; int repos_root_url; int changed_author; int changed_date; int changed_rev; int revision; int copied; int locked; void* prop_status; void* text_status; void* node_status; int filesize; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_wc_context_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ kind; char const* local_abspath; int moved_to_abspath; int moved_from_abspath; void* node_status; void* prop_status; void* text_status; TYPE_1__ const* backwards_compatibility_baton; int ood_changed_author; int ood_changed_date; int ood_changed_rev; int repos_lock; int repos_prop_status; int repos_text_status; int repos_node_status; int ood_kind; int depth; int changelist; int lock; int switched; scalar_t__ file_external; int repos_relpath; int repos_uuid; int repos_root_url; int changed_author; int changed_date; int changed_rev; int revision; int copied; int wc_is_locked; scalar_t__ conflicted; scalar_t__ versioned; int filesize; } ;
typedef TYPE_2__ svn_client_status_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,int *) ;
 void* VAR_3 ;

svn_error_t *
FUNC_3(svn_client_status_t **VAR_4,
                          svn_wc_context_t *VAR_5,
                          const char *VAR_6,
                          const svn_wc_status3_t *VAR_7,
                          apr_pool_t *VAR_8,
                          apr_pool_t *VAR_9)
{
  *VAR_4 = FUNC_1(VAR_8, sizeof(**VAR_4));

  (*VAR_4)->kind = VAR_7->kind;
  (*VAR_4)->local_abspath = VAR_6;
  (*VAR_4)->filesize = VAR_7->filesize;
  (*VAR_4)->versioned = VAR_7->versioned;

  (*VAR_4)->conflicted = VAR_7->conflicted;

  (*VAR_4)->node_status = VAR_7->node_status;
  (*VAR_4)->text_status = VAR_7->text_status;
  (*VAR_4)->prop_status = VAR_7->prop_status;

  if (VAR_7->kind == VAR_2)
    (*VAR_4)->wc_is_locked = VAR_7->locked;

  (*VAR_4)->copied = VAR_7->copied;
  (*VAR_4)->revision = VAR_7->revision;

  (*VAR_4)->changed_rev = VAR_7->changed_rev;
  (*VAR_4)->changed_date = VAR_7->changed_date;
  (*VAR_4)->changed_author = VAR_7->changed_author;

  (*VAR_4)->repos_root_url = VAR_7->repos_root_url;
  (*VAR_4)->repos_uuid = VAR_7->repos_uuid;
  (*VAR_4)->repos_relpath = VAR_7->repos_relpath;

  (*VAR_4)->switched = VAR_7->switched;

  (*VAR_4)->file_external = VAR_7->file_external;
  if (VAR_7->file_external)
    {
      (*VAR_4)->switched = VAR_0;
    }

  (*VAR_4)->lock = VAR_7->lock;

  (*VAR_4)->changelist = VAR_7->changelist;
  (*VAR_4)->depth = VAR_7->depth;


  (*VAR_4)->ood_kind = VAR_7->ood_kind;
  (*VAR_4)->repos_node_status = VAR_7->repos_node_status;
  (*VAR_4)->repos_text_status = VAR_7->repos_text_status;
  (*VAR_4)->repos_prop_status = VAR_7->repos_prop_status;
  (*VAR_4)->repos_lock = VAR_7->repos_lock;

  (*VAR_4)->ood_changed_rev = VAR_7->ood_changed_rev;
  (*VAR_4)->ood_changed_date = VAR_7->ood_changed_date;
  (*VAR_4)->ood_changed_author = VAR_7->ood_changed_author;



  (*VAR_4)->backwards_compatibility_baton = VAR_7;

  if (VAR_7->versioned && VAR_7->conflicted)
    {
      svn_boolean_t VAR_10, VAR_11, VAR_12;




      FUNC_0(FUNC_2(&VAR_10, &VAR_11,
                                   &VAR_12, VAR_5, VAR_6,
                                   VAR_9));

      if (VAR_10)
        (*VAR_4)->text_status = VAR_3;

      if (VAR_11)
        (*VAR_4)->prop_status = VAR_3;


      if (VAR_10 || VAR_11)
        (*VAR_4)->node_status = VAR_3;
    }

  (*VAR_4)->moved_from_abspath = VAR_7->moved_from_abspath;
  (*VAR_4)->moved_to_abspath = VAR_7->moved_to_abspath;

  return VAR_1;
}
