
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_sqlite__db_t ;
struct TYPE_12__ {int * rep_cache_db; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_13__ {int pool; int path; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_2__*,int *) ;
 char* FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (char const*,char const*,int *) ;
 TYPE_3__* FUNC_9 (char const*,int *) ;
 int FUNC_10 (int *,int ) ;
 int VAR_4 ;
 int FUNC_11 (int **,char const*,int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_12 (int*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(void *VAR_5,
               apr_pool_t *VAR_6)
{
  svn_fs_t *VAR_7 = VAR_5;
  svn_fs_x__data_t *VAR_8 = VAR_7->fsap_data;
  svn_sqlite__db_t *VAR_9;
  const char *VAR_10;
  int VAR_11;



  VAR_10 = FUNC_3(VAR_7->path, VAR_6);

  {



    svn_boolean_t VAR_12;

    FUNC_1(FUNC_6(&VAR_12, VAR_7, VAR_6));
    if (!VAR_12)
      {
        const char *VAR_13 = FUNC_7(VAR_7, VAR_6);
        svn_error_t *VAR_14 = FUNC_9(VAR_10, VAR_6);

        if (VAR_14 && !FUNC_0(VAR_14->apr_err))

          return FUNC_5(VAR_14);
        else if (VAR_14)

          FUNC_4(VAR_14);
        else

          FUNC_1(FUNC_8(VAR_13, VAR_10, VAR_6));
      }
  }

  FUNC_1(FUNC_11(&VAR_9, VAR_10,
                           VAR_4, VAR_3,
                           0, ((void*)0), 0,
                           VAR_7->pool, VAR_6));

  FUNC_2(FUNC_12(&VAR_11, VAR_9,
                                                        VAR_6),
                        VAR_9);
  if (VAR_11 < VAR_0)
    {


      FUNC_2(FUNC_10(VAR_9,
                                                        VAR_1),
                            VAR_9);
    }



  VAR_8->rep_cache_db = VAR_9;

  return VAR_2;
}
