
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_membuf_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_23__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_dirent_t ;
typedef int svn_depth_t ;
typedef int (* svn_client_list_func2_t ) (void*,char*,TYPE_2__*,int *,char const*,char const*,char const*,int *) ;
typedef int svn_client_ctx_t ;
struct TYPE_24__ {int rev; int url; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_25__ {char const* fs_base_path; int * locks; int (* list_func ) (void*,char*,TYPE_2__*,int *,char const*,char const*,char const*,int *) ;int * ctx; void* list_baton; } ;
typedef TYPE_5__ receiver_baton_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int *,int *,char const*,int const*,int ,int *,int *,char const*,char const*,int (*) (void*,char*,TYPE_2__*,int *,char const*,char const*,char const*,int *),void*,int *,int *,int *) ;
 int FUNC_5 (int *,int const*,int ,int ,scalar_t__,int (*) (void*,char*,TYPE_2__*,int *,char const*,char const*,char const*,int *),void*,int *,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ,int const*,int *) ;
 char* FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int **,TYPE_4__**,char const*,int *,int const*,int const*,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_13 (TYPE_1__*) ;
 int * FUNC_14 (int *,char const*) ;
 int FUNC_15 (int *,int,int *) ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_16 (int *,int **,char*,int ,int *) ;
 TYPE_1__* FUNC_17 (int *,char*,int ,int const*,int ,int ,int ,TYPE_5__*,int *) ;
 int FUNC_18 (int *,char*,int ,TYPE_2__**,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(const char *VAR_10,
              const svn_opt_revision_t *VAR_11,
              const svn_opt_revision_t *VAR_12,
              const apr_array_header_t *VAR_13,
              svn_depth_t VAR_14,
              apr_uint32_t VAR_15,
              svn_boolean_t VAR_16,
              svn_boolean_t VAR_17,
              const char *VAR_18,
              const char *VAR_19,
              svn_client_list_func2_t VAR_20,
              void *VAR_21,
              svn_client_ctx_t *VAR_22,
              apr_pool_t *VAR_23)
{
  svn_ra_session_t *VAR_24;
  svn_client__pathrev_t *VAR_25;
  svn_dirent_t *VAR_26;
  const char *VAR_27;
  svn_error_t *VAR_28;
  apr_hash_t *VAR_29;
  apr_hash_t *VAR_30;
  svn_membuf_t VAR_31;

  if (VAR_17)
    VAR_30 = FUNC_3(VAR_23);
  else
    VAR_30 = ((void*)0);



  VAR_15 |= VAR_0;


  FUNC_0(FUNC_8(&VAR_24, &VAR_25,
                                            VAR_10, ((void*)0),
                                            VAR_11,
                                            VAR_12, VAR_22, VAR_23));

  VAR_27 = FUNC_7(VAR_25, VAR_23);


  if (VAR_16)
    {


      VAR_28 = FUNC_16(VAR_24, &VAR_29, "", VAR_14, VAR_23);

      if (VAR_28 && VAR_28->apr_err == VAR_2)
        {
          FUNC_10(VAR_28);
          VAR_29 = ((void*)0);
        }
      else if (VAR_28)
        return FUNC_13(VAR_28);
    }
  else
    VAR_29 = ((void*)0);


  if (!VAR_17)
    {
      receiver_baton_t VAR_32;
      VAR_32.list_baton = VAR_21;
      VAR_32.ctx = VAR_22;
      VAR_32.list_func = VAR_20;
      VAR_32.locks = VAR_29;
      VAR_32.fs_base_path = VAR_27;

      VAR_28 = FUNC_17(VAR_24, "", VAR_25->rev, VAR_13, VAR_14,
                        VAR_15, VAR_5, &VAR_32, VAR_23);

      if (FUNC_12(VAR_28, VAR_3))
        FUNC_10(VAR_28);
      else
        return FUNC_13(VAR_28);
    }


  FUNC_0(FUNC_18(VAR_24, "", VAR_25->rev, &VAR_26, VAR_23));
  if (! VAR_26)
    return FUNC_11(VAR_1, ((void*)0),
                             FUNC_1("URL '%s' non-existent in revision %ld"),
                             VAR_25->url, VAR_25->rev);



  FUNC_15(&VAR_31, 256, VAR_23);


  if (FUNC_6(FUNC_9(VAR_27, VAR_23), VAR_13,
                     &VAR_31))
    FUNC_0(VAR_20(VAR_21, "", VAR_26, VAR_29
                      ? (FUNC_14(VAR_29, VAR_27))
                      : ((void*)0), VAR_27, VAR_18,
                      VAR_19, VAR_23));

  if (VAR_26->kind == VAR_9
      && (VAR_14 == VAR_6
          || VAR_14 == VAR_7
          || VAR_14 == VAR_8))
    FUNC_0(FUNC_4(VAR_15, "", VAR_25->rev, VAR_24, VAR_29,
                             VAR_27, VAR_13, VAR_14, VAR_22, VAR_30,
                             VAR_18, VAR_19, VAR_20,
                             VAR_21, &VAR_31, VAR_23, VAR_23));




  if (VAR_17 && FUNC_2(VAR_30))
    {


      FUNC_0(FUNC_5(VAR_30, VAR_13, VAR_14, VAR_15,
                             VAR_16, VAR_20, VAR_21,
                             VAR_22, VAR_23));
    }

  return VAR_4;
}
