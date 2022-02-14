
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_17__ ;


struct TYPE_24__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_25__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
struct TYPE_26__ {int path; TYPE_4__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_27__ {TYPE_17__* node_origins; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_28__ {int size; int data; } ;
struct TYPE_23__ {int (* get ) (TYPE_17__*,int ,TYPE_5__*,int ,int ) ;int (* put ) (TYPE_17__*,int ,TYPE_5__*,TYPE_5__*,int ) ;} ;
typedef TYPE_5__ DBT ;


 int * FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_17__*,int ,TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_17__*,int ,TYPE_5__*,TYPE_5__*,int ) ;
 int * FUNC_5 (int ,int *,int ,char const*,int ,int ,int ) ;
 int FUNC_6 (TYPE_5__*,int const*,int *) ;
 TYPE_2__* FUNC_7 (int const*,int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,char const*) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_1__*,char*,char*) ;
 int FUNC_12 (TYPE_2__ const*,TYPE_2__ const*) ;
 TYPE_2__* FUNC_13 (int ,int ,int *) ;

svn_error_t *FUNC_14(svn_fs_t *VAR_3,
                                         const char *VAR_4,
                                         const svn_fs_id_t *VAR_5,
                                         trail_t *VAR_6,
                                         apr_pool_t *VAR_7)
{
  base_fs_data_t *VAR_8 = VAR_3->fsap_data;
  DBT VAR_9, VAR_10;
  int VAR_11;


  FUNC_9(&VAR_9, VAR_4);





  FUNC_11(VAR_6, "node-origins", "get");
  VAR_11 = VAR_8->node_origins->get(VAR_8->node_origins, VAR_6->db_txn,
                                  &VAR_9, FUNC_8(&VAR_10), 0);
  FUNC_10(&VAR_10, VAR_7);
  if (VAR_11 != VAR_0)
    {
      const svn_string_t *VAR_12 =
        FUNC_7(VAR_5, VAR_7);
      const svn_string_t *VAR_13 =
        FUNC_13(VAR_10.data, VAR_10.size, VAR_7);

      if (! FUNC_12(VAR_12, VAR_13))
        return FUNC_5
          (VAR_1, ((void*)0),
           FUNC_2("Node origin for '%s' exists in filesystem '%s' with a different "
             "value (%s) than what we were about to store (%s)"),
           VAR_4, VAR_3->path, VAR_13->data, VAR_12->data);
      else
        return VAR_2;
    }


  FUNC_6(&VAR_10, VAR_5, VAR_7);
  FUNC_11(VAR_6, "node-origins", "put");
  return FUNC_0(VAR_3, FUNC_1("storing node-origins record"),
                  VAR_8->node_origins->put(VAR_8->node_origins, VAR_6->db_txn,
                                         &VAR_9, &VAR_10, 0));
}
