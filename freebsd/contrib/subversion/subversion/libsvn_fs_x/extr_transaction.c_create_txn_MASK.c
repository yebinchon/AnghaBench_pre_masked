
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; int * vtable; int base_rev; int * fs; int id; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int txn_id; } ;
typedef TYPE_2__ fs_txn_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_fs_txn_t **VAR_2,
           svn_fs_t *VAR_3,
           svn_revnum_t VAR_4,
           apr_pool_t *VAR_5,
           apr_pool_t *VAR_6)
{
  svn_fs_txn_t *VAR_7;
  fs_txn_data_t *VAR_8;
  svn_fs_x__id_t VAR_9;

  VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
  VAR_8 = FUNC_1(VAR_5, sizeof(*VAR_8));


  FUNC_0(FUNC_4(VAR_4, VAR_3, VAR_6));


  FUNC_0(FUNC_3(&VAR_7->id, &VAR_8->txn_id, VAR_3, VAR_5,
                         VAR_6));

  VAR_7->fs = VAR_3;
  VAR_7->base_rev = VAR_4;

  VAR_7->vtable = &VAR_1;
  VAR_7->fsap_data = VAR_8;
  *VAR_2 = VAR_7;


  FUNC_5(&VAR_9, VAR_4);
  FUNC_0(FUNC_2(VAR_3, VAR_8->txn_id, &VAR_9,
                                          VAR_6));


  FUNC_0(FUNC_11(
              FUNC_8(VAR_3, VAR_8->txn_id, VAR_6),
              VAR_6));


  FUNC_0(FUNC_11(
              FUNC_9(VAR_3, VAR_8->txn_id, VAR_6),
              VAR_6));


  FUNC_0(FUNC_11(
              FUNC_6(VAR_3, VAR_8->txn_id, VAR_6),
              VAR_6));


  FUNC_0(FUNC_10(
              FUNC_7(VAR_3, VAR_8->txn_id, VAR_6),
              "0 0\n", VAR_6));

  return VAR_0;
}
