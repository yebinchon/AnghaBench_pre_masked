
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(vm_offset_t *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;
 vm_offset_t VAR_5;

 *VAR_1 = 0;
 for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = (vm_offset_t)VAR_2 + VAR_4 * VAR_0;
  FUNC_0(VAR_1, VAR_5);
 }
}
