
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_x__pair_cache_key_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_23__ {scalar_t__ youngest_rev_cache; int flush_to_disk; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_error_t ;
struct TYPE_24__ {TYPE_3__* txn; TYPE_4__* fs; scalar_t__* new_rev_p; int reps_pool; int reps_hash; int reps_to_cache; } ;
typedef TYPE_2__ commit_baton_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;
struct TYPE_26__ {TYPE_1__* fsap_data; } ;
struct TYPE_25__ {scalar_t__ base_rev; int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int *,int *) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int *,int *) ;
 int FUNC_6 (int **,TYPE_4__*,int ,scalar_t__,int *,int *) ;
 int FUNC_7 (TYPE_4__*,int *,int *) ;
 int * FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (TYPE_4__*,int *,int ,int ,scalar_t__,int *) ;
 int FUNC_10 (int **,int ,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (TYPE_4__*,int ,int *) ;
 int FUNC_14 (TYPE_4__*,int ,int *) ;
 char* FUNC_15 (TYPE_4__*,scalar_t__,int *) ;
 char* FUNC_16 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_17 (TYPE_4__*,int ,int *) ;
 int FUNC_18 (TYPE_4__*,int *) ;
 int FUNC_19 (int **,TYPE_4__*,int ,int *) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (scalar_t__*,TYPE_4__*,int *) ;
 int FUNC_22 (char const*,char const*,int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,int *,int *) ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_29 (TYPE_4__*,int ,int *,int *) ;
 int FUNC_30 (int *,int *,TYPE_4__*,int ,int *,scalar_t__,int *) ;
 int FUNC_31 (int *,int *,scalar_t__,TYPE_4__*,int *,int ,int *,int ,int ,int ,int ,int *,int *) ;
 int FUNC_32 (char const**,TYPE_3__*,scalar_t__,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_33(void *VAR_3,
            apr_pool_t *VAR_4)
{
  commit_baton_t *VAR_5 = VAR_3;
  svn_fs_x__data_t *VAR_6 = VAR_5->fs->fsap_data;
  const char *VAR_7, *VAR_8;
  const char *VAR_9;
  svn_fs_x__id_t VAR_10, VAR_11;
  svn_revnum_t VAR_12, VAR_13;
  apr_file_t *VAR_14;
  apr_off_t VAR_15, VAR_16;
  svn_fs_x__txn_id_t VAR_17 = FUNC_20(VAR_5->txn);
  apr_hash_t *VAR_18;
  svn_fs_x__batch_fsync_t *VAR_19;
  apr_array_header_t *VAR_20
    = FUNC_3(VAR_4, 4, sizeof(svn_fs_x__pair_cache_key_t));




  apr_pool_t *VAR_21 = FUNC_26(VAR_4);
  FUNC_0(FUNC_18(VAR_5->fs, VAR_21));


  FUNC_0(FUNC_21(&VAR_12, VAR_5->fs, VAR_21));
  FUNC_25(VAR_21);



  if (VAR_5->txn->base_rev != VAR_12)
    return FUNC_8(VAR_0, ((void*)0),
                            FUNC_2("Transaction out of date"));



  FUNC_0(FUNC_19(&VAR_18, VAR_5->fs, VAR_17,
                                      VAR_4));





  FUNC_0(FUNC_29(VAR_5->fs, VAR_17, VAR_18, VAR_21));
  FUNC_25(VAR_21);


  VAR_13 = VAR_12 + 1;



  FUNC_0(FUNC_10(&VAR_19, VAR_6->flush_to_disk,
                                       VAR_4));


  FUNC_0(FUNC_4(VAR_5->fs, VAR_13, VAR_19, VAR_21));






  FUNC_0(FUNC_6(&VAR_14, VAR_5->fs, VAR_17, VAR_13,
                                 VAR_19, VAR_21));
  FUNC_0(FUNC_24(&VAR_15, VAR_14, VAR_21));
  FUNC_25(VAR_21);


  FUNC_11(&VAR_10, VAR_17);
  FUNC_0(FUNC_31(&VAR_11, VAR_14, VAR_13, VAR_5->fs, &VAR_10,
                          VAR_15, VAR_20, VAR_5->reps_to_cache,
                          VAR_5->reps_hash, VAR_5->reps_pool, VAR_2, VAR_18,
                          VAR_21));
  FUNC_25(VAR_21);


  FUNC_0(FUNC_30(&VAR_16, VAR_14,
                                        VAR_5->fs, VAR_17, VAR_18,
                                        VAR_13, VAR_21));
  FUNC_25(VAR_21);


  FUNC_0(FUNC_9(VAR_5->fs, VAR_14,
                      FUNC_13(VAR_5->fs, VAR_17, VAR_21),
                      FUNC_14(VAR_5->fs, VAR_17, VAR_21),
                      VAR_13, VAR_21));
  FUNC_25(VAR_21);


  VAR_7 = FUNC_16(VAR_5->fs, VAR_12, VAR_21);
  VAR_8 = FUNC_15(VAR_5->fs, VAR_13, VAR_21);
  FUNC_0(FUNC_22(VAR_8, VAR_7, VAR_21));


  FUNC_1(! FUNC_12(VAR_5->fs, VAR_13));
  FUNC_0(FUNC_32(&VAR_9, VAR_5->txn, VAR_13, VAR_19,
                              VAR_21, VAR_21));
  FUNC_0(FUNC_22(VAR_9, VAR_7, VAR_21));
  FUNC_25(VAR_21);


  FUNC_0(FUNC_23(VAR_14, VAR_21));
  FUNC_0(FUNC_28(VAR_5->fs, VAR_13,
                                                      VAR_21));


  FUNC_0(FUNC_5(VAR_5->fs, VAR_13, VAR_19, VAR_21));






  *VAR_5->new_rev_p = VAR_13;

  VAR_6->youngest_rev_cache = VAR_13;



  FUNC_0(FUNC_7(VAR_5->fs, VAR_20, VAR_21));


  FUNC_0(FUNC_17(VAR_5->fs, VAR_5->txn->id, VAR_21));

  FUNC_27(VAR_21);
  return VAR_1;
}
