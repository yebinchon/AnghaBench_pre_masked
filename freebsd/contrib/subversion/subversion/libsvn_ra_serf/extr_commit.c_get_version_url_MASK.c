
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char const* data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_10__ {char* path; } ;
struct TYPE_12__ {TYPE_2__ session_url; int wc_callback_baton; TYPE_1__* wc_callbacks; } ;
typedef TYPE_4__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int (* get_wc_prop ) (int ,char const*,int ,TYPE_3__ const**,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char const*,int ,TYPE_3__ const**,int *) ;
 int * FUNC_4 (int ,int *,int ,char*) ;
 char* FUNC_5 (char const*,char const*,int *) ;
 int FUNC_6 (char const**,TYPE_4__*,char const*,int ,char*,int *,int *) ;
 int FUNC_7 (char const**,int *,TYPE_4__*,int *,int ,int *,int *) ;
 char* FUNC_8 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_3,
                svn_ra_serf__session_t *VAR_4,
                const char *VAR_5,
                svn_revnum_t VAR_6,
                const char *VAR_7,
                apr_pool_t *VAR_8,
                apr_pool_t *VAR_9)
{
  const char *VAR_10;

  if (VAR_4->wc_callbacks->get_wc_prop)
    {
      const svn_string_t *VAR_11;

      FUNC_0(VAR_4->wc_callbacks->get_wc_prop(
                VAR_4->wc_callback_baton,
                VAR_5,
                VAR_2,
                &VAR_11, VAR_9));

      if (VAR_11)
        {
          *VAR_3 =
            FUNC_8(VAR_11->data, VAR_8);
          return VAR_1;
        }
    }

  if (VAR_7)
    {
      VAR_10 = VAR_7;
    }
  else
    {
      const char *VAR_12;

      if (FUNC_1(VAR_6))
        {





          FUNC_0(FUNC_7(&VAR_12,
                                              ((void*)0) ,
                                              VAR_4,
                                              ((void*)0) , VAR_6,
                                              VAR_9, VAR_9));
        }
      else
        {
          VAR_12 = VAR_4->session_url.path;
        }

      FUNC_0(FUNC_6(&VAR_10, VAR_4,
                                          VAR_12, VAR_6,
                                          "checked-in",
                                          VAR_9, VAR_9));
      if (!VAR_10)
        return FUNC_4(VAR_0, ((void*)0),
                                 FUNC_2("Path '%s' not present"),
                                 VAR_4->session_url.path);

      VAR_10 = FUNC_8(VAR_10, VAR_9);
    }

  *VAR_3 = FUNC_5(VAR_10, VAR_5,
                                                VAR_8);

  return VAR_1;
}
