
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* fs; int rev; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {int dag_node_cache; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_2__* fsap_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ,char const*,int *) ;
 int * FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (int **,char const**,TYPE_1__*,char const*,int *) ;
 int FUNC_5 (void**,scalar_t__*,int *,char const*,int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(dag_node_t **VAR_1,
                   svn_fs_root_t *VAR_2,
                   const char *VAR_3,
                   apr_pool_t *VAR_4)
{
  svn_boolean_t VAR_5;
  dag_node_t *VAR_6 = ((void*)0);
  svn_cache__t *VAR_7;
  const char *VAR_8;

  FUNC_1(*VAR_3 == '/');

  if (!VAR_2->is_txn_root)
    {


      fs_fs_data_t *VAR_9 = VAR_2->fs->fsap_data;

      VAR_6 = FUNC_3(VAR_9->dag_node_cache, VAR_2->rev, VAR_3);
      if (VAR_6 == ((void*)0))
        {
          FUNC_4(&VAR_7, &VAR_8, VAR_2, VAR_3, VAR_4);
          FUNC_0(FUNC_5((void **)&VAR_6, &VAR_5, VAR_7, VAR_8, VAR_4));
          if (VAR_5 && VAR_6)
            {


              FUNC_7(VAR_6, VAR_2->fs);


              FUNC_2(VAR_9->dag_node_cache, VAR_2->rev, VAR_3, VAR_6);
            }
        }
      else
        {

          VAR_6 = FUNC_6(VAR_6, VAR_4);
        }
    }
  else
    {


      FUNC_4(&VAR_7, &VAR_8, VAR_2, VAR_3, VAR_4);

      FUNC_0(FUNC_5((void **) &VAR_6, &VAR_5, VAR_7, VAR_8, VAR_4));
      if (VAR_5 && VAR_6)
        {


          FUNC_7(VAR_6, VAR_2->fs);
        }
    }

  *VAR_1 = VAR_6;

  return VAR_0;
}
