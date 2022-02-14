
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* filtered; int full; int pool; } ;
typedef TYPE_1__ svn_authz_t ;
struct TYPE_8__ {int global_rights; int * root; int lookup_state; int * user; int * repository; int * pool; } ;
typedef TYPE_2__ authz_user_rules_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char const*,char const*) ;
 int FUNC_4 (int *,int ,char const*,char const*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static authz_user_rules_t *
FUNC_7(svn_authz_t *VAR_0,
               const char *VAR_1,
               const char *VAR_2)
{
  apr_pool_t *VAR_3;


  if (VAR_0->filtered)
    {

      if (FUNC_3(VAR_0->filtered, VAR_1, VAR_2))
        return VAR_0->filtered;


      FUNC_6(VAR_0->filtered->pool);
      VAR_0->filtered = ((void*)0);
    }


  VAR_3 = FUNC_5(VAR_0->pool);


  VAR_0->filtered = FUNC_0(VAR_3, sizeof(*VAR_0->filtered));
  VAR_0->filtered->pool = VAR_3;
  VAR_0->filtered->repository = FUNC_1(VAR_3, VAR_1);
  VAR_0->filtered->user = VAR_2 ? FUNC_1(VAR_3, VAR_2) : ((void*)0);
  VAR_0->filtered->lookup_state = FUNC_2(VAR_3);
  VAR_0->filtered->root = ((void*)0);

  FUNC_4(&VAR_0->filtered->global_rights,
                               VAR_0->full, VAR_2, VAR_1);

  return VAR_0->filtered;
}
