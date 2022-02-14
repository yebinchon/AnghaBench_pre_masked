
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct real_format {int p; int emin; int emax; } ;


 struct real_format* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_0,
     const char *VAR_1,
     tree VAR_2)
{
  const struct real_format *VAR_3;
  char VAR_4[64], VAR_5[128], *VAR_6;
  int VAR_7;

  VAR_3 = FUNC_0 (FUNC_1 (VAR_2));


  FUNC_4 (VAR_4, "__%s_MANT_DIG__", VAR_0);
  FUNC_2 (VAR_4, VAR_3->p);


  FUNC_4 (VAR_4, "__%s_MIN_EXP__", VAR_0);
  FUNC_4 (VAR_5, "(%d)", VAR_3->emin);
  FUNC_3 (VAR_4, VAR_5, 0);


  FUNC_4 (VAR_4, "__%s_MAX_EXP__", VAR_0);
  FUNC_2 (VAR_4, VAR_3->emax);


  FUNC_4 (VAR_4, "__%s_MIN__", VAR_0);
  FUNC_4 (VAR_5, "1E%d%s", VAR_3->emin, VAR_1);
  FUNC_3 (VAR_4, VAR_5, 0);


  FUNC_4 (VAR_4, "__%s_MAX__", VAR_0);
  VAR_6 = VAR_5;
  for (VAR_7 = VAR_3->p; VAR_7; VAR_7--)
    {
      *VAR_6++ = '9';
      if (VAR_7 == VAR_3->p)
 *VAR_6++ = '.';
    }
  *VAR_6 = 0;

  FUNC_4 (&VAR_5[VAR_3->p + 1], "E%d%s", VAR_3->emax, VAR_1);
  FUNC_3 (VAR_4, VAR_5, 0);



  FUNC_4 (VAR_4, "__%s_EPSILON__", VAR_0);
  FUNC_4 (VAR_5, "1E-%d%s", VAR_3->p - 1, VAR_1);
  FUNC_3 (VAR_4, VAR_5, 0);


  FUNC_4 (VAR_4, "__%s_DEN__", VAR_0);
  VAR_6 = VAR_5;
  for (VAR_7 = VAR_3->p; VAR_7 > 1; VAR_7--)
    {
      *VAR_6++ = '0';
      if (VAR_7 == VAR_3->p)
 *VAR_6++ = '.';
    }
  *VAR_6 = 0;
  FUNC_4 (&VAR_5[VAR_3->p], "1E%d%s", VAR_3->emin, VAR_1);
  FUNC_3 (VAR_4, VAR_5, 0);
}
