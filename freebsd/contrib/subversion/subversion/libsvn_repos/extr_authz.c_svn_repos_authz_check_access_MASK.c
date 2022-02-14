
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_repos_authz_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {TYPE_2__* filtered; } ;
typedef TYPE_3__ svn_authz_t ;
struct TYPE_9__ {int const min_access; int const max_access; } ;
struct TYPE_12__ {int lookup_state; int root; TYPE_1__ global_rights; } ;
typedef TYPE_4__ authz_user_rules_t ;
typedef int authz_access_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int root; int lookup_state; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,char const*,char const*) ;
 char* FUNC_4 (int ,int ,char const*) ;
 int FUNC_5 (int ,char const*,int const,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

svn_error_t *
FUNC_6(svn_authz_t *VAR_9, const char *VAR_10,
                             const char *VAR_11, const char *VAR_12,
                             svn_repos_authz_access_t VAR_13,
                             svn_boolean_t *VAR_14,
                             apr_pool_t *VAR_15)
{
  const authz_access_t VAR_16 =
    ((VAR_13 & VAR_6 ? VAR_4 : 0)
     | (VAR_13 & VAR_8 ? VAR_5 : 0));


  authz_user_rules_t *VAR_17 = FUNC_3(
      VAR_9,
      (VAR_10 ? VAR_10 : VAR_0),
      VAR_12);






  if ((VAR_17->global_rights.min_access & VAR_16) == VAR_16)
    {
      *VAR_14 = VAR_3;
      return VAR_2;
    }

  if ((VAR_17->global_rights.max_access & VAR_16) != VAR_16)
    {
      *VAR_14 = VAR_1;
      return VAR_2;
    }


  if (!VAR_11)
    {
      *VAR_14 =
        ((VAR_17->global_rights.max_access & VAR_16) == VAR_16);
      return VAR_2;
    }




  if (!VAR_17->root)
    FUNC_0(FUNC_2(VAR_9, VAR_15));


  VAR_11 = FUNC_4(VAR_9->filtered->lookup_state,
                           VAR_9->filtered->root, VAR_11);


  FUNC_1(VAR_11[0] == '/');



  *VAR_14 = FUNC_5(VAR_17->lookup_state, VAR_11, VAR_16,
                           !!(VAR_13 & VAR_7), VAR_15);

  return VAR_2;
}
