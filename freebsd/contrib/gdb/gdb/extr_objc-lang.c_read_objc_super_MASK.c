
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_super {void* class; void* receiver; } ;
typedef scalar_t__ CORE_ADDR ;


 void* FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1 (CORE_ADDR VAR_0, struct objc_super *VAR_1)
{
  VAR_1->receiver = FUNC_0 (VAR_0, 4);
  VAR_1->class = FUNC_0 (VAR_0 + 4, 4);
}
