
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_0, char *VAR_1, int VAR_2, int *VAR_3)
{
  int VAR_4;
  int VAR_5;


  VAR_5 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (VAR_5 == 0)
    {

      VAR_4 = VAR_2;
    }
  else
    {

      for (VAR_5 = 0, VAR_4 = 0; VAR_2 > 0 && VAR_5 == 0; VAR_4++, VAR_2--)
 {
   VAR_5 = FUNC_0 (VAR_0++, VAR_1++, 1);
 }

      if (VAR_5 != 0)
 {
   VAR_4--;
 }
    }
  if (VAR_3 != ((void*)0))
    {
      *VAR_3 = VAR_5;
    }
  return (VAR_4);
}
