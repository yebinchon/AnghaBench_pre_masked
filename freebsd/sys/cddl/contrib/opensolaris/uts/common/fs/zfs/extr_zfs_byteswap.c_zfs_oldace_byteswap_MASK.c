
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* a_type; void* a_flags; void* a_access_mask; void* a_who; } ;
typedef TYPE_1__ ace_t ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

void
FUNC_2(ace_t *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 != VAR_1; VAR_2++, VAR_0++) {
  VAR_0->a_who = FUNC_1(VAR_0->a_who);
  VAR_0->a_access_mask = FUNC_1(VAR_0->a_access_mask);
  VAR_0->a_flags = FUNC_0(VAR_0->a_flags);
  VAR_0->a_type = FUNC_0(VAR_0->a_type);
 }
}
