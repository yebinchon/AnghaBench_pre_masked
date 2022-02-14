
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** retv; } ;
struct acl_field {scalar_t__ type; struct acl_field* next; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct acl_field *VAR_1)
{
    while(VAR_1 != ((void*)0)) {
 if (VAR_1->type == VAR_0) {
     if (*VAR_1->u.retv)
  FUNC_0(*VAR_1->u.retv);
     *VAR_1->u.retv = ((void*)0);
 }
 VAR_1 = VAR_1->next;
    }
}
