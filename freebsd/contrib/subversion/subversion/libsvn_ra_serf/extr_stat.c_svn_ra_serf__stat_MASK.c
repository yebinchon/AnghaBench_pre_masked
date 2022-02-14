
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ svn_tristate_t ;
typedef int svn_revnum_t ;
struct TYPE_22__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_21__ {char* path; } ;
struct TYPE_23__ {scalar_t__ supports_deadprop_count; TYPE_1__ session_url; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
typedef int svn_ra_serf__handler_t ;
struct TYPE_24__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct TYPE_25__ {int has_props; } ;
typedef TYPE_5__ svn_dirent_t ;
struct fill_dirent_baton_t {scalar_t__* supports_deadprop_count; TYPE_5__* entry; int * result_pool; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 TYPE_5__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 TYPE_4__* FUNC_7 (int *,int *) ;
 TYPE_4__* FUNC_8 (int **,TYPE_3__*,char const*,int ,char*,int ,int ,struct fill_dirent_baton_t*,int *) ;
 TYPE_4__* FUNC_9 (char const**,int *,TYPE_3__*,char const*,int ,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

svn_error_t *
FUNC_10(svn_ra_session_t *VAR_7,
                  const char *VAR_8,
                  svn_revnum_t VAR_9,
                  svn_dirent_t **VAR_10,
                  apr_pool_t *VAR_11)
{
  svn_ra_serf__session_t *VAR_12 = VAR_7->priv;
  svn_error_t *VAR_13;
  struct fill_dirent_baton_t VAR_14;
  svn_tristate_t VAR_15 = VAR_6;
  svn_ra_serf__handler_t *VAR_16;
  const char *VAR_17;

  VAR_17 = VAR_12->session_url.path;


  if (VAR_8)
    VAR_17 = FUNC_6(VAR_17, VAR_8, VAR_11);



  if (FUNC_1(VAR_9))
    {
      FUNC_0(FUNC_9(&VAR_17, ((void*)0) ,
                                          VAR_12,
                                          VAR_17, VAR_9,
                                          VAR_11, VAR_11));
    }

  VAR_14.entry = FUNC_3(VAR_11);
  VAR_14.supports_deadprop_count = &VAR_15;
  VAR_14.result_pool = VAR_11;

  FUNC_0(FUNC_8(&VAR_16, VAR_12, VAR_17,
                                               VAR_2, "0",
                                               FUNC_2(VAR_0,
                                                                VAR_12,
                                                                VAR_11),
                                               VAR_4, &VAR_14, VAR_11));

  VAR_13 = FUNC_7(VAR_16, VAR_11);

  if (VAR_13)
    {
      if (VAR_13->apr_err == VAR_1)
        {
          FUNC_4(VAR_13);
          *VAR_10 = ((void*)0);
          return VAR_3;
        }
      else
        return FUNC_5(VAR_13);
    }

  if (VAR_15 == VAR_5
      && VAR_12->supports_deadprop_count == VAR_6
      && !VAR_14.entry->has_props)
    {


      VAR_12->supports_deadprop_count = VAR_5;


      FUNC_0(FUNC_7(VAR_16, VAR_11));
    }

  if (VAR_15 != VAR_6)
    VAR_12->supports_deadprop_count = VAR_15;

  *VAR_10 = VAR_14.entry;

  return VAR_3;
}
