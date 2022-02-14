
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_sqlite__db_t ;
struct TYPE_12__ {int pool; int path; TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_13__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {scalar_t__ format; int * rep_cache_db; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 char* FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (char const*,char const*,int *) ;
 TYPE_2__* FUNC_9 (char const*,int *) ;
 int FUNC_10 (int *,int) ;
 int VAR_5 ;
 int FUNC_11 (int **,char const*,int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_12 (int*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(void *VAR_6,
               apr_pool_t *VAR_7)
{
  svn_fs_t *VAR_8 = VAR_6;
  fs_fs_data_t *VAR_9 = VAR_8->fsap_data;
  svn_sqlite__db_t *VAR_10;
  const char *VAR_11;
  int VAR_12;



  VAR_11 = FUNC_3(VAR_8->path, VAR_7);

  {



    svn_boolean_t VAR_13;

    FUNC_1(FUNC_6(&VAR_13, VAR_8, VAR_7));
    if (!VAR_13)
      {
        const char *VAR_14 = FUNC_7(VAR_8, VAR_7);
        svn_error_t *VAR_15 = FUNC_9(VAR_11, VAR_7);

        if (VAR_15 && !FUNC_0(VAR_15->apr_err))

          return FUNC_5(VAR_15);
        else if (VAR_15)

          FUNC_4(VAR_15);
        else

          FUNC_1(FUNC_8(VAR_14, VAR_11, VAR_7));
      }
  }

  FUNC_1(FUNC_11(&VAR_10, VAR_11,
                           VAR_5, VAR_4,
                           0, ((void*)0), 0,
                           VAR_8->pool, VAR_7));

  FUNC_2(FUNC_12(&VAR_12, VAR_10, VAR_7),
                        VAR_10);

  if (VAR_12 <= 0)
    {
      int VAR_16;

      if (VAR_9->format >= VAR_2)
        VAR_16 = VAR_1;
      else
        VAR_16 = VAR_0;

      FUNC_2(FUNC_10(VAR_10, VAR_16), VAR_10);
    }



  VAR_9->rep_cache_db = VAR_10;

  return VAR_3;
}
