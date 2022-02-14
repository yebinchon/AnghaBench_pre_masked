
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ru_bb_info {int gen; } ;
struct df_ref {struct df_ref* next_ref; } ;
typedef enum df_ref_flags { ____Placeholder_df_ref_flags } df_ref_flags ;


 int VAR_0 ;
 int FUNC_0 (struct df_ref*) ;
 int FUNC_1 (struct df_ref*) ;
 unsigned int FUNC_2 (struct df_ref*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5 (struct df_ru_bb_info *VAR_2,
        struct df_ref *VAR_3,
        enum df_ref_flags VAR_4)
{
  while (VAR_3)
    {
      if (VAR_4 == (FUNC_0 (VAR_3) & VAR_0))
 {


   unsigned int VAR_5 = FUNC_2 (VAR_3);
   if (!FUNC_3 (VAR_1, VAR_5))
     FUNC_4 (VAR_2->gen, FUNC_1 (VAR_3));
 }
      VAR_3 = VAR_3->next_ref;
    }
}
