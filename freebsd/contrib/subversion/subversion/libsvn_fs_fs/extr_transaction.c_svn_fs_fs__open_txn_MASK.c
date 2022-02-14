
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int base_id; } ;
typedef TYPE_1__ transaction_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_7__ {TYPE_3__* fsap_data; int * vtable; int base_rev; int * fs; int id; } ;
typedef TYPE_2__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int txn_id; } ;
typedef TYPE_3__ fs_txn_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (TYPE_1__**,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

svn_error_t *
FUNC_10(svn_fs_txn_t **VAR_4,
                    svn_fs_t *VAR_5,
                    const char *VAR_6,
                    apr_pool_t *VAR_7)
{
  svn_fs_txn_t *VAR_8;
  fs_txn_data_t *VAR_9;
  svn_node_kind_t VAR_10;
  transaction_t *VAR_11;
  svn_fs_fs__id_part_t VAR_12;

  FUNC_0(FUNC_7(&VAR_12, VAR_6));


  FUNC_0(FUNC_9(FUNC_8(VAR_5, &VAR_12, VAR_7),
                            &VAR_10, VAR_7));


  if (VAR_10 != VAR_2)
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_1("No such transaction '%s'"),
                             VAR_6);

  VAR_8 = FUNC_2(VAR_7, sizeof(*VAR_8));
  VAR_9 = FUNC_2(VAR_7, sizeof(*VAR_9));
  VAR_9->txn_id = VAR_12;


  VAR_8->id = FUNC_3(VAR_7, VAR_6);
  VAR_8->fs = VAR_5;

  FUNC_0(FUNC_5(&VAR_11, VAR_5, &VAR_12, VAR_7));

  VAR_8->base_rev = FUNC_6(VAR_11->base_id);

  VAR_8->vtable = &VAR_3;
  VAR_8->fsap_data = VAR_9;
  *VAR_4 = VAR_8;

  return VAR_1;
}
