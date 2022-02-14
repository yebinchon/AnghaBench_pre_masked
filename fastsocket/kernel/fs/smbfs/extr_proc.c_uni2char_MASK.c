
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(wchar_t VAR_1, unsigned char *VAR_2, int VAR_3)
{
 if (VAR_3 < 2)
  return -VAR_0;
 *VAR_2++ = VAR_1 & 0xff;
 *VAR_2++ = VAR_1 >> 8;
 return 2;
}
