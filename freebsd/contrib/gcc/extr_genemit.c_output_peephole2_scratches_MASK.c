
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_2)
{
  int VAR_3;
  int VAR_4 = 0;

  FUNC_7 ("  HARD_REG_SET _regs_allocated;\n");
  FUNC_7 ("  CLEAR_HARD_REG_SET (_regs_allocated);\n");

  for (VAR_3 = 0; VAR_3 < FUNC_6 (VAR_2, 0); VAR_3++)
    {
      rtx VAR_5 = FUNC_5 (VAR_2, 0, VAR_3);
      if (FUNC_0 (VAR_5) == VAR_1)
 {
   int VAR_6 = VAR_4;
   int VAR_7 = VAR_4;
   int VAR_8;
   for (VAR_8 = VAR_3 + 1; VAR_8 < FUNC_6 (VAR_2, 0); VAR_8++)
     if (FUNC_0 (FUNC_5 (VAR_2, 0, VAR_8)) == VAR_0)
       {
  if (FUNC_3 (FUNC_5 (VAR_2, 0, VAR_8), 0) == FUNC_3 (VAR_5, 0))
    VAR_6 = VAR_7;
       }
     else if (FUNC_0 (FUNC_5 (VAR_2, 0, VAR_8)) != VAR_1)
       VAR_7++;

   FUNC_7 ("  if ((operands[%d] = peep2_find_free_register (%d, %d, \"%s\", %smode, &_regs_allocated)) == NULL_RTX)\n    return NULL;\n",

    FUNC_3 (VAR_5, 0),
    VAR_4, VAR_6,
    FUNC_4 (VAR_5, 1),
    FUNC_2 (FUNC_1 (VAR_5)));

 }
      else if (FUNC_0 (VAR_5) != VAR_0)
 VAR_4++;
    }
}
