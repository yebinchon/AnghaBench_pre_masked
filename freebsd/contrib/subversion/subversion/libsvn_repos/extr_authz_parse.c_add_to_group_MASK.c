
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * expanded_groups; TYPE_1__* authz; } ;
typedef TYPE_2__ ctor_baton_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int pool; } ;


 char* FUNC_0 (TYPE_2__*,char const*,int) ;
 int * VAR_0 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,int *) ;

__attribute__((used)) static void
FUNC_4(ctor_baton_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
  apr_hash_t *VAR_4 = FUNC_2(VAR_1->expanded_groups, VAR_2);
  if (!VAR_4)
    {
      VAR_2 = FUNC_0(VAR_1, VAR_2, -1);
      VAR_4 = FUNC_1(VAR_1->authz->pool);
      FUNC_3(VAR_1->expanded_groups, VAR_2, VAR_4);
    }
  FUNC_3(VAR_4, VAR_3, VAR_0);
}
