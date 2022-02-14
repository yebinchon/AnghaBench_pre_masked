
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(unsigned char *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 unsigned VAR_3;
 int VAR_4;

 VAR_2 = 0;
 VAR_4 = 0;
 VAR_3 = 0;
 while (*VAR_1 != 0) {
  int VAR_5 = *VAR_1 ++;
  if (VAR_5 >= '0' && VAR_5 <= '9') {
   VAR_5 -= '0';
  } else if (VAR_5 >= 'A' && VAR_5 <= 'F') {
   VAR_5 -= ('A' - 10);
  } else if (VAR_5 >= 'a' && VAR_5 <= 'f') {
   VAR_5 -= ('a' - 10);
  } else {
   continue;
  }
  if (VAR_4) {
   *VAR_0 ++ = (VAR_3 << 4) + VAR_5;
   VAR_2 ++;
  } else {
   VAR_3 = VAR_5;
  }
  VAR_4 = !VAR_4;
 }
 return VAR_2;
}
