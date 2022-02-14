
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
struct TYPE_6__ {int url; } ;
struct TYPE_5__ {char const* abspath; TYPE_4__ loc; } ;
typedef TYPE_1__ merge_target_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,TYPE_4__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__**,char const*,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int **,int **,char const*,int *,int const*,int const*,int *,int *) ;
 int FUNC_5 (int **,int ,char const*,int *,int *,int *) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t **VAR_4,
                                   svn_client__pathrev_t **VAR_5,
                                   svn_ra_session_t **VAR_6,
                                   merge_target_t **VAR_7,
                                   const char *VAR_8,
                                   const svn_opt_revision_t *VAR_9,
                                   const char *VAR_10,
                                   svn_client_ctx_t *VAR_11,
                                   apr_pool_t *VAR_12,
                                   apr_pool_t *VAR_13)
{
  svn_client__pathrev_t *VAR_14;
  merge_target_t *VAR_15;



  FUNC_0(FUNC_3(&VAR_15, VAR_10,
                         VAR_0, VAR_0, VAR_0,
                         VAR_11, VAR_13, VAR_13));
  if (! VAR_15->loc.url)
    return FUNC_7(VAR_1, ((void*)0),
                             FUNC_1("Can't reintegrate into '%s' because it is "
                               "locally added and therefore not related to "
                               "the merge source"),
                             FUNC_6(VAR_15->abspath,
                                                    VAR_13));

  FUNC_0(FUNC_5(VAR_6,
                                      VAR_15->loc.url, VAR_15->abspath,
                                      VAR_11, VAR_12, VAR_13));

  FUNC_0(FUNC_4(
            VAR_4, &VAR_14,
            VAR_8, ((void*)0), VAR_9, VAR_9,
            VAR_11, VAR_12));



  FUNC_0(FUNC_2(VAR_14,
                           FUNC_6(VAR_8,
                                                  VAR_13),
                           &VAR_15->loc,
                           FUNC_6(VAR_15->abspath,
                                                  VAR_13),
                           VAR_3 , VAR_13));

  *VAR_5 = VAR_14;
  *VAR_7 = VAR_15;
  return VAR_2;
}
