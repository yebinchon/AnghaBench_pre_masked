
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_address_info {int type; int reg; int offset; } ;
typedef int rtx ;
typedef int FILE ;






 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct mips_address_info*,int ,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char) ;
 char** VAR_0 ;
 int VAR_1 ;

void
FUNC_6 (FILE *VAR_2, rtx VAR_3)
{
  struct mips_address_info VAR_4;

  if (FUNC_3 (&VAR_4, VAR_3, VAR_1, 1))
    switch (VAR_4.type)
      {
      case 129:
 FUNC_5 (VAR_2, VAR_4.offset, 0);
 FUNC_1 (VAR_2, "(%s)", VAR_0[FUNC_0 (VAR_4.reg)]);
 return;

      case 130:
 FUNC_5 (VAR_2, VAR_4.offset, 'R');
 FUNC_1 (VAR_2, "(%s)", VAR_0[FUNC_0 (VAR_4.reg)]);
 return;

      case 131:
 FUNC_4 (VAR_2, VAR_3);
 FUNC_1 (VAR_2, "(%s)", VAR_0[0]);
 return;

      case 128:
 FUNC_4 (VAR_2, VAR_3);
 return;
      }
  FUNC_2 ();
}
