
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = VAR_4;
 VAR_3 = (void *)FUNC_1(VAR_0, VAR_1 | VAR_2);

 FUNC_2();

 if (FUNC_3(VAR_5) != 0)
  return (-1);

 for (VAR_7 = 0; VAR_7 < 5000; ++VAR_7) {
  if (VAR_4 > VAR_6)
   return (0);
  else
   FUNC_0(1000);
 }

 return (-2);
}
