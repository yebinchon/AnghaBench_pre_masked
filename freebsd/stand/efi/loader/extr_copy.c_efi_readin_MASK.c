
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,void*,size_t const) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

ssize_t
FUNC_1(const int VAR_4, vm_offset_t VAR_5, const size_t VAR_6)
{

 if (VAR_5 + VAR_2 + VAR_6 > VAR_3) {
  VAR_1 = VAR_0;
  return (-1);
 }
 return (FUNC_0(VAR_4, (void *)(VAR_5 + VAR_2), VAR_6));
}
