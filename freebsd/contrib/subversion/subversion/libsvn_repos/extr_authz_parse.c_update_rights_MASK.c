
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_access; int min_access; } ;
typedef TYPE_1__ authz_rights_t ;
typedef int authz_access_t ;



__attribute__((used)) static void
FUNC_0(authz_rights_t *VAR_0,
              authz_access_t VAR_1)
{
  VAR_0->min_access &= VAR_1;
  VAR_0->max_access |= VAR_1;
}
