
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ node_status; int prop_status; scalar_t__ repos_node_status; int text_status; scalar_t__ repos_text_status; scalar_t__ kind; scalar_t__ conflicted; scalar_t__ versioned; int repos_prop_status; int switched; int ood_changed_author; int ood_kind; int ood_changed_date; int ood_changed_rev; scalar_t__ repos_relpath; int repos_root_url; int repos_lock; int copied; } ;
typedef TYPE_1__ svn_wc_status3_t ;
struct TYPE_18__ {scalar_t__ text_status; int prop_status; scalar_t__ repos_text_status; int pristine_text_status; int pristine_prop_status; int repos_prop_status; int switched; int tree_conflict; int ood_last_cmt_author; int ood_kind; int ood_last_cmt_date; int ood_last_cmt_rev; int url; int repos_lock; int copied; int const* entry; } ;
typedef TYPE_2__ svn_wc_status2_t ;
typedef int svn_wc_entry_t ;
struct TYPE_19__ {int db; } ;
typedef TYPE_3__ svn_wc_context_t ;
typedef int svn_wc_conflict_description2_t ;
struct TYPE_20__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (int const*,int *) ;
 TYPE_4__* FUNC_6 (int const**,int ,char const*,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_7 (int const**,TYPE_3__*,char const*,int *,int *) ;
 TYPE_4__* FUNC_8 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *) ;
 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

svn_error_t *
FUNC_9(svn_wc_status2_t **VAR_10,
                       const svn_wc_status3_t *VAR_11,
                       svn_wc_context_t *VAR_12,
                       const char *VAR_13,
                       apr_pool_t *VAR_14,
                       apr_pool_t *VAR_15)
{
  const svn_wc_entry_t *VAR_16 = ((void*)0);

  if (VAR_11 == ((void*)0))
    {
      *VAR_10 = ((void*)0);
      return VAR_2;
    }

  *VAR_10 = FUNC_1(VAR_14, sizeof(**VAR_10));

  if (VAR_11->versioned)
    {
      svn_error_t *VAR_17;
      VAR_17= FUNC_6(&VAR_16, VAR_12->db, VAR_13, VAR_0,
                             VAR_4, VAR_14, VAR_15);

      if (VAR_17 && VAR_17->apr_err == VAR_1)
        FUNC_2(VAR_17);
      else
        FUNC_0(VAR_17);
    }

  (*VAR_10)->entry = VAR_16;
  (*VAR_10)->copied = VAR_11->copied;
  (*VAR_10)->repos_lock = FUNC_3(VAR_11->repos_lock, VAR_14);

  if (VAR_11->repos_relpath)
    (*VAR_10)->url = FUNC_4(VAR_11->repos_root_url,
                                                 VAR_11->repos_relpath,
                                                 VAR_14);
  (*VAR_10)->ood_last_cmt_rev = VAR_11->ood_changed_rev;
  (*VAR_10)->ood_last_cmt_date = VAR_11->ood_changed_date;
  (*VAR_10)->ood_kind = VAR_11->ood_kind;
  (*VAR_10)->ood_last_cmt_author = VAR_11->ood_changed_author;

  if (VAR_11->conflicted)
    {
      const svn_wc_conflict_description2_t *VAR_18;
      FUNC_0(FUNC_7(&VAR_18, VAR_12, VAR_13,
                                        VAR_15, VAR_15));
      (*VAR_10)->tree_conflict = FUNC_5(VAR_18, VAR_14);
    }

  (*VAR_10)->switched = VAR_11->switched;

  (*VAR_10)->text_status = VAR_11->node_status;
  (*VAR_10)->prop_status = VAR_11->prop_status;

  (*VAR_10)->repos_text_status = VAR_11->repos_node_status;
  (*VAR_10)->repos_prop_status = VAR_11->repos_prop_status;


  if (VAR_11->node_status == 130
      || VAR_11->node_status == 131)
    (*VAR_10)->text_status = VAR_11->text_status;


  if (VAR_11->repos_node_status == 130
      || VAR_11->repos_node_status == 131)
    (*VAR_10)->repos_text_status = VAR_11->repos_text_status;

  if (VAR_11->node_status == VAR_5)
    (*VAR_10)->prop_status = 129;


  switch (VAR_11->text_status)
    {
      case 129:
      case 128:
      case 130:
        (*VAR_10)->pristine_text_status = VAR_11->text_status;
        break;
      case 131:
      default:


        (*VAR_10)->pristine_text_status = 129;
        break;
    }


  switch (VAR_11->prop_status)
    {
      case 129:
      case 128:
      case 130:
        if (VAR_11->node_status != VAR_5
            && VAR_11->node_status != VAR_6
            && VAR_11->node_status != VAR_9)
          {
            (*VAR_10)->pristine_prop_status = VAR_11->prop_status;
          }
        else
          (*VAR_10)->pristine_prop_status = 129;
        break;
      case 131:
      default:


        (*VAR_10)->pristine_prop_status = 129;
        break;
    }

  if (VAR_11->versioned
      && VAR_11->conflicted
      && VAR_11->node_status != VAR_8
      && (VAR_11->kind == VAR_3
          || VAR_11->node_status != VAR_7))
    {
      svn_boolean_t VAR_19, VAR_20;




      FUNC_0(FUNC_8(&VAR_19,
                                            &VAR_20,
                                            ((void*)0),
                                            VAR_12->db, VAR_13,
                                            VAR_15));

      if (VAR_19)
        (*VAR_10)->text_status = 131;

      if (VAR_20)
        (*VAR_10)->prop_status = 131;
    }

  return VAR_2;
}
