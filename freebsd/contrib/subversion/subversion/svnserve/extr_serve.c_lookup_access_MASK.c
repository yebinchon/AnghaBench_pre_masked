
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_repos_authz_access_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_8__ {TYPE_1__* client_info; } ;
typedef TYPE_2__ server_baton_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;
typedef int apr_pool_t ;
struct TYPE_7__ {scalar_t__ user; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__*,char const*,int,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_boolean_t FUNC_4(apr_pool_t *VAR_5,
                                   server_baton_t *VAR_6,
                                   svn_repos_authz_access_t VAR_7,
                                   const char *VAR_8,
                                   svn_boolean_t VAR_9)
{
  enum access_type VAR_10 = (VAR_7 & VAR_4) ?
    VAR_3 : VAR_1;
  svn_boolean_t VAR_11;
  svn_error_t *VAR_12;


  VAR_12 = FUNC_0(&VAR_11, VAR_8, VAR_7, VAR_6, VAR_5);


  if (VAR_12)
    {
      FUNC_2(VAR_12, VAR_6);
      FUNC_3(VAR_12);
      return VAR_0;
    }




  if (FUNC_1(VAR_6) >= VAR_10
      && VAR_11
      && (! VAR_9 || VAR_6->client_info->user))
    return VAR_2;

  return VAR_0;
}
