
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const) ;
 int VAR_0 ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_1)
{
  int VAR_2 = FUNC_5 (VAR_1);
  int VAR_3;

  if (VAR_2 == 0)
    {


      FUNC_2 ("PATTERN (insn)", VAR_0);
      return;
    }




  for (VAR_3 = VAR_2 - 1; VAR_3 >= 0 ; VAR_3--)
    {
      if (FUNC_1 (VAR_1[VAR_3]))
 FUNC_2 ("XVECEXP (", VAR_0);
      else if (FUNC_0 (VAR_1[VAR_3]))
 FUNC_2 ("XEXP (", VAR_0);
      else
 FUNC_3 ();
    }

  FUNC_2 ("pat", VAR_0);

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      if (FUNC_1 (VAR_1[VAR_3]))
 FUNC_4 (", 0, %d)", VAR_1[VAR_3] - 'a');
      else if (FUNC_0(VAR_1[VAR_3]))
 FUNC_4 (", %d)", VAR_1[VAR_3] - '0');
      else
 FUNC_3 ();
    }
}
