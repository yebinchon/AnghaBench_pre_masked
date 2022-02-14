
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_18__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_19__ {TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_20__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
struct TYPE_21__ {TYPE_16__* checksum_reps; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_22__ {int size; int data; } ;
struct TYPE_17__ {int (* get ) (TYPE_16__*,int ,int ,int ,int ) ;} ;
typedef TYPE_5__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_16__*,int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;
 int * FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_9(const char **VAR_4,
                                          svn_fs_t *VAR_5,
                                          svn_checksum_t *VAR_6,
                                          trail_t *VAR_7,
                                          apr_pool_t *VAR_8)
{
  base_fs_data_t *VAR_9 = VAR_5->fsap_data;
  DBT VAR_10, VAR_11;
  int VAR_12;


  if (VAR_6->kind != VAR_3)
    return FUNC_3(VAR_1, ((void*)0),
                            FUNC_0("Only SHA1 checksums can be used as keys in the "
                              "checksum-reps table.\n"));

  FUNC_8(VAR_7, "checksum-reps", "get");
  VAR_12 = VAR_9->checksum_reps->get(VAR_9->checksum_reps, VAR_7->db_txn,
                                   FUNC_4(&VAR_10, VAR_6),
                                   FUNC_6(&VAR_11), 0);
  FUNC_7(&VAR_11, VAR_8);

  if (VAR_12 == VAR_0)
    return FUNC_5(VAR_5, VAR_6);

  *VAR_4 = FUNC_1(VAR_8, VAR_11.data, VAR_11.size);
  return VAR_2;
}
