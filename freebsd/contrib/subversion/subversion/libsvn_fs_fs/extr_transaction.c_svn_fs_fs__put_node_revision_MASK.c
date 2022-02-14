
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {int is_fresh_txn_root; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_12__ {int format; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_13__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const*) ;
 TYPE_8__* FUNC_5 (int const*,int *) ;
 int FUNC_6 (TYPE_1__*,int const*,int *) ;
 int FUNC_7 (int ,TYPE_2__*,int ,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,int ,int,int ,int *) ;
 int FUNC_10 (int *,int ,int *) ;

svn_error_t *
FUNC_11(svn_fs_t *VAR_8,
                             const svn_fs_id_t *VAR_9,
                             node_revision_t *VAR_10,
                             svn_boolean_t VAR_11,
                             apr_pool_t *VAR_12)
{
  fs_fs_data_t *VAR_13 = VAR_8->fsap_data;
  apr_file_t *VAR_14;

  VAR_10->is_fresh_txn_root = VAR_11;

  if (! FUNC_4(VAR_9))
    return FUNC_2(VAR_5, ((void*)0),
                             FUNC_1("Attempted to write to non-transaction '%s'"),
                             FUNC_5(VAR_9, VAR_12)->data);

  FUNC_0(FUNC_9(&VAR_14,
                           FUNC_6(VAR_8, VAR_9, VAR_12),
                           VAR_4 | VAR_1 | VAR_3
                           | VAR_0, VAR_2, VAR_12));

  FUNC_0(FUNC_7(FUNC_10(VAR_14, VAR_7,
                                                            VAR_12),
                                   VAR_10, VAR_13->format,
                                   FUNC_3(VAR_8),
                                   VAR_12));

  FUNC_0(FUNC_8(VAR_14, VAR_12));

  return VAR_6;
}
