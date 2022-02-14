
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_15__ {TYPE_3__* fsap_data; int * vtable; int base_rev; TYPE_2__* fs; int id; } ;
typedef TYPE_1__ svn_fs_txn_t ;
struct TYPE_16__ {TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int txn_id; } ;
typedef TYPE_3__ fs_txn_data_t ;
struct TYPE_18__ {scalar_t__ format; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_3 (int *,int *,TYPE_2__*,int ,int *) ;
 int FUNC_4 (int *,int *,TYPE_2__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int *) ;
 int FUNC_9 (int **,TYPE_2__*,int ,int *,int *) ;
 int * FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (int ,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_12(svn_fs_txn_t **VAR_2,
                      svn_fs_t *VAR_3,
                      svn_revnum_t VAR_4,
                      apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_3->fsap_data;
  svn_fs_txn_t *VAR_7;
  fs_txn_data_t *VAR_8;
  svn_fs_id_t *VAR_9;

  VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
  VAR_8 = FUNC_1(VAR_5, sizeof(*VAR_8));


  if (VAR_6->format >= VAR_0)
    FUNC_0(FUNC_3(&VAR_7->id, &VAR_8->txn_id, VAR_3, VAR_4, VAR_5));
  else
    FUNC_0(FUNC_4(&VAR_7->id, &VAR_8->txn_id, VAR_3, VAR_4, VAR_5));

  VAR_7->fs = VAR_3;
  VAR_7->base_rev = VAR_4;

  VAR_7->vtable = &VAR_1;
  VAR_7->fsap_data = VAR_8;
  *VAR_2 = VAR_7;


  FUNC_0(FUNC_9(&VAR_9, VAR_3, VAR_4, VAR_5, VAR_5));
  FUNC_0(FUNC_2(VAR_3, &VAR_8->txn_id, VAR_9, VAR_5));


  FUNC_0(FUNC_11(
                    FUNC_7(VAR_3, &VAR_8->txn_id, VAR_5),
                    VAR_5));


  FUNC_0(FUNC_11(
               FUNC_8(VAR_3, &VAR_8->txn_id, VAR_5),
               VAR_5));


  FUNC_0(FUNC_11(FUNC_5(VAR_3, &VAR_8->txn_id, VAR_5),
                                   VAR_5));


  return FUNC_10(FUNC_6(VAR_3, &VAR_8->txn_id, VAR_5),
                            "0 0\n", VAR_5);
}
