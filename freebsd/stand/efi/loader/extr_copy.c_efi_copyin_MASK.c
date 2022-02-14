
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (void const*,void*,size_t const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

ssize_t
FUNC_1(const void *VAR_6, vm_offset_t VAR_7, const size_t VAR_8)
{

 if (!VAR_3) {
  VAR_2 = (vm_offset_t)VAR_4 - VAR_7;
  VAR_3 = 1;
 }


 if (VAR_7 + VAR_2 + VAR_8 > VAR_5) {
  VAR_1 = VAR_0;
  return (-1);
 }
 FUNC_0(VAR_6, (void *)(VAR_7 + VAR_2), VAR_8);
 return (VAR_8);
}
