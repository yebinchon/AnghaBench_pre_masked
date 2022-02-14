
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


struct TYPE_37__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_38__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct commit_baton {TYPE_4__* txn; TYPE_5__* fs; scalar_t__* new_rev_p; int reps_pool; int reps_hash; int reps_to_cache; } ;
typedef int pair_cache_key_t ;
struct TYPE_39__ {scalar_t__ max_files_per_dir; scalar_t__ youngest_rev_cache; scalar_t__ verify_before_commit; scalar_t__ flush_to_disk; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;
struct TYPE_41__ {int path; TYPE_3__* fsap_data; } ;
struct TYPE_40__ {scalar_t__ base_rev; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int,int) ;
 int FUNC_5 (int **,void**,TYPE_5__*,int const*,int *) ;
 int FUNC_6 (TYPE_5__*,int *,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ,int *,int ) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_5__*,int *,int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_12 (int const*) ;
 int * FUNC_13 (int const*,int *) ;
 int FUNC_14 (TYPE_5__*,scalar_t__) ;
 int FUNC_15 (char const*,char const*,char const*,scalar_t__,int *) ;
 int FUNC_16 (TYPE_5__*,int const*,int *) ;
 int FUNC_17 (TYPE_5__*,int const*,int *) ;
 char* FUNC_18 (TYPE_5__*,scalar_t__,int *) ;
 char* FUNC_19 (TYPE_5__*,scalar_t__,int *) ;
 char* FUNC_20 (TYPE_5__*,scalar_t__,int *) ;
 char* FUNC_21 (TYPE_5__*,scalar_t__,int *) ;
 char* FUNC_22 (TYPE_5__*,scalar_t__,int *) ;
 char* FUNC_23 (TYPE_5__*,int const*,int *) ;
 int FUNC_24 (TYPE_5__*,int ,int *) ;
 int FUNC_25 (scalar_t__*,int *,int *,TYPE_5__*,int *) ;
 int FUNC_26 (TYPE_5__*,int *) ;
 int FUNC_27 (int **,TYPE_5__*,int const*,int *) ;
 int * FUNC_28 (TYPE_4__*) ;
 TYPE_1__* FUNC_29 (int ,int ,int *) ;
 scalar_t__ FUNC_30 (TYPE_5__*) ;
 int FUNC_31 (int ,char const*,int *) ;
 TYPE_2__* FUNC_32 (char const*,int ,int *) ;
 int FUNC_33 (int *,int *) ;
 int FUNC_34 (int *,int *) ;
 int FUNC_35 (int *,int *,int *) ;
 int FUNC_36 (int *,int ,int ,int *,int *) ;
 int FUNC_37 (TYPE_5__*,int const*,void*,int *) ;
 int FUNC_38 (TYPE_5__*,scalar_t__,int *) ;
 int FUNC_39 (TYPE_5__*,int const*,int *,int *) ;
 int FUNC_40 (int *,int *,TYPE_5__*,int const*,int *,int *) ;
 int FUNC_41 (TYPE_5__*,int const*,scalar_t__,int ,int ,int *) ;
 int FUNC_42 (int const**,int *,scalar_t__,TYPE_5__*,int const*,int ,int ,int ,int *,int ,int ,int ,int ,int *) ;
 int FUNC_43 (char const*,char const*,TYPE_4__*,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_44(void *VAR_6, apr_pool_t *VAR_7)
{
  struct commit_baton *VAR_8 = VAR_6;
  fs_fs_data_t *VAR_9 = VAR_8->fs->fsap_data;
  const char *VAR_10, *VAR_11, *VAR_12;
  const char *VAR_13;
  const svn_fs_id_t *VAR_14, *VAR_15;
  apr_uint64_t VAR_16;
  apr_uint64_t VAR_17;
  svn_revnum_t VAR_18, VAR_19;
  apr_file_t *VAR_20;
  void *VAR_21;
  apr_off_t VAR_22, VAR_23;
  const svn_fs_fs__id_part_t *VAR_24 = FUNC_28(VAR_8->txn);
  apr_hash_t *VAR_25;
  apr_array_header_t *VAR_26 = FUNC_4(VAR_7, 4,
                                                     sizeof(pair_cache_key_t));
  FUNC_1(FUNC_26(VAR_8->fs, VAR_7));




  FUNC_1(FUNC_25(&VAR_18, &VAR_16, &VAR_17,
                                  VAR_8->fs, VAR_7));
  VAR_9->youngest_rev_cache = VAR_18;



  if (VAR_8->txn->base_rev != VAR_18)
    return FUNC_9(VAR_3, ((void*)0),
                            FUNC_3("Transaction out of date"));



  FUNC_1(FUNC_27(&VAR_25, VAR_8->fs, VAR_24,
                                       VAR_7));





  FUNC_1(FUNC_39(VAR_8->fs, VAR_24, VAR_25, VAR_7));


  VAR_19 = VAR_18 + 1;


  FUNC_1(FUNC_5(&VAR_20, &VAR_21,
                                 VAR_8->fs, VAR_24, VAR_7));
  FUNC_1(FUNC_35(&VAR_22, VAR_20, VAR_7));


  VAR_14 = FUNC_13(VAR_24, VAR_7);
  FUNC_1(FUNC_42(&VAR_15, VAR_20, VAR_19, VAR_8->fs, VAR_14,
                          VAR_16, VAR_17, VAR_22,
                          VAR_26, VAR_8->reps_to_cache, VAR_8->reps_hash,
                          VAR_8->reps_pool, VAR_5, VAR_7));


  FUNC_1(FUNC_40(&VAR_23, VAR_20,
                                        VAR_8->fs, VAR_24, VAR_25,
                                        VAR_7));

  if (FUNC_30(VAR_8->fs))
    {

      FUNC_1(FUNC_11(VAR_8->fs, VAR_20,
                      FUNC_16(VAR_8->fs, VAR_24, VAR_7),
                      FUNC_17(VAR_8->fs, VAR_24, VAR_7),
                      VAR_19, VAR_7));
    }
  else
    {


      svn_stringbuf_t *VAR_27
        = FUNC_29
                  ((apr_off_t)FUNC_12(VAR_15),
                   VAR_23,
                   VAR_7);
      FUNC_1(FUNC_36(VAR_20, VAR_27->data, VAR_27->len,
                                     ((void*)0), VAR_7));
    }

  if (VAR_9->flush_to_disk)
    FUNC_1(FUNC_34(VAR_20, VAR_7));
  FUNC_1(FUNC_33(VAR_20, VAR_7));
  if (VAR_9->max_files_per_dir && VAR_19 % VAR_9->max_files_per_dir == 0)
    {

        {
          const char *VAR_28
            = FUNC_20(VAR_8->fs, VAR_19, VAR_7);
          svn_error_t *VAR_29
            = FUNC_32(VAR_28, VAR_0, VAR_7);
          if (VAR_29 && !FUNC_0(VAR_29->apr_err))
            return FUNC_10(VAR_29);
          FUNC_8(VAR_29);
          FUNC_1(FUNC_31(FUNC_7(VAR_8->fs->path,
                                                    VAR_2,
                                                    VAR_7),
                                    VAR_28, VAR_7));
        }


      FUNC_2(! FUNC_14(VAR_8->fs, VAR_19));
        {
          const char *VAR_30
            = FUNC_22(VAR_8->fs, VAR_19, VAR_7);
          svn_error_t *VAR_31
            = FUNC_32(VAR_30, VAR_0, VAR_7);
          if (VAR_31 && !FUNC_0(VAR_31->apr_err))
            return FUNC_10(VAR_31);
          FUNC_8(VAR_31);
          FUNC_1(FUNC_31(FUNC_7(VAR_8->fs->path,
                                                    VAR_1,
                                                    VAR_7),
                                    VAR_30, VAR_7));
        }
    }






  VAR_10 = FUNC_19(VAR_8->fs, VAR_18, VAR_7);
  VAR_11 = FUNC_18(VAR_8->fs, VAR_19, VAR_7);
  VAR_12 = FUNC_23(VAR_8->fs, VAR_24, VAR_7);
  FUNC_1(FUNC_15(VAR_12, VAR_11,
                                     VAR_10, VAR_9->flush_to_disk,
                                     VAR_7));





  FUNC_1(FUNC_37(VAR_8->fs, VAR_24, VAR_21, VAR_7));


  FUNC_2(! FUNC_14(VAR_8->fs, VAR_19));
  VAR_13 = FUNC_21(VAR_8->fs, VAR_19, VAR_7);
  FUNC_1(FUNC_43(VAR_13, VAR_10,
                              VAR_8->txn, VAR_9->flush_to_disk, VAR_7));


  if (VAR_9->verify_before_commit)
    {
      FUNC_1(FUNC_38(VAR_8->fs, VAR_19, VAR_7));
    }


  FUNC_1(FUNC_41(VAR_8->fs, VAR_24, VAR_19, VAR_16,
                              VAR_17, VAR_7));






  *VAR_8->new_rev_p = VAR_19;

  VAR_9->youngest_rev_cache = VAR_19;



  FUNC_1(FUNC_6(VAR_8->fs, VAR_26, VAR_7));


  FUNC_1(FUNC_24(VAR_8->fs, VAR_8->txn->id, VAR_7));

  return VAR_4;
}
