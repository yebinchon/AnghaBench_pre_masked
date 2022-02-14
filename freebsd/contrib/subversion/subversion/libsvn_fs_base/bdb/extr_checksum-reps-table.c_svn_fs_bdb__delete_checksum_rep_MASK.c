
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_14__ {TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_15__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
struct TYPE_16__ {TYPE_10__* checksum_reps; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* del ) (TYPE_10__*,int ,int *,int ) ;} ;
typedef int DBT ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_10__*,int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_8(svn_fs_t *VAR_3,
                                             svn_checksum_t *VAR_4,
                                             trail_t *VAR_5,
                                             apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  DBT VAR_8;


  if (VAR_4->kind != VAR_2)
    return FUNC_5(VAR_0, ((void*)0),
                            FUNC_3("Only SHA1 checksums can be used as keys in the "
                              "checksum-reps table.\n"));

  FUNC_6(&VAR_8, VAR_4);
  FUNC_7(VAR_5, "checksum-reps", "del");
  FUNC_2(FUNC_0(VAR_3, FUNC_1("deleting entry from 'checksum-reps' table"),
                   VAR_7->checksum_reps->del(VAR_7->checksum_reps,
                                           VAR_5->db_txn, &VAR_8, 0)));
  return VAR_1;
}
