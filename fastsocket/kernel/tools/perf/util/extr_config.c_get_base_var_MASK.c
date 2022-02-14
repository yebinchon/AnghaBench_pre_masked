
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 char FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(char *VAR_2)
{
 int VAR_3 = 0;

 for (;;) {
  int VAR_4 = FUNC_1();
  if (VAR_1)
   return -1;
  if (VAR_4 == ']')
   return VAR_3;
  if (FUNC_3(VAR_4))
   return FUNC_0(VAR_2, VAR_3, VAR_4);
  if (!FUNC_2(VAR_4) && VAR_4 != '.')
   return -1;
  if (VAR_3 > VAR_0 / 2)
   return -1;
  VAR_2[VAR_3++] = FUNC_4(VAR_4);
 }
}
