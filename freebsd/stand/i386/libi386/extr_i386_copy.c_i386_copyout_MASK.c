
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (int ,void*,size_t const) ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;

ssize_t
FUNC_2(const vm_offset_t VAR_3, void *VAR_4, const size_t VAR_5)
{
 if (VAR_3 + VAR_5 >= VAR_2) {
  VAR_1 = VAR_0;
  return (-1);
 }

 FUNC_1(FUNC_0(VAR_3), VAR_4, VAR_5);
 return (VAR_5);
}
