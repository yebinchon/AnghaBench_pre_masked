
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, char *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 for (;;) {
  VAR_2 = *VAR_0++;
  VAR_3 = *VAR_1++;
  if (FUNC_0(VAR_2) && FUNC_2(VAR_2))
   VAR_2 = FUNC_3(VAR_2);
  if (FUNC_0(VAR_3) && FUNC_2(VAR_3))
   VAR_3 = FUNC_3(VAR_3);
  VAR_4 = !FUNC_1(VAR_2);
  VAR_5 = !FUNC_1(VAR_3);
  if (VAR_4 || VAR_5 || VAR_2 != VAR_3)
   break;
 }
 return VAR_4 && VAR_5;
}
