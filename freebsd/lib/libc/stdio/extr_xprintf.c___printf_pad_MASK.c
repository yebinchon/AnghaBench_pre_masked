
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __printf_io {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct __printf_io*,char const*,int) ;
 char* VAR_1 ;
 char* VAR_2 ;

int
FUNC_1(struct __printf_io *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 const char *VAR_7;
 int VAR_8 = 0;

 if (VAR_5)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 if ((VAR_6 = (VAR_4)) > 0) {
  while (VAR_6 > VAR_0) {
   VAR_8 += FUNC_0(VAR_3, VAR_7, VAR_0);
   VAR_6 -= VAR_0;
  }
  VAR_8 += FUNC_0(VAR_3, VAR_7, VAR_6);
 }
 return (VAR_8);
}
