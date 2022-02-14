
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;

int FUNC_1(void)
{
 int VAR_5;
 extern char *VAR_6;

 if (VAR_4 > VAR_3)
  VAR_5 = (uschar)*--VAR_4;
 else if (VAR_6 != ((void*)0)) {
  if ((VAR_5 = (uschar)*VAR_6) != 0)
   VAR_6++;
 } else
  VAR_5 = FUNC_0();
 if (VAR_5 == VAR_0)
  VAR_5 = 0;
 if (VAR_2 >= VAR_1 + sizeof VAR_1)
  VAR_2 = VAR_1;
 *VAR_2 = VAR_5;
 if (VAR_5 != 0) {
  VAR_2++;
 }
 return (VAR_5);
}
