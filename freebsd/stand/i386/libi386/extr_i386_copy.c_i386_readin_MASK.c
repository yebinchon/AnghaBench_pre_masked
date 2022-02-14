
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const,int ,size_t const) ;

ssize_t
FUNC_2(const int VAR_3, vm_offset_t VAR_4, const size_t VAR_5)
{

 if (VAR_4 + VAR_5 >= VAR_2) {
  VAR_1 = VAR_0;
  return (-1);
 }

 return (FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_5));
}
