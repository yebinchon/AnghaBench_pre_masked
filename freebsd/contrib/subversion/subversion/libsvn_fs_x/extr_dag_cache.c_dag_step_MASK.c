
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_13__ {TYPE_9__* dag_node_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
typedef int svn_fs_x__change_set_t ;
struct TYPE_14__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int dag_node_t ;
struct TYPE_15__ {int * node; } ;
typedef TYPE_4__ cache_entry_t ;
typedef int apr_pool_t ;
struct TYPE_16__ {int pool; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char const*) ;
 int * VAR_0 ;
 char* FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 TYPE_4__* FUNC_4 (TYPE_9__*,int ,TYPE_1__ const*) ;
 char* FUNC_5 (char const*,int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int **,TYPE_3__*,int *,int ,int *) ;
 int FUNC_8 (int *,int *,char const*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(dag_node_t **VAR_1,
         svn_fs_root_t *VAR_2,
         dag_node_t *VAR_3,
         const char *VAR_4,
         const svn_string_t *VAR_5,
         svn_fs_x__change_set_t VAR_6,
         svn_boolean_t VAR_7,
         apr_pool_t *VAR_8)
{
  svn_fs_t *VAR_9 = FUNC_6(VAR_3);
  svn_fs_x__data_t *VAR_10 = VAR_9->fsap_data;
  cache_entry_t *VAR_11;
  svn_fs_x__id_t VAR_12;



  VAR_11 = FUNC_4(VAR_10->dag_node_cache, VAR_6, VAR_5);
  if (VAR_11->node)
    {

      *VAR_1 = VAR_11->node;
      return VAR_0;
    }



  FUNC_0(FUNC_8(&VAR_12, VAR_3, VAR_4, VAR_8));
  if (! FUNC_9(&VAR_12))
    {
      const char *VAR_13;


      if (VAR_7)
        {
          *VAR_1 = ((void*)0);
          return VAR_0;
        }


      VAR_13 = FUNC_2(VAR_8, VAR_5->data, VAR_5->len);
      VAR_13 = FUNC_5(VAR_13, VAR_8);

      return FUNC_1(VAR_2, VAR_13);
    }




  if (FUNC_3(VAR_10->dag_node_cache))
    VAR_11 = FUNC_4(VAR_10->dag_node_cache, VAR_6, VAR_5);


  FUNC_0(FUNC_7(&VAR_11->node, VAR_9, &VAR_12,
                                 VAR_10->dag_node_cache->pool,
                                 VAR_8));


  *VAR_1 = VAR_11->node;
  return VAR_0;
}
