
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_20__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_lock_t ;
struct TYPE_21__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_22__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_dirent_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
struct TYPE_23__ {int rev; int url; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_4__*,char*,int*,int ,int *,int *) ;
 int FUNC_3 (int **,TYPE_4__**,char const*,int *,TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int *,int ,int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* FUNC_7 (int *,int **,char*,int *) ;
 TYPE_2__* FUNC_8 (int *,int **,char*,int ,int *) ;
 int FUNC_9 (int *,char*,int ,TYPE_3__**,int *) ;
 int FUNC_10 (int *,char const**,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_8,
            const svn_opt_revision_t *VAR_9,
            const svn_opt_revision_t *VAR_10,
            svn_depth_t VAR_11,
            svn_boolean_t VAR_12,
            svn_boolean_t VAR_13,
            const apr_array_header_t *VAR_14,
            int *VAR_15,
            svn_client_ctx_t *VAR_16,
            apr_pool_t *VAR_17)
{
  svn_ra_session_t *VAR_18;
  svn_client__pathrev_t *VAR_19;
  svn_lock_t *VAR_20;
  const char *VAR_21;
  svn_dirent_t *VAR_22;
  svn_error_t *VAR_23;

  if (VAR_11 == VAR_5)
    VAR_11 = VAR_4;






  FUNC_0(FUNC_3(&VAR_18, &VAR_19,
                                            VAR_8, ((void*)0), VAR_9,
                                            VAR_10, VAR_16, VAR_17));

  FUNC_10(((void*)0), &VAR_21, VAR_19->url, VAR_17);


  FUNC_0(FUNC_9(VAR_18, "", VAR_19->rev, &VAR_22, VAR_17));

  if (! VAR_22)
    return FUNC_5(VAR_0, ((void*)0),
                             FUNC_1("URL '%s' non-existent in revision %ld"),
                             VAR_19->url, VAR_19->rev);


  VAR_23 = FUNC_7(VAR_18, &VAR_20, "", VAR_17);




  if (VAR_23 && VAR_23->apr_err == VAR_1)
    {
      FUNC_4(VAR_23);
      VAR_20 = ((void*)0);
    }
  else if (VAR_23)
    return FUNC_6(VAR_23);


  ++(*VAR_15);


  if (VAR_11 > VAR_4 && (VAR_22->kind == VAR_6))
    {
      apr_hash_t *VAR_24;

      if (VAR_9->kind == VAR_7)
        {
          VAR_23 = FUNC_8(VAR_18, &VAR_24, "", VAR_11, VAR_17);


          if (VAR_23 &&
              (VAR_23->apr_err == VAR_1
               || VAR_23->apr_err == VAR_2))
            FUNC_4(VAR_23);
          else if (VAR_23)
            return FUNC_6(VAR_23);
        }

      FUNC_0(FUNC_2(VAR_18, VAR_19, "",
                            VAR_15, VAR_11, VAR_16, VAR_17));
    }

  return VAR_3;
}
