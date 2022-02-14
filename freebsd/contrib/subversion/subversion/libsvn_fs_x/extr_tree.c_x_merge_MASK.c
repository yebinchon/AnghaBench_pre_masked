
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_fs_txn_t ;
struct TYPE_19__ {int txn; int fs; int is_txn_root; } ;
typedef TYPE_2__ svn_fs_root_t ;
struct TYPE_20__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,TYPE_2__*,int *,int *) ;
 TYPE_3__* FUNC_4 (int *,int *,int *,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_5 (int ,int *,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int **,int ,int ,int *) ;
 TYPE_1__* FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_3,
        svn_fs_root_t *VAR_4,
        const char *VAR_5,
        svn_fs_root_t *VAR_6,
        const char *VAR_7,
        svn_fs_root_t *VAR_8,
        const char *VAR_9,
        apr_pool_t *VAR_10)
{
  dag_node_t *VAR_11, *VAR_12;
  svn_fs_txn_t *VAR_13;
  svn_error_t *VAR_14;
  svn_stringbuf_t *VAR_15 = FUNC_8(VAR_10);

  if (! VAR_6->is_txn_root)
    return FUNC_1(VAR_6);


  if ((VAR_4->fs != VAR_8->fs)
      || (VAR_6->fs != VAR_8->fs))
    {
      return FUNC_5
        (VAR_1, ((void*)0),
         FUNC_2("Bad merge; ancestor, source, and target not all in same fs"));
    }
  FUNC_0(FUNC_3(&VAR_12, VAR_8, VAR_10, VAR_10));


  FUNC_0(FUNC_3(&VAR_11, VAR_4, VAR_10, VAR_10));


  FUNC_0(FUNC_7(&VAR_13, VAR_8->fs, VAR_6->txn,
                             VAR_10));


  VAR_14 = FUNC_4(VAR_12, VAR_11, VAR_13, VAR_15, VAR_10);
  if (VAR_14)
    {
      if ((VAR_14->apr_err == VAR_0) && VAR_3)
        *VAR_3 = VAR_15->data;
      return FUNC_6(VAR_14);
    }

  return VAR_2;
}
