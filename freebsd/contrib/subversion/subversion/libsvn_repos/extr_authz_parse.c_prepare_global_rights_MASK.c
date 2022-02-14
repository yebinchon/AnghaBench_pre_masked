
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* authz; } ;
typedef TYPE_2__ ctor_baton_t ;
struct TYPE_11__ {int user; } ;
typedef TYPE_3__ authz_global_rights_t ;
struct TYPE_9__ {int user_rights; int pool; } ;


 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,char const*,int ) ;
 TYPE_3__* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(ctor_baton_t *VAR_0, const char *VAR_1)
{
  authz_global_rights_t *VAR_2 = FUNC_2(VAR_0->authz->user_rights, VAR_1);
  if (!VAR_2)
    {
      VAR_2 = FUNC_0(VAR_0->authz->pool, sizeof(*VAR_2));
      FUNC_1(VAR_2, VAR_1, VAR_0->authz->pool);
      FUNC_3(VAR_0->authz->user_rights, VAR_2->user, VAR_2);
    }
}
