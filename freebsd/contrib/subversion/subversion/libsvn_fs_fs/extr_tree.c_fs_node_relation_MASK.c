
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ is_txn_root; scalar_t__ fs; scalar_t__ rev; int txn; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_node_relation_t ;
typedef int svn_fs_id_t ;
struct TYPE_10__ {scalar_t__ revision; } ;
typedef TYPE_2__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int **,TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;
 TYPE_2__* FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_node_relation_t *VAR_5,
                 svn_fs_root_t *VAR_6, const char *VAR_7,
                 svn_fs_root_t *VAR_8, const char *VAR_9,
                 apr_pool_t *VAR_10)
{
  dag_node_t *VAR_11;
  const svn_fs_id_t *VAR_12, *VAR_13;
  svn_fs_fs__id_part_t VAR_14, VAR_15;


  svn_boolean_t VAR_16
    = (VAR_7[0] == '\0') || ((VAR_7[0] == '/') && (VAR_7[1] == '\0'));
  svn_boolean_t VAR_17
    = (VAR_9[0] == '\0') || ((VAR_9[0] == '/') && (VAR_9[1] == '\0'));


  svn_boolean_t VAR_18
    = VAR_6->is_txn_root && VAR_8->is_txn_root
        && FUNC_2(VAR_6->txn, VAR_8->txn);


  if (VAR_6->fs != VAR_8->fs)
    {
      *VAR_5 = VAR_4;
      return VAR_1;
    }



  if (VAR_16 && VAR_17)
    {

      *VAR_5 = ( (VAR_6->rev == VAR_8->rev)
                   && (VAR_6->is_txn_root == VAR_8->is_txn_root)
                   && !VAR_18)
                ? VAR_3
                : VAR_2;
      return VAR_1;
    }



  FUNC_0(FUNC_1(&VAR_11, VAR_6, VAR_7, VAR_10));
  VAR_12 = FUNC_3(VAR_11);
  VAR_14 = *FUNC_5(VAR_12);

  FUNC_0(FUNC_1(&VAR_11, VAR_8, VAR_9, VAR_10));
  VAR_13 = FUNC_3(VAR_11);
  VAR_15 = *FUNC_5(VAR_13);


  if (!FUNC_6(&VAR_14, &VAR_15))
    {
      *VAR_5 = VAR_4;
      return VAR_1;
    }





  if (VAR_18 && VAR_14.revision == VAR_0)
    {
      *VAR_5 = VAR_4;
      return VAR_1;
    }


  if (FUNC_4(VAR_12, VAR_13))
    *VAR_5 = VAR_3;
  else
    *VAR_5 = VAR_2;

  return VAR_1;
}
