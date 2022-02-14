
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int expr; int bitmap_index; } ;
typedef int rtx ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 struct expr* FUNC_8 (int,int *) ;
 struct expr* FUNC_9 (int,struct expr*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct expr *
FUNC_11 (int VAR_3, rtx VAR_4)
{


  struct expr *VAR_5 = 0;
  while (1)
    {
      rtx VAR_6;
      struct expr *VAR_7 = FUNC_8 (VAR_3, &VAR_2);



      while (VAR_7)
 {
   if (FUNC_5 (VAR_1[FUNC_0 (VAR_4)], VAR_7->bitmap_index))
     break;
   VAR_7 = FUNC_9 (VAR_3, VAR_7);
 }



      if (VAR_7 == 0)
 break;

      FUNC_6 (FUNC_1 (VAR_7->expr) == VAR_0);

      VAR_6 = FUNC_4 (VAR_7->expr);
      if (FUNC_7 (VAR_6) || FUNC_10 (VAR_6, VAR_4))
 VAR_5 = VAR_7;



      if (! FUNC_3 (VAR_6))
 break;



      VAR_3 = FUNC_2 (VAR_6);
    }



  return VAR_5;
}
