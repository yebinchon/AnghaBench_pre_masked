
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_16__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_17__ {TYPE_10__* strings; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_18__ {int data; int size; } ;
struct TYPE_14__ {int (* cursor ) (TYPE_10__*,int ,int **,int ) ;} ;
typedef TYPE_4__ DBT ;
typedef int DBC ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_10__*,int ,int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,TYPE_4__*,int ,int ) ;
 int FUNC_8 (int ,int *,char*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_fs_t *VAR_4,
                 const char **VAR_5,
                 trail_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  base_fs_data_t *VAR_8 = VAR_4->fsap_data;
  DBC *VAR_9;
  char VAR_10[VAR_2];
  apr_size_t VAR_11;
  int VAR_12;
  DBT VAR_13;
  DBT VAR_14;
  FUNC_12(VAR_6, "strings", "cursor");
  FUNC_2(FUNC_0(VAR_4, FUNC_1("creating cursor for reading a string"),
                   VAR_8->strings->cursor(VAR_8->strings, VAR_6->db_txn,
                                        &VAR_9, 0)));



  VAR_12 = FUNC_6(VAR_9,
                           FUNC_10(&VAR_13, VAR_3),
                           FUNC_9(&VAR_14),
                           VAR_1);
  if (VAR_12)
    {
      FUNC_5(VAR_9);
      return FUNC_0(VAR_4, FUNC_1("getting next-key value"), VAR_12);
    }

  FUNC_11(&VAR_14, VAR_7);
  *VAR_5 = FUNC_3(VAR_7, VAR_14.data, VAR_14.size);


  VAR_11 = VAR_14.size;
  FUNC_8(VAR_14.data, &VAR_11, VAR_10);


  VAR_12 = FUNC_7(VAR_9, &VAR_13,
                           FUNC_10(&VAR_14, VAR_10),
                           VAR_0);
  if (VAR_12)
    {
      FUNC_5(VAR_9);

      return FUNC_0(VAR_4, FUNC_1("bumping next string key"), VAR_12);
    }

  return FUNC_0(VAR_4, FUNC_1("closing string-reading cursor"),
                  FUNC_5(VAR_9));
}
