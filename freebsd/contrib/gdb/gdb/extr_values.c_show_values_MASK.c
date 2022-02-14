
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 int VAR_0 ;
 struct value* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 int FUNC_3 (struct value*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3, int VAR_4)
{
  int VAR_5;
  struct value *VAR_6;
  static int VAR_7 = 1;

  if (VAR_3)
    {


      if (VAR_3[0] != '+' || VAR_3[1] != '\0')
 VAR_7 = FUNC_1 (VAR_3) - 5;
    }
  else
    {

      VAR_7 = VAR_2 - 9;
    }

  if (VAR_7 <= 0)
    VAR_7 = 1;

  for (VAR_5 = VAR_7; VAR_5 < VAR_7 + 10 && VAR_5 <= VAR_2; VAR_5++)
    {
      VAR_6 = FUNC_0 (VAR_5);
      FUNC_2 ("$%d = ", VAR_5);
      FUNC_3 (VAR_6, VAR_1, 0, VAR_0);
      FUNC_2 ("\n");
    }


  VAR_7 += 10;




  if (VAR_4 && VAR_3)
    {
      VAR_3[0] = '+';
      VAR_3[1] = '\0';
    }
}
