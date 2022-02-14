
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4 (void)
{
  unsigned int VAR_2, VAR_3;
  int VAR_4;

  VAR_2 = 1;
  VAR_4 = 0;
  while (1)
    {
      while (VAR_2 < 64 && VAR_1[FUNC_0 (VAR_2)])
 VAR_2++;
      if (VAR_2 >= 64)
 break;
      for (VAR_3 = VAR_2 + 1; VAR_3 < 64 && ! VAR_1[FUNC_0 (VAR_3)]; VAR_3++)
 continue;
      if (VAR_4 == 0)
 {
   FUNC_3 ("\t.pred.safe_across_calls ", VAR_0);
   VAR_4 = 1;
 }
      else
 FUNC_2 (',', VAR_0);
      if (VAR_3 == VAR_2 + 1)
 FUNC_1 (VAR_0, "p%u", VAR_2);
      else
 FUNC_1 (VAR_0, "p%u-p%u", VAR_2, VAR_3 - 1);
      VAR_2 = VAR_3 + 1;
    }
  if (VAR_4)
    FUNC_2 ('\n', VAR_0);
}
