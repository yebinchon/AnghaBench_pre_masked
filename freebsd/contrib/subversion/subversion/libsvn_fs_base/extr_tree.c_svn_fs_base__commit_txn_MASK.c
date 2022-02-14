
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_14__ {int * fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct merge_args {scalar_t__ new_rev; TYPE_1__* txn; TYPE_3__* conflict; int * source_node; int * ancestor_node; int * node; int * root; } ;
struct get_root_args {scalar_t__ new_rev; TYPE_1__* txn; TYPE_3__* conflict; int * source_node; int * ancestor_node; int * node; int * root; } ;
struct commit_args {scalar_t__ new_rev; TYPE_1__* txn; TYPE_3__* conflict; int * source_node; int * ancestor_node; int * node; int * root; } ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_16__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,int ,struct merge_args*,int ,int *) ;
 TYPE_2__* FUNC_4 (int **,int *,scalar_t__,int *) ;
 TYPE_2__* FUNC_5 (scalar_t__*,int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

svn_error_t *
FUNC_10(const char **VAR_8,
                        svn_revnum_t *VAR_9,
                        svn_fs_txn_t *VAR_10,
                        apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  svn_fs_t *VAR_13 = VAR_10->fs;
  apr_pool_t *VAR_14 = FUNC_7(VAR_11);


  *VAR_9 = VAR_3;
  if (VAR_8)
    *VAR_8 = ((void*)0);

  while (1729)
    {
      struct get_root_args VAR_15;
      struct merge_args VAR_16;
      struct commit_args VAR_17;
      svn_revnum_t VAR_18;
      svn_fs_root_t *VAR_19;
      dag_node_t *VAR_20;

      FUNC_6(VAR_14);







      FUNC_0(FUNC_5(&VAR_18, VAR_13, VAR_14));
      FUNC_0(FUNC_4(&VAR_19, VAR_13, VAR_18,
                                         VAR_14));
      VAR_15.root = VAR_19;
      FUNC_0(FUNC_3(VAR_13, VAR_6, &VAR_15,
                                     VAR_0, VAR_14));
      VAR_20 = VAR_15.node;





      VAR_16.ancestor_node = ((void*)0);
      VAR_16.source_node = VAR_20;
      VAR_16.txn = VAR_10;
      VAR_16.conflict = FUNC_9(VAR_11);
      VAR_12 = FUNC_3(VAR_13, VAR_7, &VAR_16,
                                   VAR_0, VAR_14);
      if (VAR_12)
        {
          if ((VAR_12->apr_err == VAR_1) && VAR_8)
            *VAR_8 = VAR_16.conflict->data;
          return FUNC_2(VAR_12);
        }


      VAR_17.txn = VAR_10;
      VAR_12 = FUNC_3(VAR_13, VAR_5, &VAR_17,
                                   VAR_0, VAR_14);
      if (VAR_12 && (VAR_12->apr_err == VAR_2))
        {





          svn_revnum_t VAR_21;
          svn_error_t *VAR_22 = FUNC_5(&VAR_21, VAR_13,
                                                        VAR_14);
          if (VAR_22)
            {
              FUNC_1(VAR_12);
              return FUNC_2(VAR_22);

            }
          else if (VAR_21 == VAR_18)
            return FUNC_2(VAR_12);
          else
            FUNC_1(VAR_12);
        }
      else if (VAR_12)
        {
          return FUNC_2(VAR_12);
        }
      else
        {

          *VAR_9 = VAR_17.new_rev;
          break;
        }
    }

  FUNC_8(VAR_14);
  return VAR_4;
}
