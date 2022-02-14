
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_31__ {int kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_32__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_33__ {int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_34__ {char* url; int rev; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef enum svn_opt_revision_kind { ____Placeholder_svn_opt_revision_kind } svn_opt_revision_kind ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 TYPE_2__* FUNC_3 (char const*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 TYPE_2__* FUNC_5 (int *,int *,int ,char const*,int *,TYPE_1__ const*,int *) ;
 TYPE_2__* FUNC_6 (TYPE_4__**,int *,char const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_3__*,int *) ;
 TYPE_2__* FUNC_7 (int **,char const*,char const*,TYPE_3__*,int *,int *) ;
 TYPE_2__* FUNC_8 (char const**,char const*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (scalar_t__,int *,int ,char const*,char const*,int ,...) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char const*,int *) ;
 TYPE_2__* FUNC_14 (int *,char*,int ,scalar_t__*,int *) ;
 TYPE_2__* FUNC_15 (int *,char const**,int *) ;
 TYPE_2__* FUNC_16 (int *,char const*,int *) ;
 int FUNC_17 (char const**,char const**,char const*,int *) ;
 TYPE_2__* FUNC_18 (char const**,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(const char **VAR_7,
                         const char **VAR_8,
                         svn_revnum_t *VAR_9,
                         svn_revnum_t *VAR_10,
                         const char **VAR_11,
                         const char **VAR_12,
                         const char **VAR_13,
                         const char **VAR_14,
                         svn_node_kind_t *VAR_15,
                         svn_node_kind_t *VAR_16,
                         svn_ra_session_t **VAR_17,
                         svn_client_ctx_t *VAR_18,
                         const char *VAR_19,
                         const char *VAR_20,
                         const svn_opt_revision_t *VAR_21,
                         const svn_opt_revision_t *VAR_22,
                         const svn_opt_revision_t *VAR_23,
                         apr_pool_t *VAR_24)
{
  const char *VAR_25 = ((void*)0);
  const char *VAR_26 = ((void*)0);
  const char *VAR_27;
  const char *VAR_28 = ((void*)0);
  svn_client__pathrev_t *VAR_29;
  svn_client__pathrev_t *VAR_30 = ((void*)0);
  enum svn_opt_revision_kind VAR_31 = VAR_23->kind;

  if (!FUNC_12(VAR_20))
    {
      FUNC_0(FUNC_8(&VAR_26, VAR_20, VAR_24));
      FUNC_0(FUNC_18(VAR_8, VAR_18->wc_ctx, VAR_26,
                                   VAR_24, VAR_24));
      VAR_28 = VAR_26;
    }
  else
    *VAR_8 = FUNC_2(VAR_24, VAR_20);

  if (!FUNC_12(VAR_19))
    {
      FUNC_0(FUNC_8(&VAR_25, VAR_19, VAR_24));
      VAR_28 = VAR_25;
    }

  FUNC_0(FUNC_7(VAR_17, *VAR_8, VAR_28,
                                      VAR_18, VAR_24, VAR_24));



  if (VAR_31 != VAR_6
      || VAR_19 == VAR_20
      || VAR_26)
    {
      svn_error_t *VAR_32;

      VAR_32 = FUNC_6(&VAR_30,
                                            *VAR_17, VAR_20,
                                            VAR_23, VAR_22,
                                            VAR_18, VAR_24);
      if (VAR_32)
        {
          if (VAR_32->apr_err != VAR_0
              && VAR_32->apr_err != VAR_1)
            return FUNC_11(VAR_32);

          FUNC_9(VAR_32);
          VAR_30 = ((void*)0);
        }
    }
  else
    VAR_30 = ((void*)0);

  if (VAR_31 != VAR_6
      || VAR_19 == VAR_20
      || VAR_25)
    {
      svn_error_t *VAR_33;

      VAR_33 = FUNC_6(&VAR_29,
                                            *VAR_17, VAR_19,
                                            VAR_23, VAR_21,
                                            VAR_18, VAR_24);
      if (VAR_33)
        {
          if (VAR_33->apr_err != VAR_0
              && VAR_33->apr_err != VAR_1)
            return FUNC_11(VAR_33);

          FUNC_9(VAR_33);
          VAR_29 = ((void*)0);
        }
    }
  else
    VAR_29 = ((void*)0);

  if (VAR_29)
    {
      *VAR_7 = VAR_29->url;
      *VAR_9 = VAR_29->rev;
    }
  else
    {




      if (VAR_30
          && (VAR_31 != VAR_6
              || VAR_19 == VAR_20))
        *VAR_7 = VAR_30->url;
      else if (! VAR_25)
        *VAR_7 = VAR_19;
      else
        FUNC_0(FUNC_18(VAR_7, VAR_18->wc_ctx, VAR_25,
                                     VAR_24, VAR_24));

      FUNC_0(FUNC_5(VAR_9, ((void*)0), VAR_18->wc_ctx,
                                              VAR_25 ,
                                              *VAR_17, VAR_21, VAR_24));
    }

  if (VAR_30)
    {
      *VAR_8 = VAR_30->url;
      *VAR_10 = VAR_30->rev;
    }
  else
    {




      if (VAR_29
          && (VAR_31 != VAR_6
              || VAR_19 == VAR_20))
        *VAR_8 = VAR_29->url;


      FUNC_0(FUNC_5(VAR_10, ((void*)0), VAR_18->wc_ctx,
                                              VAR_26 ,
                                              *VAR_17, VAR_22, VAR_24));
    }


  FUNC_0(FUNC_16(*VAR_17, *VAR_8, VAR_24));
  FUNC_0(FUNC_14(*VAR_17, "", *VAR_10, VAR_16, VAR_24));


  FUNC_0(FUNC_16(*VAR_17, *VAR_7, VAR_24));
  FUNC_0(FUNC_14(*VAR_17, "", *VAR_9, VAR_15, VAR_24));



  if (*VAR_15 == VAR_5 && *VAR_16 == VAR_5)
    {
      if (FUNC_4(*VAR_7, *VAR_8) == 0)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_1("Diff target '%s' was not found in the "
                                   "repository at revisions '%ld' and '%ld'"),
                                 *VAR_7, *VAR_9, *VAR_10);
      else
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_1("Diff targets '%s' and '%s' were not found "
                                   "in the repository at revisions '%ld' and "
                                   "'%ld'"),
                                 *VAR_7, *VAR_8, *VAR_9, *VAR_10);
    }
  else if (*VAR_15 == VAR_5)
    FUNC_0(FUNC_3(*VAR_7, *VAR_10, *VAR_9, *VAR_17, VAR_24));
  else if (*VAR_16 == VAR_5)
    FUNC_0(FUNC_3(*VAR_8, *VAR_9, *VAR_10, *VAR_17, VAR_24));

  FUNC_0(FUNC_15(*VAR_17, &VAR_27, VAR_24));


  *VAR_11 = *VAR_7;
  *VAR_12 = *VAR_8;
  *VAR_13 = "";
  *VAR_14 = "";



  if (FUNC_4(*VAR_7, VAR_27) != 0
      && FUNC_4(*VAR_8, VAR_27) != 0)
    {
      svn_node_kind_t VAR_34;
      svn_error_t *VAR_35;

      FUNC_17(VAR_11, VAR_13, *VAR_7, VAR_24);
      FUNC_17(VAR_12, VAR_14, *VAR_8, VAR_24);

      FUNC_0(FUNC_16(*VAR_17, *VAR_11, VAR_24));



      VAR_35 = FUNC_14(*VAR_17, "", *VAR_9, &VAR_34, VAR_24);

      if (VAR_35 && (VAR_35->apr_err == VAR_2
                  || VAR_35->apr_err == VAR_3))
        {
          FUNC_9(VAR_35);






          *VAR_11 = FUNC_13(*VAR_11, *VAR_13, VAR_24);
          *VAR_12 = FUNC_13(*VAR_12, *VAR_14, VAR_24);
          *VAR_13 = "";
          *VAR_14 = "";

          FUNC_0(FUNC_16(*VAR_17, *VAR_11, VAR_24));
        }
      else
        FUNC_0(VAR_35);
    }

  return VAR_4;
}
