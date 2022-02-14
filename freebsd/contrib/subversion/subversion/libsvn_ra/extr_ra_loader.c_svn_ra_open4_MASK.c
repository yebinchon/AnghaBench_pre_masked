
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int * pool; TYPE_3__ const* vtable; void* cancel_baton; int cancel_func; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_27__ {int cancel_func; int auth_baton; } ;
typedef TYPE_2__ svn_ra_callbacks2_t ;
struct TYPE_28__ {scalar_t__ (* get_schemes ) (int *) ;int (* get_uuid ) (TYPE_1__*,char const**,int *) ;int (* set_svn_ra_open ) (TYPE_1__*,TYPE_5__* (*) (TYPE_1__**,char const**,char const*,char const*,TYPE_2__ const*,void*,int *,int *)) ;TYPE_5__* (* open_session ) (TYPE_1__*,char const**,char const*,TYPE_2__ const*,void*,int *,int *,int *,int *) ;int (* get_version ) () ;} ;
typedef TYPE_3__ svn_ra__vtable_t ;
typedef int (* svn_ra__init_func_t ) (int ,TYPE_3__ const**,int *) ;
struct TYPE_29__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef int svn_config_t ;
typedef int svn_auth_baton_t ;
struct ra_lib_defn {char const* ra_name; scalar_t__ schemes; int (* initfunc ) (int ,TYPE_3__ const**,int *) ;} ;
struct TYPE_30__ {int * hostname; } ;
typedef TYPE_6__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*,TYPE_6__*) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ VAR_11 ;
 char* FUNC_6 (scalar_t__,char const*) ;
 int FUNC_7 (int (*) (int ,TYPE_3__ const**,int *),int *,char const*,int *) ;
 struct ra_lib_defn* VAR_12 ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_5__* FUNC_11 (TYPE_1__*,char const**,char const*,TYPE_2__ const*,void*,int *,int *,int *,int *) ;
 int FUNC_12 (TYPE_1__*,TYPE_5__* (*) (TYPE_1__**,char const**,char const*,char const*,TYPE_2__ const*,void*,int *,int *)) ;
 int FUNC_13 (TYPE_1__*,char const**,int *) ;
 int FUNC_14 (int **,int ,int *,int *,int *,int *) ;
 char* FUNC_15 (int *,int *,int ,int *) ;
 char* FUNC_16 (int *,char const*,int ,char*) ;
 TYPE_5__* FUNC_17 (int ,TYPE_5__*,int ,char const*,...) ;
 TYPE_5__* FUNC_18 (TYPE_5__*) ;
 int * FUNC_19 (int *,int ) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 () ;

svn_error_t *FUNC_23(svn_ra_session_t **VAR_13,
                          const char **VAR_14,
                          const char *VAR_15,
                          const char *VAR_16,
                          const svn_ra_callbacks2_t *VAR_17,
                          void *VAR_18,
                          apr_hash_t *VAR_19,
                          apr_pool_t *VAR_20)
{
  apr_pool_t *VAR_21 = FUNC_20(VAR_20);
  apr_pool_t *VAR_22 = FUNC_20(VAR_21);
  svn_ra_session_t *VAR_23;
  const struct ra_lib_defn *VAR_24;
  const svn_ra__vtable_t *VAR_25 = ((void*)0);
  apr_uri_t VAR_26;
  apr_status_t VAR_27;
  svn_error_t *VAR_28;



  svn_auth_baton_t *VAR_29;


  *VAR_13 = ((void*)0);

  VAR_27 = FUNC_4(VAR_21, VAR_15, &VAR_26);




  if (VAR_27 != VAR_0 || VAR_26.hostname == ((void*)0))
    return FUNC_17(VAR_7, ((void*)0),
                             FUNC_1("Illegal repository URL '%s'"),
                             VAR_15);

  if (VAR_17->auth_baton)
    FUNC_0(FUNC_14(&VAR_29,
                                        VAR_17->auth_baton, VAR_19,
                                        VAR_26.hostname,
                                        VAR_21, VAR_22));
  else
    VAR_29 = ((void*)0);
  for (VAR_24 = VAR_12; VAR_24->ra_name != ((void*)0); ++VAR_24)
    {
      const char *VAR_30;

      if ((VAR_30 = FUNC_6(VAR_24->schemes, VAR_15)))
        {
          svn_ra__init_func_t VAR_31 = VAR_24->initfunc;







          if (! VAR_31)
            FUNC_0(FUNC_7(VAR_31, ((void*)0), VAR_24->ra_name,
                                   VAR_22));
          if (! VAR_31)

            continue;

          FUNC_0(VAR_31(FUNC_22(), &VAR_25, VAR_22));

          FUNC_0(FUNC_5(VAR_25->get_version(), VAR_30));

          if (! FUNC_6(VAR_25->get_schemes(VAR_22), VAR_15))

            continue;


          break;
        }
    }

  if (VAR_25 == ((void*)0))
    return FUNC_17(VAR_7, ((void*)0),
                             FUNC_1("Unrecognized URL scheme for '%s'"),
                             VAR_15);


  VAR_23 = FUNC_2(VAR_21, sizeof(*VAR_23));
  VAR_23->cancel_func = VAR_17->cancel_func;
  VAR_23->cancel_baton = VAR_18;
  VAR_23->vtable = VAR_25;
  VAR_23->pool = VAR_21;


  VAR_28 = VAR_25->open_session(VAR_23, VAR_14,
                             VAR_15,
                             VAR_17, VAR_18, VAR_29,
                             VAR_19, VAR_21, VAR_22);

  if (VAR_28)
    {
      FUNC_21(VAR_21);
      if (VAR_28->apr_err == VAR_8)
        return FUNC_18(VAR_28);

      return FUNC_17(
                VAR_6, VAR_28,
                FUNC_1("Unable to connect to a repository at URL '%s'"),
                VAR_15);
    }





  if (VAR_14 && *VAR_14)
    {

      *VAR_14 = FUNC_3(VAR_20, *VAR_14);
      FUNC_21(VAR_21);
      return VAR_10;
    }

  if (VAR_25->set_svn_ra_open)
    FUNC_0(VAR_25->set_svn_ra_open(VAR_23, FUNC_23));


  if (VAR_16)
    {
      const char *VAR_32;

      FUNC_0(VAR_25->get_uuid(VAR_23, &VAR_32, VAR_20));
      if (FUNC_8(VAR_16, VAR_32) != 0)
        {

          VAR_32 = FUNC_3(VAR_20, VAR_32);
          FUNC_21(VAR_21);
          return FUNC_17(VAR_9, ((void*)0),
                                   FUNC_1("Repository UUID '%s' doesn't match "
                                     "expected UUID '%s'"),
                                   VAR_32, VAR_16);
        }
    }

  FUNC_21(VAR_22);
  *VAR_13 = VAR_23;
  return VAR_10;
}
