
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
typedef int svn_error_t ;
struct TYPE_18__ {TYPE_11__* copies; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {int data; int size; } ;
struct TYPE_15__ {int (* get ) (TYPE_11__*,int ,TYPE_4__*,int ,int ) ;int (* put ) (TYPE_11__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_11__*,int ,TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_11__*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_11(const char **VAR_2,
                            svn_fs_t *VAR_3,
                            trail_t *VAR_4,
                            apr_pool_t *VAR_5)
{
  base_fs_data_t *VAR_6 = VAR_3->fsap_data;
  DBT VAR_7, VAR_8;
  apr_size_t VAR_9;
  char VAR_10[VAR_0];
  int VAR_11;

  FUNC_8(&VAR_7, VAR_1);



  FUNC_10(VAR_4, "copies", "get");
  FUNC_2(FUNC_0(VAR_3, FUNC_1("allocating new copy ID (getting 'next-key')"),
                   VAR_6->copies->get(VAR_6->copies, VAR_4->db_txn, &VAR_7,
                                    FUNC_7(&VAR_8),
                                    0)));
  FUNC_9(&VAR_8, VAR_5);


  *VAR_2 = FUNC_3(VAR_5, VAR_8.data, VAR_8.size);


  VAR_9 = VAR_8.size;
  FUNC_6(VAR_8.data, &VAR_9, VAR_10);
  FUNC_10(VAR_4, "copies", "put");
  VAR_11 = VAR_6->copies->put(VAR_6->copies, VAR_4->db_txn,
                            FUNC_8(&VAR_7, VAR_1),
                            FUNC_8(&VAR_8, VAR_10),
                            0);

  return FUNC_0(VAR_3, FUNC_1("bumping next copy key"), VAR_11);
}
