
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static __inline void
FUNC_0(wchar_t VAR_0, wchar_t * __restrict VAR_1, wchar_t * __restrict VAR_2)
{

 VAR_0 -= 0x10000;
 *VAR_1 = (VAR_0 >> 10) + 0xD800;
 *VAR_2 = (VAR_0 & 0x3FF) + 0xDC00;
}
