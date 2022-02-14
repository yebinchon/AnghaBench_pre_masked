
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_13__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_12__ {char* path; } ;
struct TYPE_14__ {scalar_t__ supports_deadprop_count; TYPE_1__ session_url; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
struct TYPE_15__ {int done; } ;
typedef TYPE_4__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct get_dir_baton_t {scalar_t__ supports_deadprop_count; char const* path; int * dirents; int * ret_props; int is_directory; int * result_pool; } ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_5 ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,TYPE_3__*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ) ;
 char* FUNC_9 (char const*,char const*,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_3__*,int *) ;
 int * FUNC_14 (TYPE_4__**,TYPE_3__*,char const*,int ,char*,int ,int ,struct get_dir_baton_t*,int *) ;
 int * FUNC_15 (char const**,int *,TYPE_3__*,char const*,int ,int *,int *) ;
 int FUNC_16 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

svn_error_t *
FUNC_17(svn_ra_session_t *VAR_11,
                     apr_hash_t **VAR_12,
                     svn_revnum_t *VAR_13,
                     apr_hash_t **VAR_14,
                     const char *VAR_15,
                     svn_revnum_t VAR_16,
                     apr_uint32_t VAR_17,
                     apr_pool_t *VAR_18)
{
  svn_ra_serf__session_t *VAR_19 = VAR_11->priv;
  apr_pool_t *VAR_20 = FUNC_11(VAR_18);
  svn_ra_serf__handler_t *VAR_21 = ((void*)0);
  svn_ra_serf__handler_t *VAR_22 = ((void*)0);
  const char *VAR_23;
  struct get_dir_baton_t VAR_24;
  svn_error_t *VAR_25 = VAR_5;

  VAR_24.result_pool = VAR_18;
  VAR_24.is_directory = VAR_0;
  VAR_24.supports_deadprop_count = VAR_10;

  VAR_23 = VAR_19->session_url.path;


  if (VAR_15)
    {
      VAR_23 = FUNC_9(VAR_23, VAR_15, VAR_20);
    }




  if (FUNC_2(VAR_16) || VAR_13)
    {
      FUNC_0(FUNC_15(&VAR_23, VAR_13,
                                          VAR_19,
                                          VAR_23, VAR_16,
                                          VAR_20, VAR_20));
      VAR_16 = VAR_4;
    }

  FUNC_1(!FUNC_2(VAR_16));

  VAR_24.path = VAR_23;


  if (VAR_12)
    {


      if (!VAR_14)
        VAR_17 |= VAR_2;

      VAR_24.dirents = FUNC_5(VAR_18);

      FUNC_0(FUNC_14(
                                          &VAR_21, VAR_19,
                                          VAR_23, VAR_4, "1",
                                          FUNC_6(VAR_17,
                                                           VAR_19,
                                                           VAR_20),
                                          VAR_7, &VAR_24,
                                          VAR_20));

      FUNC_16(VAR_21);
    }
  else
    VAR_24.dirents = ((void*)0);

  if (VAR_14)
    {
      VAR_24.ret_props = FUNC_5(VAR_18);
      FUNC_0(FUNC_14(
                                          &VAR_22, VAR_19,
                                          VAR_23, VAR_4, "0",
                                          VAR_6,
                                          VAR_8, &VAR_24,
                                          VAR_20));

      FUNC_16(VAR_22);
    }
  else
    VAR_24.ret_props = ((void*)0);

  if (VAR_21)
    {
      VAR_25 = FUNC_8(
              FUNC_13(&VAR_21->done,
                                            VAR_19,
                                            VAR_20));

      if (VAR_25)
        {
          FUNC_10(VAR_20);
          return VAR_25;
        }

      if (VAR_24.supports_deadprop_count == VAR_9
          && VAR_19->supports_deadprop_count == VAR_10
          && VAR_17 & VAR_1)
        {


          VAR_19->supports_deadprop_count = VAR_9;

          FUNC_4(VAR_24.dirents);

          FUNC_0(FUNC_14(
                                              &VAR_21, VAR_19,
                                              VAR_23, VAR_4, "1",
                                              FUNC_6(VAR_17,
                                                               VAR_19,
                                                               VAR_20),
                                              VAR_7, &VAR_24,
                                              VAR_20));

          FUNC_16(VAR_21);
        }
    }

  if (VAR_22)
    {
      VAR_25 = FUNC_8(
              FUNC_13(&VAR_22->done,
                                            VAR_19,
                                            VAR_20));
    }


  if (! VAR_25 && VAR_21)
    {
      VAR_25 = FUNC_8(
              FUNC_13(&VAR_21->done,
                                            VAR_19,
                                            VAR_20));
    }

  if (!VAR_25 && VAR_24.supports_deadprop_count != VAR_10)
    VAR_19->supports_deadprop_count = VAR_24.supports_deadprop_count;

  FUNC_12(VAR_20);

  FUNC_0(VAR_25);

  if (!VAR_24.is_directory)
    return FUNC_7(VAR_3, ((void*)0),
                            FUNC_3("Can't get entries of non-directory"));

  if (VAR_14)
    *VAR_14 = VAR_24.ret_props;

  if (VAR_12)
    *VAR_12 = VAR_24.dirents;

  return VAR_5;
}
