
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


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
struct TYPE_29__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 TYPE_5__* FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_5__* FUNC_7 (TYPE_4__*,int *,int ,TYPE_5__* (*) (void*,char const*,int ,int *,TYPE_5__*,int *),void*,int *) ;
 int * FUNC_8 (TYPE_4__*,int *,int *,int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_5__* FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_5__* FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,char const**,...) ;
 int FUNC_17 (int *,int *,char*) ;
 int FUNC_18 (int *,int *,TYPE_3__**) ;
 int FUNC_19 (int *,int *,char*,...) ;

__attribute__((used)) static svn_error_t *FUNC_20(svn_ra_session_t *VAR_5,
                                  apr_hash_t *VAR_6,
                                  svn_boolean_t VAR_7,
                                  svn_ra_lock_callback_t VAR_8,
                                  void *VAR_9,
                                  apr_pool_t *VAR_10)
{
  svn_ra_svn__session_baton_t *VAR_11 = VAR_5->priv;
  svn_ra_svn_conn_t *VAR_12 = VAR_11->conn;
  apr_hash_index_t *VAR_13;
  apr_pool_t *VAR_14 = FUNC_13(VAR_10);
  svn_error_t *VAR_15;
  const char *VAR_16;

  VAR_6 = FUNC_8(VAR_5, VAR_6, VAR_10, VAR_10);
  FUNC_0(FUNC_19(VAR_12, VAR_10, "w(b(!", "unlock-many",
                                  VAR_7));

  for (VAR_13 = FUNC_2(VAR_10, VAR_6); VAR_13; VAR_13 = FUNC_3(VAR_13))
    {
      void *VAR_17;
      const void *VAR_18;
      const char *VAR_19;

      FUNC_12(VAR_14);
      FUNC_4(VAR_13, &VAR_18, ((void*)0), &VAR_17);
      VAR_16 = VAR_18;

      if (FUNC_9(VAR_17, "") != 0)
        VAR_19 = VAR_17;
      else
        VAR_19 = ((void*)0);

      FUNC_0(FUNC_19(VAR_12, VAR_14, "c(?c)", VAR_16, VAR_19));
    }

  FUNC_0(FUNC_19(VAR_12, VAR_10, "!))"));

  VAR_15 = FUNC_5(VAR_11, VAR_10);




  if (VAR_15 && VAR_15->apr_err == VAR_2)
    {
      FUNC_10(VAR_15);
      return FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8,
                                  VAR_9, VAR_10);
    }

  if (VAR_15)
    return VAR_15;


  for (VAR_13 = FUNC_2(VAR_10, VAR_6); VAR_13; VAR_13 = FUNC_3(VAR_13))
    {
      svn_ra_svn__item_t *VAR_20;
      const void *VAR_21;
      svn_error_t *VAR_22;
      const char *VAR_23;
      svn_ra_svn__list_t *VAR_24;

      FUNC_12(VAR_14);

      FUNC_0(FUNC_18(VAR_12, VAR_14, &VAR_20));





      if (FUNC_6(VAR_20))
        break;

      FUNC_4(VAR_13, &VAR_21, ((void*)0), ((void*)0));
      VAR_16 = VAR_21;

      if (VAR_20->kind != VAR_4)
        return FUNC_11(VAR_1, ((void*)0),
                                FUNC_1("Unlock response not a list"));

      FUNC_0(FUNC_16(&VAR_20->u.list, "wl", &VAR_23, &VAR_24));

      if (FUNC_9(VAR_23, "failure") == 0)
        VAR_15 = FUNC_15(VAR_24);
      else if (FUNC_9(VAR_23, "success") == 0)
        {
          FUNC_0(FUNC_16(VAR_24, "c", &VAR_16));
          VAR_15 = VAR_3;
        }
      else
        return FUNC_11(VAR_1, ((void*)0),
                                FUNC_1("Unknown status for unlock command"));

      if (VAR_8)
        VAR_22 = VAR_8(VAR_9, VAR_16, VAR_0, ((void*)0), VAR_15,
                                 VAR_14);
      else
        VAR_22 = VAR_3;

      FUNC_10(VAR_15);

      if (VAR_22)
        return VAR_22;
    }



  if (!VAR_13)
    {
      svn_ra_svn__item_t *VAR_25;

      FUNC_0(FUNC_18(VAR_12, VAR_10, &VAR_25));
      if (! FUNC_6(VAR_25))
        return FUNC_11(VAR_1, ((void*)0),
                                FUNC_1("Didn't receive end marker for unlock "
                                  "responses"));
    }

  FUNC_0(FUNC_17(VAR_12, VAR_10, ""));

  FUNC_14(VAR_14);

  return VAR_3;
}
