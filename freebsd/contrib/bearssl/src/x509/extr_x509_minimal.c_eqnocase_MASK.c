
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3, *VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = VAR_1;
 while (VAR_2 -- > 0) {
  int VAR_5, VAR_6;

  VAR_5 = *VAR_3 ++;
  VAR_6 = *VAR_4 ++;
  if (VAR_5 >= 'A' && VAR_5 <= 'Z') {
   VAR_5 += 'a' - 'A';
  }
  if (VAR_6 >= 'A' && VAR_6 <= 'Z') {
   VAR_6 += 'a' - 'A';
  }
  if (VAR_5 != VAR_6) {
   return 0;
  }
 }
 return 1;
}
