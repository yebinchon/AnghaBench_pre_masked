
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const) ;
 int VAR_2 ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_3)
{
  const char *VAR_4 = FUNC_1 (VAR_3, 0);
  const char *VAR_5;
  int VAR_6;
  int VAR_7 = FUNC_3 (FUNC_1 (VAR_3, 2));




  if (VAR_4[0] == 0 || VAR_4[0] == '*')
    return;

  VAR_6 = FUNC_7 (VAR_4);

  if (VAR_6 > VAR_0)
    VAR_0 = VAR_6;

  if (VAR_7 == 0)
                        ;
  else if (VAR_7 == 1)
    FUNC_5 ("#define HAVE_%s 1\n", VAR_4);
  else
    {


      FUNC_5 ("#define HAVE_%s (", VAR_4);
      for (VAR_5 = FUNC_1 (VAR_3, 2); *VAR_5; VAR_5++)
 {
   if (FUNC_0 (*VAR_5))
     FUNC_2 (" \\\n", VAR_2);
   else
     FUNC_6 (*VAR_5);
 }
      FUNC_2 (")\n", VAR_2);
    }

  FUNC_4 (&VAR_1, &VAR_3, sizeof (rtx));
}
