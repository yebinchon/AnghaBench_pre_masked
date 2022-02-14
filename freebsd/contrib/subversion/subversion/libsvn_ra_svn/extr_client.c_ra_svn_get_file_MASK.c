
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_12__ {int * conn; } ;
typedef TYPE_3__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
struct TYPE_11__ {TYPE_1__ string; } ;
struct TYPE_13__ {scalar_t__ kind; TYPE_2__ u; } ;
typedef TYPE_4__ svn_ra_svn__item_t ;
struct TYPE_14__ {TYPE_3__* priv; } ;
typedef TYPE_5__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 char* FUNC_3 (TYPE_5__*,char const*,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int **,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int * FUNC_7 (int *,int *,int *,int ,char const*) ;
 int FUNC_8 (int **,int ,char const*,int *) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int * FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int **) ;
 int FUNC_15 (int *,int *,char*,...) ;
 int FUNC_16 (int *,int *,TYPE_4__**) ;
 int FUNC_17 (int *,int *,char const*,int ,int ,int ) ;
 int FUNC_18 (int *,int ,scalar_t__*) ;

__attribute__((used)) static svn_error_t *FUNC_19(svn_ra_session_t *VAR_4, const char *VAR_5,
                                    svn_revnum_t VAR_6, svn_stream_t *VAR_7,
                                    svn_revnum_t *VAR_8,
                                    apr_hash_t **VAR_9,
                                    apr_pool_t *VAR_10)
{
  svn_ra_svn__session_baton_t *VAR_11 = VAR_4->priv;
  svn_ra_svn_conn_t *VAR_12 = VAR_11->conn;
  svn_ra_svn__list_t *VAR_13;
  const char *VAR_14;
  svn_checksum_t *VAR_15 = ((void*)0);
  svn_checksum_ctx_t *VAR_16;
  apr_pool_t *VAR_17;

  VAR_5 = FUNC_3(VAR_4, VAR_5, VAR_10);
  FUNC_0(FUNC_17(VAR_12, VAR_10, VAR_5, VAR_6,
                                         (VAR_9 != ((void*)0)), (VAR_7 != ((void*)0))));
  FUNC_0(FUNC_2(VAR_11, VAR_10));
  FUNC_0(FUNC_15(VAR_12, VAR_10, "(?c)rl",
                                        &VAR_14,
                                        &VAR_6, &VAR_13));

  if (VAR_8)
    *VAR_8 = VAR_6;
  if (VAR_9)
    FUNC_0(FUNC_14(VAR_13, VAR_10, VAR_9));


  if (!VAR_7)
    return VAR_1;

  if (VAR_14)
    {
      FUNC_0(FUNC_8(&VAR_15, VAR_3,
                                     VAR_14, VAR_10));
      VAR_16 = FUNC_4(VAR_3, VAR_10);
    }


  VAR_17 = FUNC_12(VAR_10);
  while (1)
    {
      svn_ra_svn__item_t *VAR_18;

      FUNC_11(VAR_17);
      FUNC_0(FUNC_16(VAR_12, VAR_17, &VAR_18));
      if (VAR_18->kind != VAR_2)
        return FUNC_10(VAR_0, ((void*)0),
                                FUNC_1("Non-string as part of file contents"));
      if (VAR_18->u.string.len == 0)
        break;

      if (VAR_15)
        FUNC_0(FUNC_9(VAR_16, VAR_18->u.string.data,
                                    VAR_18->u.string.len));

      FUNC_0(FUNC_18(VAR_7, VAR_18->u.string.data,
                               &VAR_18->u.string.len));
    }
  FUNC_13(VAR_17);

  FUNC_0(FUNC_15(VAR_12, VAR_10, ""));

  if (VAR_15)
    {
      svn_checksum_t *VAR_19;

      FUNC_0(FUNC_5(&VAR_19, VAR_16, VAR_10));
      if (!FUNC_6(VAR_19, VAR_15))
        return FUNC_7(VAR_15, VAR_19, VAR_10,
                                         FUNC_1("Checksum mismatch for '%s'"),
                                         VAR_5);
    }

  return VAR_1;
}
