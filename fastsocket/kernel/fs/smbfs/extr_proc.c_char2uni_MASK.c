
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char wchar_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const unsigned char *VAR_1, int VAR_2, wchar_t *VAR_3)
{
 if (VAR_2 < 2)
  return -VAR_0;
 *VAR_3 = (VAR_1[1] << 8) | VAR_1[0];
 return 2;
}
