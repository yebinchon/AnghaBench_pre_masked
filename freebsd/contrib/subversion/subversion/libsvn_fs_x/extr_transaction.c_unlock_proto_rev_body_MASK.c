
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int txn_id; int * lockcookie; } ;
typedef TYPE_1__ unlock_proto_rev_baton_t ;
struct TYPE_5__ {scalar_t__ being_written; } ;
typedef TYPE_2__ svn_fs_x__shared_txn_data_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int ,scalar_t__) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int * FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_3,
                      const void *VAR_4,
                      apr_pool_t *VAR_5)
{
  const unlock_proto_rev_baton_t *VAR_6 = VAR_4;
  apr_file_t *VAR_7 = VAR_6->lockcookie;
  svn_fs_x__shared_txn_data_t *VAR_8 = FUNC_3(VAR_3, VAR_6->txn_id, VAR_0);
  apr_status_t VAR_9;

  if (!VAR_8)
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_0("Can't unlock unknown transaction '%s'"),
                             FUNC_6(VAR_6->txn_id, VAR_5));
  if (!VAR_8->being_written)
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_0("Can't unlock nonlocked transaction '%s'"),
                             FUNC_6(VAR_6->txn_id, VAR_5));

  VAR_9 = FUNC_2(VAR_7);
  if (VAR_9)
    return FUNC_5
      (VAR_9,
       FUNC_0("Can't unlock prototype revision lockfile for transaction '%s'"),
       FUNC_6(VAR_6->txn_id, VAR_5));
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9)
    return FUNC_5
      (VAR_9,
       FUNC_0("Can't close prototype revision lockfile for transaction '%s'"),
       FUNC_6(VAR_6->txn_id, VAR_5));

  VAR_8->being_written = VAR_0;

  return VAR_2;
}
