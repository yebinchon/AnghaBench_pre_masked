
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(const unsigned char *VAR_0, size_t VAR_1)
{
 while (VAR_1 > 0 && *VAR_0 == 0) {
  VAR_0 ++;
  VAR_1 --;
 }
 if (VAR_1 == 0 || *VAR_0 >= 0x80) {
  VAR_1 ++;
 }
 return VAR_1;
}
