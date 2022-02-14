
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_decl {char* fname; char* rtype; char* params; } ;


 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,char*,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_4 (char *VAR_3, char *VAR_4, struct fn_decl *VAR_5)
{
  char *VAR_6;
  int VAR_7 = 1;
  char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;

  VAR_6 = VAR_4 - 1;
  while (*VAR_6 == ' ' || *VAR_6 == '\t') VAR_6--;
  if (*VAR_6-- != ';')
    {
      FUNC_2 (VAR_1, "Funny input line: %s\n", VAR_3);
      return 0;
    }
  while (*VAR_6 == ' ' || *VAR_6 == '\t') VAR_6--;
  if (*VAR_6 != ')')
    {
      FUNC_2 (VAR_1, "Funny input line: %s\n", VAR_3);
      return 0;
    }
  VAR_9 = VAR_6;
  for (;;)
    {
      int VAR_13 = *--VAR_6;
      if (VAR_13 == '(' && --VAR_7 == 0)
 break;
      else if (VAR_13 == ')')
 VAR_7++;
    }
  VAR_8 = VAR_6+1;

  VAR_6--;
  while (*VAR_6 == ' ' || *VAR_6 == '\t') VAR_6--;

  if (!FUNC_0 ((unsigned char)*VAR_6))
    {
      if (VAR_2)
 FUNC_2 (VAR_1, "%s: Can't handle this complex prototype: %s\n",
   VAR_0, VAR_3);
      return 0;
    }
  VAR_12 = VAR_6+1;

  while (FUNC_1 (*VAR_6))
    --VAR_6;
  VAR_11 = VAR_6+1;
  while (*VAR_6 == ' ' || *VAR_6 == '\t') VAR_6--;
  VAR_6[1] = 0;
  *VAR_9 = 0;
  *VAR_12 = 0;

  VAR_10 = VAR_3;
  if (FUNC_3 (VAR_10, "typedef ", 8) == 0)
    return 0;
  if (FUNC_3 (VAR_10, "extern ", 7) == 0)
    VAR_10 += 7;

  VAR_5->fname = VAR_11;
  VAR_5->rtype = VAR_10;
  VAR_5->params = VAR_8;
  return 1;
}
