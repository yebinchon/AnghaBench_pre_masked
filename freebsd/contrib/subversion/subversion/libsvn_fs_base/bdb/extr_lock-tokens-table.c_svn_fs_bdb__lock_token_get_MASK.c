
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_23__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_lock_t ;
struct TYPE_30__ {TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_31__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_32__ {TYPE_23__* lock_tokens; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_33__ {int size; int data; } ;
struct TYPE_29__ {int (* get ) (TYPE_23__*,int ,int ,int ,int ) ;} ;
typedef TYPE_5__ DBT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,char const*) ;
 TYPE_3__* VAR_3 ;
 char* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_23__*,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,char const*) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_1__*,char*,char*) ;
 TYPE_3__* FUNC_12 (int **,TYPE_2__*,char const*,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_13 (TYPE_2__*,char const*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_14(const char **VAR_4,
                           svn_fs_t *VAR_5,
                           const char *VAR_6,
                           trail_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  base_fs_data_t *VAR_9 = VAR_5->fsap_data;
  DBT VAR_10, VAR_11;
  svn_error_t *VAR_12;
  svn_lock_t *VAR_13;
  const char *VAR_14;
  int VAR_15;

  FUNC_11(VAR_7, "lock-tokens", "get");
  VAR_15 = VAR_9->lock_tokens->get(VAR_9->lock_tokens, VAR_7->db_txn,
                                 FUNC_9(&VAR_10, VAR_6),
                                 FUNC_8(&VAR_11),
                                 0);
  FUNC_10(&VAR_11, VAR_8);

  if (VAR_15 == VAR_0)
    return FUNC_3(VAR_5, VAR_6);
  FUNC_2(FUNC_0(VAR_5, FUNC_1("reading lock token"), VAR_15));

  VAR_14 = FUNC_4(VAR_8, VAR_11.data, VAR_11.size);



  VAR_12 = FUNC_12(&VAR_13, VAR_5, VAR_14, VAR_7, VAR_8);
  if (VAR_12 && ((VAR_12->apr_err == VAR_2)
              || (VAR_12->apr_err == VAR_1)))
    {

      svn_error_t *VAR_16;
      VAR_16 = FUNC_13(VAR_5, VAR_6, VAR_7, VAR_8);
      if (VAR_16)
        FUNC_6(VAR_12, VAR_16);
      return FUNC_7(VAR_12);
    }
  else if (VAR_12)
    return FUNC_7(VAR_12);

  *VAR_4 = VAR_14;
  return VAR_3;
}
