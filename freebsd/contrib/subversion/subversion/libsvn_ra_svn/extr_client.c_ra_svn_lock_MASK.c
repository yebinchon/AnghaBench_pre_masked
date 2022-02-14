
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_26__ {int * conn; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_25__ {int list; } ;
struct TYPE_27__ {scalar_t__ kind; TYPE_1__ u; } ;
typedef TYPE_3__ svn_ra_svn__item_t ;
struct TYPE_28__ {TYPE_2__* priv; } ;
typedef TYPE_4__ svn_ra_session_t ;
typedef TYPE_5__* (* svn_ra_lock_callback_t ) (void*,char const*,int ,int *,TYPE_5__*,int *) ;
typedef int svn_lock_t ;
struct TYPE_29__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 TYPE_5__* FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int *,int **) ;
 TYPE_5__* FUNC_8 (TYPE_4__*,int *,char const*,int ,TYPE_5__* (*) (void*,char const*,int ,int *,TYPE_5__*,int *),void*,int *) ;
 int * FUNC_9 (TYPE_4__*,int *,int *,int *) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (TYPE_5__*) ;
 TYPE_5__* FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_5__* FUNC_16 (int *) ;
 int FUNC_17 (int *,char*,char const**,int **) ;
 int FUNC_18 (int *,int *,char*) ;
 int FUNC_19 (int *,int *,TYPE_3__**) ;
 int FUNC_20 (int *,int *,char*,...) ;

__attribute__((used)) static svn_error_t *FUNC_21(svn_ra_session_t *VAR_5,
                                apr_hash_t *VAR_6,
                                const char *VAR_7,
                                svn_boolean_t VAR_8,
                                svn_ra_lock_callback_t VAR_9,
                                void *VAR_10,
                                apr_pool_t *VAR_11)
{
  svn_ra_svn__session_baton_t *VAR_12 = VAR_5->priv;
  svn_ra_svn_conn_t *VAR_13 = VAR_12->conn;
  apr_hash_index_t *VAR_14;
  svn_error_t *VAR_15;
  apr_pool_t *VAR_16 = FUNC_14(VAR_11);

  VAR_6 = FUNC_9(VAR_5, VAR_6, VAR_11, VAR_11);
  FUNC_0(FUNC_20(VAR_13, VAR_11, "w((?c)b(!", "lock-many",
                                  VAR_7, VAR_8));

  for (VAR_14 = FUNC_2(VAR_11, VAR_6); VAR_14; VAR_14 = FUNC_3(VAR_14))
    {
      const void *VAR_17;
      const char *VAR_18;
      void *VAR_19;
      svn_revnum_t *VAR_20;

      FUNC_13(VAR_16);
      FUNC_4(VAR_14, &VAR_17, ((void*)0), &VAR_19);
      VAR_18 = VAR_17;
      VAR_20 = VAR_19;

      FUNC_0(FUNC_20(VAR_13, VAR_16, "c(?r)", VAR_18, *VAR_20));
    }

  FUNC_0(FUNC_20(VAR_13, VAR_11, "!))"));

  VAR_15 = FUNC_5(VAR_12, VAR_11);



  if (VAR_15 && VAR_15->apr_err == VAR_1)
    {
      FUNC_11(VAR_15);
      return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8,
                                VAR_9, VAR_10, VAR_11);
    }

  if (VAR_15)
    return VAR_15;


  for (VAR_14 = FUNC_2(VAR_11, VAR_6); VAR_14; VAR_14 = FUNC_3(VAR_14))
    {
      svn_ra_svn__item_t *VAR_21;
      const void *VAR_22;
      const char *VAR_23;
      svn_error_t *VAR_24;
      const char *VAR_25;
      svn_lock_t *VAR_26;
      svn_ra_svn__list_t *VAR_27;

      FUNC_4(VAR_14, &VAR_22, ((void*)0), ((void*)0));
      VAR_23 = VAR_22;

      FUNC_13(VAR_16);
      FUNC_0(FUNC_19(VAR_13, VAR_16, &VAR_21));





      if (FUNC_6(VAR_21))
        break;

      if (VAR_21->kind != VAR_3)
        return FUNC_12(VAR_0, ((void*)0),
                                FUNC_1("Lock response not a list"));

      FUNC_0(FUNC_17(&VAR_21->u.list, "wl", &VAR_25, &VAR_27));

      if (FUNC_10(VAR_25, "failure") == 0)
        VAR_15 = FUNC_16(VAR_27);
      else if (FUNC_10(VAR_25, "success") == 0)
        {
          FUNC_0(FUNC_7(VAR_27, VAR_16, &VAR_26));
          VAR_15 = ((void*)0);
        }
      else
        return FUNC_12(VAR_0, ((void*)0),
                                FUNC_1("Unknown status for lock command"));

      if (VAR_9)
        VAR_24 = VAR_9(VAR_10, VAR_23, VAR_4,
                                 VAR_15 ? ((void*)0) : VAR_26,
                                 VAR_15, VAR_16);
      else
        VAR_24 = VAR_2;

      FUNC_11(VAR_15);

      if (VAR_24)
        return VAR_24;
    }



  if (!VAR_14)
    {
      svn_ra_svn__item_t *VAR_28;

      FUNC_0(FUNC_19(VAR_13, VAR_11, &VAR_28));
      if (!FUNC_6(VAR_28))
        return FUNC_12(VAR_0, ((void*)0),
                                FUNC_1("Didn't receive end marker for lock "
                                  "responses"));
    }

  FUNC_0(FUNC_18(VAR_13, VAR_11, ""));

  FUNC_15(VAR_16);

  return VAR_2;
}
