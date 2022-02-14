
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;


struct TYPE_22__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_23__ {scalar_t__ expiration_date; } ;
typedef TYPE_2__ svn_lock_t ;
struct TYPE_24__ {TYPE_4__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_25__ {TYPE_18__* locks; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_26__ {int size; int data; } ;
struct TYPE_21__ {int (* get ) (TYPE_18__*,int ,int ,int ,int ) ;} ;
typedef TYPE_5__ DBT ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_3__*,char const*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_18__*,int ,int ,int ,int ) ;
 int * FUNC_6 (TYPE_3__*,char const*) ;
 int * FUNC_7 (TYPE_3__*,char const*) ;
 int FUNC_8 (TYPE_2__**,int *,int *) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,char const*) ;
 int FUNC_11 (TYPE_5__*,int *) ;
 int FUNC_12 (TYPE_1__*,char*,char*) ;
 int FUNC_13 (TYPE_3__*,char const*,TYPE_1__*,int *) ;
 int * FUNC_14 (int ,int ,int *) ;

svn_error_t *
FUNC_15(svn_lock_t **VAR_2,
                     svn_fs_t *VAR_3,
                     const char *VAR_4,
                     trail_t *VAR_5,
                     apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  DBT VAR_8, VAR_9;
  int VAR_10;
  svn_skel_t *VAR_11;
  svn_lock_t *VAR_12;

  FUNC_12(VAR_5, "lock", "get");
  VAR_10 = VAR_7->locks->get(VAR_7->locks, VAR_5->db_txn,
                           FUNC_10(&VAR_8, VAR_4),
                           FUNC_9(&VAR_9),
                           0);
  FUNC_11(&VAR_9, VAR_6);

  if (VAR_10 == VAR_0)
    return FUNC_6(VAR_3, VAR_4);
  FUNC_2(FUNC_0(VAR_3, FUNC_1("reading lock"), VAR_10));


  VAR_11 = FUNC_14(VAR_9.data, VAR_9.size, VAR_6);
  if (! VAR_11)
    return FUNC_7(VAR_3, VAR_4);


  FUNC_2(FUNC_8(&VAR_12, VAR_11, VAR_6));


  if (VAR_12->expiration_date && (FUNC_4() > VAR_12->expiration_date))
    {
      FUNC_2(FUNC_13(VAR_3, VAR_4, VAR_5, VAR_6));
      return FUNC_3(VAR_3, VAR_4);
    }

  *VAR_2 = VAR_12;
  return VAR_1;
}
