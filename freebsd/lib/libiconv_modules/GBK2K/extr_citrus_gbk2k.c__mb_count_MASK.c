
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int uint32_t ;



__attribute__((used)) static __inline int
FUNC_0(wchar_t VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = (uint32_t)VAR_0;
 if (!(VAR_1 & 0xffffff00))
  return (1);
 if (!(VAR_1 & 0xffff0000))
  return (2);
 return (4);
}
