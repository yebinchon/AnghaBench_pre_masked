
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct copyin_arg0 {int len; scalar_t__ kc; } ;


 int FUNC_0 (void*,void*,int ) ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_0, void *VAR_1)
{
 struct copyin_arg0 *VAR_2;

 VAR_2 = VAR_1;
 FUNC_0((void *)VAR_2->kc, (void *)VAR_0, VAR_2->len);
}
