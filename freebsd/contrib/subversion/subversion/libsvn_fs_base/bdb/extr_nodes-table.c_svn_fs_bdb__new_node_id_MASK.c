
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_16__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_17__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_18__ {TYPE_11__* nodes; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {int data; int size; } ;
struct TYPE_15__ {int (* get ) (TYPE_11__*,int ,TYPE_4__*,int ,int ) ;int (* put ) (TYPE_11__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int * VAR_2 ;
 char* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_11__*,int ,TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_11__*,int ,int ,int ,int ) ;
 int * FUNC_7 (char const*,char const*,char const*,int *) ;
 int FUNC_8 (int ,int *,char*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_13(svn_fs_id_t **VAR_3,
                        svn_fs_t *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6,
                        trail_t *VAR_7,
                        apr_pool_t *VAR_8)
{
  base_fs_data_t *VAR_9 = VAR_4->fsap_data;
  DBT VAR_10, VAR_11;
  apr_size_t VAR_12;
  char VAR_13[VAR_0];
  int VAR_14;
  const char *VAR_15;

  FUNC_3(VAR_6);


  FUNC_10(&VAR_10, VAR_1);
  FUNC_12(VAR_7, "nodes", "get");
  FUNC_2(FUNC_0(VAR_4, FUNC_1("allocating new node ID (getting 'next-key')"),
                   VAR_9->nodes->get(VAR_9->nodes, VAR_7->db_txn,
                                   &VAR_10,
                                   FUNC_9(&VAR_11),
                                   0)));
  FUNC_11(&VAR_11, VAR_8);


  VAR_15 = FUNC_4(VAR_8, VAR_11.data, VAR_11.size);


  VAR_12 = VAR_11.size;
  FUNC_8(VAR_11.data, &VAR_12, VAR_13);
  FUNC_12(VAR_7, "nodes", "put");
  VAR_14 = VAR_9->nodes->put(VAR_9->nodes, VAR_7->db_txn,
                           FUNC_10(&VAR_10, VAR_1),
                           FUNC_10(&VAR_11, VAR_13),
                           0);
  FUNC_2(FUNC_0(VAR_4, FUNC_1("bumping next node ID key"), VAR_14));


  *VAR_3 = FUNC_7(VAR_15, VAR_5, VAR_6, VAR_8);
  return VAR_2;
}
