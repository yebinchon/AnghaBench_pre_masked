
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_4__ {int auth_baton; scalar_t__ is_tunneled; int realm_prefix; int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_auth_iterstate_t ;
struct TYPE_5__ {char* username; char* password; } ;
typedef TYPE_2__ svn_auth_cred_simple_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,int ,char const*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (void**,int **,int ,char const*,int ,int *) ;
 int FUNC_5 (void**,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ,int *,int *) ;
 int * FUNC_8 (int ,int *,int *,char const*) ;
 int FUNC_9 (int *,int *,char*,char*) ;
 int FUNC_10 (int *,int *,char const*,char const*,char const**) ;
 scalar_t__ FUNC_11 (int const*,char*) ;

svn_error_t *
FUNC_12(svn_ra_svn__session_baton_t *VAR_4,
                             const svn_ra_svn__list_t *VAR_5,
                             const char *VAR_6, apr_pool_t *VAR_7)
{
  svn_ra_svn_conn_t *VAR_8 = VAR_4->conn;
  const char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
  svn_auth_iterstate_t *VAR_13;
  void *VAR_14;

  VAR_9 = FUNC_2(VAR_7, "%s %s", VAR_4->realm_prefix, VAR_6);

  if (VAR_4->is_tunneled && FUNC_11(VAR_5, "EXTERNAL"))
    {


      FUNC_0(FUNC_9(VAR_8, VAR_7, "EXTERNAL", ""));
      return FUNC_3(VAR_8, VAR_7);
    }
  else if (FUNC_11(VAR_5, "ANONYMOUS"))
    {
      FUNC_0(FUNC_9(VAR_8, VAR_7, "ANONYMOUS", ""));
      return FUNC_3(VAR_8, VAR_7);
    }
  else if (FUNC_11(VAR_5, "CRAM-MD5"))
    {
      FUNC_0(FUNC_4(&VAR_14, &VAR_13,
                                         VAR_0, VAR_9,
                                         VAR_4->auth_baton, VAR_7));
      if (!VAR_14)
        return FUNC_7(VAR_1, ((void*)0),
                                FUNC_1("Can't get password"));
      while (VAR_14)
        {
          VAR_10 = ((svn_auth_cred_simple_t *) VAR_14)->username;
          VAR_11 = ((svn_auth_cred_simple_t *) VAR_14)->password;
          FUNC_0(FUNC_9(VAR_8, VAR_7, "CRAM-MD5", ((void*)0)));
          FUNC_0(FUNC_10(VAR_8, VAR_7, VAR_10, VAR_11, &VAR_12));
          if (!VAR_12)
            break;
          FUNC_0(FUNC_5(&VAR_14, VAR_13, VAR_7));
        }
      if (!VAR_14)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_1("Authentication error from server: %s"),
                                VAR_12);
      FUNC_0(FUNC_6(VAR_13, VAR_7));
      return VAR_3;
    }
  else
    return FUNC_7(VAR_2, ((void*)0), ((void*)0));
}
