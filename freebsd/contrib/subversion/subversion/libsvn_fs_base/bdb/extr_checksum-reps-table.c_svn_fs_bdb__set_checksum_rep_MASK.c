
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_15__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_16__ {int path; TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_17__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
struct TYPE_18__ {TYPE_11__* checksum_reps; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int (* get ) (TYPE_11__*,int ,int *,int ,int ) ;int (* put ) (TYPE_11__*,int ,int *,int *,int ) ;} ;
typedef int DBT ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_11__*,int ,int *,int ,int ) ;
 int FUNC_5 (TYPE_11__*,int ,int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_6 (TYPE_3__*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,int ,char const*,int ) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_14(svn_fs_t *VAR_5,
                                          svn_checksum_t *VAR_6,
                                          const char *VAR_7,
                                          trail_t *VAR_8,
                                          apr_pool_t *VAR_9)
{
  base_fs_data_t *VAR_10 = VAR_5->fsap_data;
  DBT VAR_11, VAR_12;
  int VAR_13;


  if (VAR_6->kind != VAR_4)
    return FUNC_7(VAR_1, ((void*)0),
                            FUNC_3("Only SHA1 checksums can be used as keys in the "
                              "checksum-reps table.\n"));


  FUNC_9(&VAR_11, VAR_6);





  FUNC_13(VAR_8, "checksum-reps", "get");
  VAR_13 = VAR_10->checksum_reps->get(VAR_10->checksum_reps, VAR_8->db_txn,
                                   &VAR_11, FUNC_10(&VAR_12), 0);
  FUNC_12(&VAR_12, VAR_9);
  if (VAR_13 != VAR_0)
    {
      const char *VAR_14 = FUNC_6(VAR_6, VAR_9);
      return FUNC_8
        (VAR_2, ((void*)0),
         FUNC_3("Representation key for checksum '%s' exists in filesystem '%s'."),
         VAR_14, VAR_5->path);
    }


  FUNC_11(&VAR_12, VAR_7);
  FUNC_13(VAR_8, "checksum-reps", "put");
  FUNC_2(FUNC_0(VAR_5, FUNC_1("storing checksum-reps record"),
                   VAR_10->checksum_reps->put(VAR_10->checksum_reps, VAR_8->db_txn,
                                           &VAR_11, &VAR_12, 0)));
  return VAR_3;
}
