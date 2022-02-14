
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_class {void* protocols; void* cache; void* methods; void* ivars; void* instance_size; void* info; void* version; void* name; void* super_class; void* isa; } ;
typedef scalar_t__ CORE_ADDR ;


 void* FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1 (CORE_ADDR VAR_0, struct objc_class *VAR_1)
{
  VAR_1->isa = FUNC_0 (VAR_0, 4);
  VAR_1->super_class = FUNC_0 (VAR_0 + 4, 4);
  VAR_1->name = FUNC_0 (VAR_0 + 8, 4);
  VAR_1->version = FUNC_0 (VAR_0 + 12, 4);
  VAR_1->info = FUNC_0 (VAR_0 + 16, 4);
  VAR_1->instance_size = FUNC_0 (VAR_0 + 18, 4);
  VAR_1->ivars = FUNC_0 (VAR_0 + 24, 4);
  VAR_1->methods = FUNC_0 (VAR_0 + 28, 4);
  VAR_1->cache = FUNC_0 (VAR_0 + 32, 4);
  VAR_1->protocols = FUNC_0 (VAR_0 + 36, 4);
}
