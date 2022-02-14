
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int svn_fs_txn_t ;
typedef int svn_fs_t ;
struct TYPE_17__ {int txn; int * fs; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct merge_args {TYPE_3__* conflict; int * txn; int * ancestor_node; int * source_node; int * node; TYPE_1__* root; } ;
struct get_root_args {TYPE_3__* conflict; int * txn; int * ancestor_node; int * source_node; int * node; TYPE_1__* root; } ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int ,int *,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int **,int *,int ,int *) ;
 TYPE_2__* FUNC_6 (int *,int ,struct merge_args*,int ,int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_6,
           svn_fs_root_t *VAR_7,
           const char *VAR_8,
           svn_fs_root_t *VAR_9,
           const char *VAR_10,
           svn_fs_root_t *VAR_11,
           const char *VAR_12,
           apr_pool_t *VAR_13)
{
  dag_node_t *VAR_14, *VAR_15;
  struct get_root_args VAR_16;
  struct merge_args VAR_17;
  svn_fs_txn_t *VAR_18;
  svn_error_t *VAR_19;
  svn_fs_t *VAR_20;

  if (! VAR_9->is_txn_root)
    return FUNC_1(VAR_9);


  VAR_20 = VAR_11->fs;
  if ((VAR_7->fs != VAR_20) || (VAR_9->fs != VAR_20))
    {
      return FUNC_3
        (VAR_2, ((void*)0),
         FUNC_2("Bad merge; ancestor, source, and target not all in same fs"));
    }
  VAR_16.root = VAR_11;
  FUNC_0(FUNC_6(VAR_20, VAR_4, &VAR_16,
                                 VAR_0, VAR_13));
  VAR_15 = VAR_16.node;


  VAR_16.root = VAR_7;
  FUNC_0(FUNC_6(VAR_20, VAR_4, &VAR_16,
                                 VAR_0, VAR_13));
  VAR_14 = VAR_16.node;


  FUNC_0(FUNC_5(&VAR_18, VAR_20, VAR_9->txn, VAR_13));


  VAR_17.source_node = VAR_14;
  VAR_17.ancestor_node = VAR_15;
  VAR_17.txn = VAR_18;
  VAR_17.conflict = FUNC_7(VAR_13);
  VAR_19 = FUNC_6(VAR_20, VAR_5, &VAR_17, VAR_0, VAR_13);
  if (VAR_19)
    {
      if ((VAR_19->apr_err == VAR_1) && VAR_6)
        *VAR_6 = VAR_17.conflict->data;
      return FUNC_4(VAR_19);
    }

  return VAR_3;
}
