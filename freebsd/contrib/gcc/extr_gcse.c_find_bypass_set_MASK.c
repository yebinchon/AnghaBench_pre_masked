
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int expr; int bitmap_index; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 struct expr* FUNC_7 (int,int *) ;
 struct expr* FUNC_8 (int,struct expr*) ;
 int VAR_2 ;

__attribute__((used)) static struct expr *
FUNC_9 (int VAR_3, int VAR_4)
{
  struct expr *VAR_5 = 0;

  for (;;)
    {
      rtx VAR_6;
      struct expr *VAR_7 = FUNC_7 (VAR_3, &VAR_2);

      while (VAR_7)
 {
   if (FUNC_4 (VAR_1[VAR_4], VAR_7->bitmap_index))
     break;
   VAR_7 = FUNC_8 (VAR_3, VAR_7);
 }

      if (VAR_7 == 0)
 break;

      FUNC_5 (FUNC_0 (VAR_7->expr) == VAR_0);

      VAR_6 = FUNC_3 (VAR_7->expr);
      if (FUNC_6 (VAR_6))
 VAR_5 = VAR_7;

      if (! FUNC_2 (VAR_6))
 break;

      VAR_3 = FUNC_1 (VAR_6);
    }
  return VAR_5;
}
