
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (char const*,int,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int,char const*,int) ;

int FUNC_5(const char *VAR_4, const void *VAR_5)
{
 int VAR_6 = 1;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 const char *VAR_10 = VAR_5;

 if (FUNC_3(VAR_4, "-") != 0) {
  VAR_6 = FUNC_2(VAR_4, VAR_2 | VAR_0 | VAR_1, 0666);
  if (VAR_6 < 0)
   return VAR_3;
 }

 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = 0;

 while (VAR_8 < VAR_7) {
  VAR_9 = FUNC_4(VAR_6, VAR_10 + VAR_8, VAR_7 - VAR_8);
  if (VAR_9 < 0) {
   VAR_9 = -VAR_3;
   break;
  }
  VAR_8 += VAR_9;
 }

 if (VAR_6 != 1)
  FUNC_0(VAR_6);
 return VAR_9 < 0 ? -VAR_9 : 0;
}
