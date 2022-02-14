
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_method {void* imp; void* types; void* name; } ;
typedef scalar_t__ CORE_ADDR ;


 void* FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1 (CORE_ADDR VAR_0, struct objc_method *VAR_1)
{
  VAR_1->name = FUNC_0 (VAR_0 + 0, 4);
  VAR_1->types = FUNC_0 (VAR_0 + 4, 4);
  VAR_1->imp = FUNC_0 (VAR_0 + 8, 4);
}
