
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0, size_t VAR_1,
 const unsigned char *VAR_2, size_t VAR_3)
{
 while (VAR_1 > 0 && *VAR_0 == 0) {
  VAR_0 ++;
  VAR_1 --;
 }
 while (VAR_3 > 0 && *VAR_2 == 0) {
  VAR_2 ++;
  VAR_3 --;
 }
 if (VAR_1 != VAR_3) {
  return 0;
 }
 return FUNC_0(VAR_0, VAR_2, VAR_1) == 0;
}
