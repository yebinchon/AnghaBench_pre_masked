
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips16_constant {struct mips16_constant* next; int value; int mode; int label; } ;
typedef int rtx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mips16_constant*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (struct mips16_constant *VAR_0, rtx VAR_1)
{
  struct mips16_constant *VAR_2, *VAR_3;
  int VAR_4;

  VAR_4 = 0;
  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_3)
    {

      if (VAR_4 < FUNC_1 (VAR_2->mode))
 {
   int VAR_5 = FUNC_6 (FUNC_1 (VAR_2->mode));
   VAR_1 = FUNC_4 (FUNC_8 (FUNC_0 (VAR_5)), VAR_1);
 }
      VAR_4 = FUNC_1 (VAR_2->mode);

      VAR_1 = FUNC_5 (VAR_2->label, VAR_1);
      VAR_1 = FUNC_2 (VAR_2->mode, VAR_2->value, VAR_1);

      VAR_3 = VAR_2->next;
      FUNC_7 (VAR_2);
    }

  FUNC_3 (VAR_1);
}
