
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_18__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_19__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int representation_t ;
struct TYPE_20__ {TYPE_13__* representations; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_21__ {int data; int size; } ;
struct TYPE_17__ {int (* get ) (TYPE_13__*,int ,TYPE_4__*,int ,int ) ;int (* put ) (TYPE_13__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_13__*,int ,TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_13__*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;
 int * FUNC_11 (TYPE_2__*,char const*,int const*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_12(const char **VAR_2,
                          svn_fs_t *VAR_3,
                          const representation_t *VAR_4,
                          trail_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  DBT VAR_8, VAR_9;
  int VAR_10;
  apr_size_t VAR_11;
  char VAR_12[VAR_0];





  FUNC_8(&VAR_8, VAR_1);
  FUNC_10(VAR_5, "representations", "get");
  FUNC_2(FUNC_0(VAR_3, FUNC_1("allocating new representation (getting next-key)"),
                   VAR_7->representations->get
                   (VAR_7->representations, VAR_5->db_txn, &VAR_8,
                    FUNC_7(&VAR_9), 0)));

  FUNC_9(&VAR_9, VAR_6);


  *VAR_2 = FUNC_3(VAR_6, VAR_9.data, VAR_9.size);
  FUNC_2(FUNC_11(VAR_3, *VAR_2, VAR_4, VAR_5, VAR_6));


  VAR_11 = VAR_9.size;
  FUNC_6(VAR_9.data, &VAR_11, VAR_12);
  FUNC_10(VAR_5, "representations", "put");
  VAR_10 = VAR_7->representations->put
    (VAR_7->representations, VAR_5->db_txn,
     FUNC_8(&VAR_8, VAR_1),
     FUNC_8(&VAR_9, VAR_12),
     0);

  return FUNC_0(VAR_3, FUNC_1("bumping next representation key"), VAR_10);
}
