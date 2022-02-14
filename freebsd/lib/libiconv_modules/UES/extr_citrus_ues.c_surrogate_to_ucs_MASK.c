
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static __inline wchar_t
FUNC_0(wchar_t VAR_0, wchar_t VAR_1)
{

 VAR_0 -= 0xD800;
 VAR_1 -= 0xDC00;
 return ((VAR_0 << 10 | VAR_1) + 0x10000);
}
