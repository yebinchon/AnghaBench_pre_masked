
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
struct TYPE_14__ {int change_set; void* number; } ;
struct TYPE_15__ {TYPE_1__ id; void* expanded_size; void* size; int has_sha1; int sha1_digest; } ;
typedef TYPE_2__ svn_fs_x__representation_t ;
struct TYPE_16__ {int rep_cache_db; int rep_sharing_allowed; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_17__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_18__ {scalar_t__ kind; int digest; } ;
typedef TYPE_5__ svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,char*,int ) ;
 int * FUNC_9 (int ,TYPE_4__*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (int *,char*,int ) ;
 void* FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int **,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (scalar_t__*,int *) ;

svn_error_t *
FUNC_18(svn_fs_x__representation_t **VAR_6,
                            svn_fs_t *VAR_7,
                            svn_checksum_t *VAR_8,
                            apr_pool_t *VAR_9,
                            apr_pool_t *VAR_10)
{
  svn_fs_x__data_t *VAR_11 = VAR_7->fsap_data;
  svn_sqlite__stmt_t *VAR_12;
  svn_boolean_t VAR_13;
  svn_fs_x__representation_t *VAR_14;

  FUNC_1(VAR_11->rep_sharing_allowed);
  if (! VAR_11->rep_cache_db)
    FUNC_0(FUNC_11(VAR_7, VAR_10));


  if (VAR_8->kind != VAR_5)
    return FUNC_7(VAR_1, ((void*)0),
                            FUNC_2("Only SHA1 checksums can be used as keys in the "
                              "rep_cache table.\n"));

  FUNC_0(FUNC_15(&VAR_12, VAR_11->rep_cache_db, VAR_0));
  FUNC_0(FUNC_12(VAR_12, "s",
                            FUNC_5(VAR_8, VAR_10)));

  FUNC_0(FUNC_17(&VAR_13, VAR_12));
  if (VAR_13)
    {
      VAR_14 = FUNC_3(VAR_9, sizeof(*VAR_14));
      FUNC_4(VAR_14->sha1_digest, VAR_8->digest, sizeof(VAR_14->sha1_digest));
      VAR_14->has_sha1 = VAR_4;
      VAR_14->id.change_set = FUNC_14(VAR_12, 0);
      VAR_14->id.number = FUNC_13(VAR_12, 1);
      VAR_14->size = FUNC_13(VAR_12, 2);
      VAR_14->expanded_size = FUNC_13(VAR_12, 3);
    }
  else
    VAR_14 = ((void*)0);

  FUNC_0(FUNC_16(VAR_12));

  if (VAR_14)
    {

      svn_revnum_t VAR_15 = FUNC_10(VAR_14->id.change_set);
      svn_error_t *VAR_16 = FUNC_9(VAR_15, VAR_7,
                                                          VAR_10);
      if (VAR_16)
        return FUNC_8(VAR_2, VAR_16,
                   "Checksum '%s' in rep-cache is beyond HEAD",
                   FUNC_6(VAR_8, VAR_10));
    }

  *VAR_6 = VAR_14;
  return VAR_3;
}
