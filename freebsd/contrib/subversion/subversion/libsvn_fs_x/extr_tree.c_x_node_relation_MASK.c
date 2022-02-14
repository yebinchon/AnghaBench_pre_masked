
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_x__id_t ;
struct TYPE_5__ {scalar_t__ fs; scalar_t__ is_txn_root; scalar_t__ rev; int txn; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_node_relation_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **,TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_node_relation_t *VAR_4,
                svn_fs_root_t *VAR_5,
                const char *VAR_6,
                svn_fs_root_t *VAR_7,
                const char *VAR_8,
                apr_pool_t *VAR_9)
{
  dag_node_t *VAR_10;
  svn_fs_x__id_t VAR_11, VAR_12, VAR_13, VAR_14;


  svn_boolean_t VAR_15
    = (VAR_6[0] == '\0') || ((VAR_6[0] == '/') && (VAR_6[1] == '\0'));
  svn_boolean_t VAR_16
    = (VAR_8[0] == '\0') || ((VAR_8[0] == '/') && (VAR_8[1] == '\0'));


  if (VAR_5->fs != VAR_7->fs)
    {
      *VAR_4 = VAR_3;
      return VAR_0;
    }



  if (VAR_15 && VAR_16)
    {
      svn_boolean_t VAR_17
        = VAR_5->is_txn_root && VAR_7->is_txn_root
            && FUNC_1(VAR_5->txn, VAR_7->txn);


      *VAR_4 = ( (VAR_5->rev == VAR_7->rev)
                   && (VAR_5->is_txn_root == VAR_7->is_txn_root)
                   && !VAR_17)
                ? VAR_2
                : VAR_1;
      return VAR_0;
    }



  FUNC_0(FUNC_4(&VAR_10, VAR_5, VAR_6, VAR_9));
  VAR_11 = *FUNC_2(VAR_10);
  VAR_13 = *FUNC_3(VAR_10);

  FUNC_0(FUNC_4(&VAR_10, VAR_7, VAR_8, VAR_9));
  VAR_12 = *FUNC_2(VAR_10);
  VAR_14 = *FUNC_3(VAR_10);



  if (FUNC_5(&VAR_11, &VAR_12))
    *VAR_4 = VAR_2;
  else if (FUNC_5(&VAR_13, &VAR_14))
    *VAR_4 = VAR_1;
  else
    *VAR_4 = VAR_3;

  return VAR_0;
}
