
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char const* data; int len; } ;
typedef TYPE_3__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_7__* session; int merge_url; int pool; TYPE_1__* commit_info; } ;
typedef TYPE_4__ merge_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_12__ {int wc_callback_baton; TYPE_2__* wc_callbacks; } ;
struct TYPE_9__ {int (* push_wc_prop ) (int ,char const*,int ,TYPE_3__*,int *) ;} ;
struct TYPE_8__ {void* post_commit_err; void* author; void* date; scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_2 (TYPE_7__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int ,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*,int ,TYPE_3__*,int *) ;
 int FUNC_7 (scalar_t__*,char const*) ;
 int * FUNC_8 (int ,int *,int ,char const*,int ) ;
 char* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,char const*,char const*) ;
 char* FUNC_11 (char const*,int *) ;
 char* FUNC_12 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_serf__xml_estate_t *VAR_13,
             void *VAR_14,
             int VAR_15,
             const svn_string_t *VAR_16,
             apr_hash_t *VAR_17,
             apr_pool_t *VAR_18)
{
  merge_context_t *VAR_19 = VAR_14;

  if (VAR_15 == VAR_7)
    {
      const char *VAR_20;

      VAR_20 = FUNC_9(VAR_17, "resourcetype");



      if (VAR_20 && *VAR_20 == 'b')
        {
          const char *VAR_21;

          VAR_21 = FUNC_9(VAR_17, "revision");
          if (VAR_21)
            {
              apr_int64_t VAR_22;

              FUNC_0(FUNC_7(&VAR_22, VAR_21));
              VAR_19->commit_info->revision = (svn_revnum_t)VAR_22;
            }
          else
            VAR_19->commit_info->revision = VAR_9;

          VAR_19->commit_info->date =
              FUNC_4(VAR_19->pool,
                          FUNC_9(VAR_17, "date"));

          VAR_19->commit_info->author =
              FUNC_4(VAR_19->pool,
                          FUNC_9(VAR_17, "author"));

          VAR_19->commit_info->post_commit_err =
             FUNC_4(VAR_19->pool,
                         FUNC_9(VAR_17, "post-commit-err"));
        }
      else
        {
          const char *VAR_23;

          VAR_23 = FUNC_12(
                   VAR_19->merge_url,
                   FUNC_9(VAR_17, "href"));

          if (VAR_23 == ((void*)0))
            return FUNC_8(VAR_8, ((void*)0),
                                     FUNC_3("A MERGE response for '%s' is not "
                                       "a child of the destination ('%s')"),
                                     VAR_23, VAR_19->merge_url);



          if (!FUNC_2(VAR_19->session)
              && VAR_19->session->wc_callbacks->push_wc_prop)
            {
              const char *VAR_24;
              svn_string_t VAR_25;

              VAR_24 = FUNC_9(VAR_17, "checked-in");
              VAR_25.data = VAR_24;
              VAR_25.len = FUNC_5(VAR_24);

              FUNC_0(VAR_19->session->wc_callbacks->push_wc_prop(
                        VAR_19->session->wc_callback_baton,
                        VAR_23,
                        VAR_11,
                        &VAR_25,
                        VAR_18));
            }
        }
    }
  else if (VAR_15 == VAR_1)
    {
      FUNC_10(VAR_13, VAR_7, "resourcetype", "baseline");
    }
  else if (VAR_15 == VAR_3)
    {
      FUNC_10(VAR_13, VAR_7, "resourcetype", "collection");
    }
  else
    {
      const char *VAR_26;
      const char *VAR_27 = VAR_16->data;

      if (VAR_15 == VAR_5)
        {
          VAR_26 = "href";
          VAR_27 = FUNC_11(VAR_27, VAR_18);
        }
      else if (VAR_15 == VAR_2)
        {
          VAR_26 = "checked-in";
          VAR_27 = FUNC_11(VAR_27, VAR_18);
        }
      else if (VAR_15 == VAR_12)
        VAR_26 = "revision";
      else if (VAR_15 == VAR_4)
        VAR_26 = "date";
      else if (VAR_15 == VAR_0)
        VAR_26 = "author";
      else if (VAR_15 == VAR_6)
        VAR_26 = "post-commit-err";
      else
        FUNC_1();

      FUNC_10(VAR_13, VAR_7, VAR_26, VAR_27);
    }

  return VAR_10;
}
