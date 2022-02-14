
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,size_t const) ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;

ssize_t
FUNC_1(const vm_offset_t VAR_4, void *VAR_5, const size_t VAR_6)
{


 if (VAR_4 + VAR_2 + VAR_6 > VAR_3) {
  VAR_1 = VAR_0;
  return (-1);
 }
 FUNC_0((void *)(VAR_4 + VAR_2), VAR_5, VAR_6);
 return (VAR_6);
}
