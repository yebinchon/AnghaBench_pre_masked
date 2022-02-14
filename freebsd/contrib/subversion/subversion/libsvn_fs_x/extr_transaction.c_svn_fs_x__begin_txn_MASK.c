
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
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__**,int *,int ,int *,int *) ;
 int FUNC_4 (int *,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (char*,int *) ;
 int FUNC_9 (int ,int *) ;

svn_error_t *
FUNC_10(svn_fs_txn_t **VAR_9,
                    svn_fs_t *VAR_10,
                    svn_revnum_t VAR_11,
                    apr_uint32_t VAR_12,
                    apr_pool_t *VAR_13,
                    apr_pool_t *VAR_14)
{
  svn_string_t VAR_15;
  fs_txn_data_t *VAR_16;
  apr_hash_t *VAR_17 = FUNC_1(VAR_14);

  FUNC_0(FUNC_6(VAR_10, VAR_8));

  FUNC_0(FUNC_3(VAR_9, VAR_10, VAR_11, VAR_13, VAR_14));






  VAR_15.data = FUNC_9(FUNC_2(), VAR_14);
  VAR_15.len = FUNC_5(VAR_15.data);

  FUNC_7(VAR_17, VAR_7, &VAR_15);



  if (VAR_12 & VAR_1)
    FUNC_7(VAR_17, VAR_4,
                  FUNC_8("true", VAR_14));

  if (VAR_12 & VAR_0)
    FUNC_7(VAR_17, VAR_3,
                  FUNC_8("true", VAR_14));

  if (VAR_12 & VAR_2)
    FUNC_7(VAR_17, VAR_5,
                  FUNC_8("0", VAR_14));

  VAR_16 = (*VAR_9)->fsap_data;
  FUNC_0(FUNC_4(VAR_10, VAR_16->txn_id, VAR_17, VAR_14));

  return VAR_6;
}
