
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;
typedef int FILE ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int *) ;

void
FUNC_3 (FILE *VAR_3)
{
  rtx VAR_4[2];
  VAR_4[0] = FUNC_1 (VAR_0, 0);
  VAR_4[1] = FUNC_1 (VAR_0, 1);

  if (VAR_1)
    {
      FUNC_2 ("basr\t%1,0", VAR_4);
      FUNC_2 ("lmg\t%0,%1,14(%1)", VAR_4);
      FUNC_2 ("br\t%1", VAR_4);
      FUNC_0 (VAR_3, (HOST_WIDE_INT)(VAR_2 - 10));
    }
  else
    {
      FUNC_2 ("basr\t%1,0", VAR_4);
      FUNC_2 ("lm\t%0,%1,6(%1)", VAR_4);
      FUNC_2 ("br\t%1", VAR_4);
      FUNC_0 (VAR_3, (HOST_WIDE_INT)(VAR_2 - 8));
    }
}
