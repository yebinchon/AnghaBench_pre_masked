
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
struct TYPE_15__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_16__ {scalar_t__ kind; int digest; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_17__ {int revision; void* expanded_size; void* size; void* item_index; int has_sha1; int sha1_digest; int txn_id; } ;
typedef TYPE_3__ representation_t ;
struct TYPE_18__ {int rep_cache_db; int rep_sharing_allowed; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,char*,int ) ;
 int * FUNC_9 (int ,TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int *,char*,int ) ;
 void* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int **,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__*,int *) ;

svn_error_t *
FUNC_19(representation_t **VAR_6,
                             svn_fs_t *VAR_7,
                             svn_checksum_t *VAR_8,
                             apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_7->fsap_data;
  svn_sqlite__stmt_t *VAR_11;
  svn_boolean_t VAR_12;
  representation_t *VAR_13;

  FUNC_1(VAR_10->rep_sharing_allowed);
  if (! VAR_10->rep_cache_db)
    FUNC_0(FUNC_12(VAR_7, VAR_9));


  if (VAR_8->kind != VAR_5)
    return FUNC_7(VAR_1, ((void*)0),
                            FUNC_2("Only SHA1 checksums can be used as keys in the "
                              "rep_cache table.\n"));

  FUNC_0(FUNC_16(&VAR_11, VAR_10->rep_cache_db, VAR_0));
  FUNC_0(FUNC_13(VAR_11, "s",
                            FUNC_5(VAR_8, VAR_9)));

  FUNC_0(FUNC_18(&VAR_12, VAR_11));
  if (VAR_12)
    {
      VAR_13 = FUNC_3(VAR_9, sizeof(*VAR_13));
      FUNC_11(&(VAR_13->txn_id));
      FUNC_4(VAR_13->sha1_digest, VAR_8->digest, sizeof(VAR_13->sha1_digest));
      VAR_13->has_sha1 = VAR_4;
      VAR_13->revision = FUNC_15(VAR_11, 0);
      VAR_13->item_index = FUNC_14(VAR_11, 1);
      VAR_13->size = FUNC_14(VAR_11, 2);
      VAR_13->expanded_size = FUNC_14(VAR_11, 3);
    }
  else
    VAR_13 = ((void*)0);

  FUNC_0(FUNC_17(VAR_11));

  if (VAR_13)
    {
      svn_error_t *VAR_14;

      FUNC_0(FUNC_10(VAR_7, VAR_13, VAR_9));


      VAR_14 = FUNC_9(VAR_13->revision, VAR_7, VAR_9);
      if (VAR_14)
        return FUNC_8(VAR_2, VAR_14,
                                 "Checksum '%s' in rep-cache is beyond HEAD",
                                 FUNC_6(VAR_8,
                                                                 VAR_9));
    }

  *VAR_6 = VAR_13;
  return VAR_3;
}
