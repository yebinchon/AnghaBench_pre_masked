
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_access; int max_access; } ;
typedef TYPE_1__ authz_rights_t ;



__attribute__((used)) static void
FUNC_0(authz_rights_t *VAR_0,
               const authz_rights_t *VAR_1,
               const authz_rights_t *VAR_2)
{
  VAR_0->min_access = VAR_1->min_access & VAR_2->min_access;
  VAR_0->max_access = VAR_1->max_access | VAR_2->max_access;
}
