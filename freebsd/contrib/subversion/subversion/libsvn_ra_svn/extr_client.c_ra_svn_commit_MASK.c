
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_14__ {char* useragent; int * conn; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_15__ {TYPE_2__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
struct TYPE_16__ {void* callback_baton; int callback; int * new_rev; int * pool; TYPE_2__* sess_baton; } ;
typedef TYPE_4__ ra_svn_commit_callback_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 TYPE_4__* FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int VAR_9 ;
 int * FUNC_9 (int ,int *,int ) ;
 int * FUNC_10 (int ,int *,int ) ;
 TYPE_1__* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,char*) ;
 int FUNC_17 (int *,int *,int *) ;
 int FUNC_18 (int *,int *,char*,...) ;
 int FUNC_19 (int const**,void**,int *,int *,int ,TYPE_4__*) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 TYPE_1__* FUNC_21 (char*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_22(svn_ra_session_t *VAR_10,
                                  const svn_delta_editor_t **VAR_11,
                                  void **VAR_12,
                                  apr_hash_t *VAR_13,
                                  svn_commit_callback2_t VAR_14,
                                  void *VAR_15,
                                  apr_hash_t *VAR_16,
                                  svn_boolean_t VAR_17,
                                  apr_pool_t *VAR_18)
{
  svn_ra_svn__session_baton_t *VAR_19 = VAR_10->priv;
  svn_ra_svn_conn_t *VAR_20 = VAR_19->conn;
  ra_svn_commit_callback_baton_t *VAR_21;
  apr_hash_index_t *VAR_22;
  apr_pool_t *VAR_23;
  const svn_string_t *VAR_24 = FUNC_11(VAR_13,
                                              VAR_3);

  if (VAR_24 == ((void*)0) &&
      ! FUNC_20(VAR_20, VAR_6))
    {
      return FUNC_10(VAR_0, ((void*)0),
                               FUNC_1("ra_svn does not support not specifying "
                                 "a log message with pre-1.5 servers; "
                                 "consider passing an empty one, or upgrading "
                                 "the server"));
    }
  else if (VAR_24 == ((void*)0))
    VAR_24 = FUNC_21("", VAR_18);



  if (FUNC_2(VAR_13) > 1 &&
      ! FUNC_20(VAR_20, VAR_6))
    return FUNC_9(VAR_1, ((void*)0),
                            FUNC_1("Server doesn't support setting arbitrary "
                              "revision properties during commit"));



  if (FUNC_20(VAR_20, VAR_6) &&
      FUNC_20(VAR_20, VAR_7))
    {
      FUNC_12(VAR_13, VAR_4,
                    FUNC_21(VAR_8, VAR_18));
      FUNC_12(VAR_13, VAR_5,
                    FUNC_21(VAR_19->useragent, VAR_18));
    }


  FUNC_0(FUNC_7(VAR_10, VAR_18));




  FUNC_0(FUNC_18(VAR_20, VAR_18, "w(c(!", "commit",
                                  VAR_24->data));
  if (VAR_16)
    {
      VAR_23 = FUNC_14(VAR_18);
      for (VAR_22 = FUNC_3(VAR_18, VAR_16); VAR_22; VAR_22 = FUNC_4(VAR_22))
        {
          const void *VAR_25;
          void *VAR_26;
          const char *VAR_27, *VAR_28;

          FUNC_13(VAR_23);
          FUNC_5(VAR_22, &VAR_25, ((void*)0), &VAR_26);
          VAR_27 = VAR_25;
          VAR_28 = VAR_26;
          FUNC_0(FUNC_18(VAR_20, VAR_23, "cc", VAR_27, VAR_28));
        }
      FUNC_15(VAR_23);
    }
  FUNC_0(FUNC_18(VAR_20, VAR_18, "!)b(!", VAR_17));
  FUNC_0(FUNC_17(VAR_20, VAR_18, VAR_13));
  FUNC_0(FUNC_18(VAR_20, VAR_18, "!))"));
  FUNC_0(FUNC_8(VAR_19, VAR_18));
  FUNC_0(FUNC_16(VAR_20, VAR_18, ""));


  VAR_21 = FUNC_6(VAR_18, sizeof(*VAR_21));
  VAR_21->sess_baton = VAR_19;
  VAR_21->pool = VAR_18;
  VAR_21->new_rev = ((void*)0);
  VAR_21->callback = VAR_14;
  VAR_21->callback_baton = VAR_15;




  FUNC_19(VAR_11, VAR_12, VAR_20, VAR_18,
                        VAR_9, VAR_21);
  return VAR_2;
}
