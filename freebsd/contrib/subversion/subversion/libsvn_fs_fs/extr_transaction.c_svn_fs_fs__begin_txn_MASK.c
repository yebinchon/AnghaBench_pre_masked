
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_9__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int txn_id; } ;
typedef TYPE_3__ fs_txn_data_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__**,int *,int ,int *) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (char*,int *) ;
 int FUNC_10 (int ,int *) ;

svn_error_t *
FUNC_11(svn_fs_txn_t **VAR_8,
                     svn_fs_t *VAR_9,
                     svn_revnum_t VAR_10,
                     apr_uint32_t VAR_11,
                     apr_pool_t *VAR_12)
{
  svn_string_t VAR_13;
  fs_txn_data_t *VAR_14;
  apr_hash_t *VAR_15 = FUNC_1(VAR_12);

  FUNC_0(FUNC_6(VAR_9, VAR_7));

  FUNC_0(FUNC_7(VAR_8, VAR_9, VAR_10, VAR_12));






  VAR_13.data = FUNC_10(FUNC_2(), VAR_12);
  VAR_13.len = FUNC_4(VAR_13.data);

  FUNC_8(VAR_15, VAR_6, &VAR_13);



  if (VAR_11 & VAR_1)
    FUNC_8(VAR_15, VAR_4,
                  FUNC_9("true", VAR_12));

  if (VAR_11 & VAR_0)
    FUNC_8(VAR_15, VAR_3,
                  FUNC_9("true", VAR_12));

  if (VAR_11 & VAR_2)
    FUNC_8(VAR_15, VAR_5,
                  FUNC_9("0", VAR_12));

  VAR_14 = (*VAR_8)->fsap_data;
  return FUNC_5(FUNC_3(VAR_9, &VAR_14->txn_id, VAR_15, VAR_12));
}
