
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_13__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_14__ {TYPE_7__* strings; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {int (* cursor ) (TYPE_7__*,int ,int **,int ) ;int (* put ) (TYPE_7__*,int ,int *,int *,int ) ;} ;
typedef int DBT ;
typedef int DBC ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,char const*) ;
 int * FUNC_4 (TYPE_2__*,char const**,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_7__*,int ,int **,int ) ;
 int FUNC_6 (TYPE_7__*,int ,int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_12(svn_fs_t *VAR_3,
                        const char **VAR_4,
                        const char *VAR_5,
                        trail_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  base_fs_data_t *VAR_8 = VAR_3->fsap_data;
  DBT VAR_9;
  DBT VAR_10;
  DBT VAR_11;
  DBC *VAR_12;
  int VAR_13;



  const char *VAR_14 = FUNC_3(VAR_7, VAR_5);

  FUNC_2(FUNC_4(VAR_3, VAR_4, VAR_6, VAR_7));

  FUNC_11(VAR_6, "strings", "cursor");
  FUNC_2(FUNC_0(VAR_3, FUNC_1("creating cursor for reading a string"),
                   VAR_8->strings->cursor(VAR_8->strings, VAR_6->db_txn,
                                        &VAR_12, 0)));

  FUNC_10(&VAR_9, VAR_14);
  FUNC_10(&VAR_11, *VAR_4);

  FUNC_9(&VAR_10);


  VAR_13 = FUNC_8(VAR_12, &VAR_9, &VAR_10, VAR_2);
  if (VAR_13)
    {
      FUNC_7(VAR_12);
      return FUNC_0(VAR_3, FUNC_1("getting next-key value"), VAR_13);
    }

  while (1)
    {
      FUNC_11(VAR_6, "strings", "put");
      VAR_13 = VAR_8->strings->put(VAR_8->strings, VAR_6->db_txn,
                                 &VAR_11, &VAR_10, 0);
      if (VAR_13)
        {
          FUNC_7(VAR_12);
          return FUNC_0(VAR_3, FUNC_1("writing copied data"), VAR_13);
        }


      FUNC_9(&VAR_10);
      VAR_13 = FUNC_8(VAR_12, &VAR_9, &VAR_10, VAR_0);
      if (VAR_13 == VAR_1)
        break;
      if (VAR_13)
        {
          FUNC_7(VAR_12);
          return FUNC_0(VAR_3, FUNC_1("fetching string data for a copy"), VAR_13);
        }
    }

  return FUNC_0(VAR_3, FUNC_1("closing string-reading cursor"),
                  FUNC_7(VAR_12));
}
