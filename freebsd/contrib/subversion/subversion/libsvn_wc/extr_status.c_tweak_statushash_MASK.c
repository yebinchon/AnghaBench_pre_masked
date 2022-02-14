
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ repos_node_status; int repos_text_status; int repos_prop_status; void* ood_changed_author; int ood_kind; int repos_uuid; int repos_root_url; void* repos_relpath; int ood_changed_date; scalar_t__ ood_changed_rev; int kind; int const* repos_lock; } ;
typedef TYPE_8__ svn_wc_status3_t ;
struct TYPE_21__ {TYPE_8__ s; } ;
typedef TYPE_9__ svn_wc__internal_status_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct file_baton {char const* repos_relpath; char const* ood_changed_author; int ood_kind; TYPE_7__* edit_baton; int ood_changed_date; scalar_t__ ood_changed_rev; TYPE_1__* dir_baton; } ;
struct dir_baton {char const* repos_relpath; char const* ood_changed_author; int ood_changed_date; scalar_t__ ood_changed_rev; int ood_kind; TYPE_4__* edit_baton; int * statii; } ;
typedef enum svn_wc_status_kind { ____Placeholder_svn_wc_status_kind } svn_wc_status_kind ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_19__ {TYPE_6__* anchor_status; } ;
struct TYPE_17__ {int repos_uuid; int repos_root_url; } ;
struct TYPE_18__ {TYPE_5__ s; } ;
struct TYPE_16__ {TYPE_3__* anchor_status; } ;
struct TYPE_14__ {int repos_uuid; int repos_root_url; } ;
struct TYPE_15__ {TYPE_2__ s; } ;
struct TYPE_13__ {int * statii; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_9__**,int *,char const*,scalar_t__,int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 TYPE_8__* FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,void*,TYPE_8__*) ;
 void* FUNC_7 (char const*,int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_5,
                 void *VAR_6,
                 svn_boolean_t VAR_7,
                 svn_wc__db_t *VAR_8,
                 svn_boolean_t VAR_9,
                 const char *VAR_10,
                 enum svn_wc_status_kind VAR_11,
                 enum svn_wc_status_kind VAR_12,
                 enum svn_wc_status_kind VAR_13,
                 svn_revnum_t VAR_14,
                 const svn_lock_t *VAR_15,
                 apr_pool_t *VAR_16)
{
  svn_wc_status3_t *VAR_17;
  apr_pool_t *VAR_18;
  apr_hash_t *VAR_19;

  if (VAR_7)
    VAR_19 = ((struct dir_baton *) VAR_5)->statii;
  else
    VAR_19 = ((struct file_baton *) VAR_5)->dir_baton->statii;
  VAR_18 = FUNC_1(VAR_19);


  VAR_17 = FUNC_5(VAR_19, VAR_10);


  if (! VAR_17)
    {
      svn_wc__internal_status_t *VAR_20;
      if (VAR_11 != VAR_2)
        return VAR_1;


      FUNC_0(FUNC_3(&VAR_20, VAR_8, VAR_10,
                              VAR_9, VAR_18, VAR_16));
      VAR_17 = &VAR_20->s;
      VAR_17->repos_lock = VAR_15;
      FUNC_6(VAR_19, FUNC_2(VAR_18, VAR_10), VAR_17);
    }


  if ((VAR_11 == VAR_2)
      && (VAR_17->repos_node_status == VAR_3))
    VAR_11 = VAR_4;


  if (VAR_11)
    VAR_17->repos_node_status = VAR_11;
  if (VAR_12)
    VAR_17->repos_text_status = VAR_12;
  if (VAR_13)
    VAR_17->repos_prop_status = VAR_13;


  if (VAR_7)
    {
      struct dir_baton *VAR_21 = VAR_6;

      if (!VAR_17->repos_relpath && VAR_21->repos_relpath)
        {
          if (VAR_17->repos_node_status == VAR_3)
            {


              VAR_17->repos_relpath =
                            FUNC_7(VAR_21->repos_relpath,
                                             FUNC_4(VAR_10,
                                                                 ((void*)0)),
                                             VAR_18);
            }
          else
            VAR_17->repos_relpath = FUNC_2(VAR_18, VAR_21->repos_relpath);

          VAR_17->repos_root_url =
                              VAR_21->edit_baton->anchor_status->s.repos_root_url;
          VAR_17->repos_uuid =
                              VAR_21->edit_baton->anchor_status->s.repos_uuid;
        }



      if (VAR_17->repos_node_status == VAR_3)
        {
          VAR_17->ood_kind = VAR_17->kind;






          if (VAR_14 == VAR_0)
            VAR_17->ood_changed_rev =
              ((struct dir_baton *) VAR_5)->ood_changed_rev;
          else
            VAR_17->ood_changed_rev = VAR_14;
        }
      else
        {
          VAR_17->ood_kind = VAR_21->ood_kind;
          VAR_17->ood_changed_rev = VAR_21->ood_changed_rev;
          VAR_17->ood_changed_date = VAR_21->ood_changed_date;
          if (VAR_21->ood_changed_author)
            VAR_17->ood_changed_author =
              FUNC_2(VAR_18, VAR_21->ood_changed_author);
        }

    }
  else
    {
      struct file_baton *VAR_22 = VAR_5;
      VAR_17->ood_changed_rev = VAR_22->ood_changed_rev;
      VAR_17->ood_changed_date = VAR_22->ood_changed_date;
      if (!VAR_17->repos_relpath && VAR_22->repos_relpath)
        {
          VAR_17->repos_relpath = FUNC_2(VAR_18, VAR_22->repos_relpath);
          VAR_17->repos_root_url =
                          VAR_22->edit_baton->anchor_status->s.repos_root_url;
          VAR_17->repos_uuid =
                          VAR_22->edit_baton->anchor_status->s.repos_uuid;
        }
      VAR_17->ood_kind = VAR_22->ood_kind;
      if (VAR_22->ood_changed_author)
        VAR_17->ood_changed_author =
          FUNC_2(VAR_18, VAR_22->ood_changed_author);
    }
  return VAR_1;
}
