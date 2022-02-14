
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
struct TYPE_21__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_22__ {char const* url; int rev; } ;
typedef TYPE_2__ svn_client__pathrev_t ;
struct TYPE_23__ {char* path; void* rev; int * pool; int is_first; int member_0; } ;
typedef TYPE_3__ copyfrom_info_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (char const**,int *,char const*,int *) ;
 TYPE_1__* FUNC_3 (int **,TYPE_2__**,char const*,int *,int const*,int const*,int *,int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__**,int *,char const*,int const*,int const*,int *,int *) ;
 TYPE_1__* FUNC_5 (char const**,char const*,int *,int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (int ,int *,int ,char const*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *,char*,int ,int ,void*,int ,TYPE_3__*,int *) ;
 int FUNC_14 (int *,char const*,int *) ;

svn_error_t *
FUNC_15(const char **VAR_7,
                            svn_revnum_t *VAR_8,
                            const char *VAR_9,
                            const svn_opt_revision_t *VAR_10,
                            svn_ra_session_t *VAR_11,
                            svn_client_ctx_t *VAR_12,
                            apr_pool_t *VAR_13,
                            apr_pool_t *VAR_14)
{
  svn_error_t *VAR_15;
  copyfrom_info_t VAR_16 = { 0 };
  apr_pool_t *VAR_17 = FUNC_11(VAR_14);
  svn_client__pathrev_t *VAR_18;
  const char *VAR_19 = ((void*)0);

  VAR_16.is_first = VAR_5;
  VAR_16.path = ((void*)0);
  VAR_16.rev = VAR_3;
  VAR_16.pool = VAR_13;

  if (!VAR_11)
    {
      FUNC_0(FUNC_3(&VAR_11, &VAR_18,
                                                VAR_9, ((void*)0),
                                                VAR_10, VAR_10,
                                                VAR_12, VAR_17));
    }
  else
    {
      const char *VAR_20;
      if (FUNC_10(VAR_9))
        VAR_20 = VAR_9;
      else
        {
          FUNC_0(FUNC_5(&VAR_20, VAR_9, VAR_12, VAR_17,
                                            VAR_17));

          if (! VAR_20)
            return FUNC_8(VAR_0, ((void*)0),
                                     FUNC_1("'%s' has no URL"), VAR_9);
        }

      FUNC_0(FUNC_2(&VAR_19, VAR_11,
                                                VAR_20, VAR_17));

      VAR_15 = FUNC_4(&VAR_18, VAR_11, VAR_9,
                                            VAR_10, VAR_10, VAR_12,
                                            VAR_17);



      FUNC_0(FUNC_7(
                VAR_15,
                FUNC_14(VAR_11, VAR_15 ? VAR_19
                                                : VAR_18->url, VAR_17)));
    }




  VAR_15 = FUNC_13(VAR_11, "", VAR_18->rev, VAR_18->rev,
                                     VAR_3,
                                     VAR_6, &VAR_16,
                                     VAR_14);

  if (VAR_19)
    VAR_15 = FUNC_7(
                    VAR_15,
                    FUNC_14(VAR_11, VAR_19, VAR_17));

  FUNC_12(VAR_17);

  if (VAR_15)
    {
      if (VAR_15->apr_err == VAR_1 ||
          VAR_15->apr_err == VAR_2)
        {


            FUNC_6(VAR_15);
            VAR_15 = VAR_4;

            *VAR_7 = ((void*)0);
            *VAR_8 = VAR_3;
        }
      return FUNC_9(VAR_15);
    }

  *VAR_7 = VAR_16.path;
  *VAR_8 = VAR_16.rev;
  return VAR_4;
}
