
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char const*,int) ;

int
FUNC_1(int VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = VAR_4;
 VAR_5 = 0;
 for (;;) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7);
  if (VAR_6 > 0) {
   if ((VAR_7 -= VAR_6) <= 0)
    return VAR_4;
   VAR_3 += VAR_6;
   VAR_5 = 0;
  } else if (VAR_6 == 0) {
   if (++VAR_5 > 10)
    return VAR_4 - VAR_7;
  } else if (VAR_1 != VAR_0) {
   return -1;
  }
 }
}
