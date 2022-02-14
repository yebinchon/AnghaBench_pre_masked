
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
struct TYPE_21__ {scalar_t__ number; scalar_t__ change_set; } ;
struct TYPE_22__ {scalar_t__ expanded_size; scalar_t__ size; TYPE_1__ id; int has_sha1; int sha1_digest; } ;
typedef TYPE_2__ svn_fs_x__representation_t ;
struct TYPE_23__ {int rep_cache_db; int rep_sharing_allowed; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_24__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
struct TYPE_25__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
struct TYPE_26__ {int digest; int kind; } ;
typedef TYPE_6__ svn_checksum_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int ,int *,int ) ;
 TYPE_5__* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_2__**,TYPE_4__*,TYPE_6__*,int *,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (int *,char*,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int **,int ,int ) ;
 TYPE_5__* FUNC_11 (int *,int *) ;

svn_error_t *
FUNC_12(svn_fs_t *VAR_5,
                            svn_fs_x__representation_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_fs_x__data_t *VAR_8 = VAR_5->fsap_data;
  svn_sqlite__stmt_t *VAR_9;
  svn_error_t *VAR_10;
  svn_checksum_t VAR_11;
  VAR_11.kind = VAR_4;
  VAR_11.digest = VAR_6->sha1_digest;

  FUNC_1(VAR_8->rep_sharing_allowed);
  if (! VAR_8->rep_cache_db)
    FUNC_0(FUNC_8(VAR_5, VAR_7));


  if (! VAR_6->has_sha1)
    return FUNC_5(VAR_1, ((void*)0),
                            FUNC_2("Only SHA1 checksums can be used as keys in the "
                              "rep_cache table.\n"));

  FUNC_0(FUNC_10(&VAR_9, VAR_8->rep_cache_db, VAR_0));
  FUNC_0(FUNC_9(VAR_9, "siiii",
                            FUNC_3(&VAR_11, VAR_7),
                            (apr_int64_t) VAR_6->id.change_set,
                            (apr_int64_t) VAR_6->id.number,
                            (apr_int64_t) VAR_6->size,
                            (apr_int64_t) VAR_6->expanded_size));

  VAR_10 = FUNC_11(((void*)0), VAR_9);
  if (VAR_10)
    {
      svn_fs_x__representation_t *VAR_12;

      if (VAR_10->apr_err != VAR_2)
        return FUNC_6(VAR_10);

      FUNC_4(VAR_10);




      FUNC_0(FUNC_7(&VAR_12, VAR_5, &VAR_11,
                                          VAR_7, VAR_7));

      if (!VAR_12)
        {



        }
    }

  return VAR_3;
}
