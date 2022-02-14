
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct frame_info {int dummy; } ;
struct block {int dummy; } ;


 scalar_t__ FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct block*) ;
 int FUNC_2 (struct ui_file*,char*) ;
 struct block* FUNC_3 (struct frame_info*,int ) ;
 scalar_t__ FUNC_4 (struct block*,struct frame_info*,int,struct ui_file*) ;

__attribute__((used)) static void
FUNC_5 (struct frame_info *VAR_0, int VAR_1,
   struct ui_file *VAR_2)
{
  struct block *VAR_3 = FUNC_3 (VAR_0, 0);
  int VAR_4 = 0;

  if (VAR_3 == 0)
    {
      FUNC_2 (VAR_2, "No symbol table info available.\n");
      return;
    }

  while (VAR_3 != 0)
    {
      if (FUNC_4 (VAR_3, VAR_0, VAR_1, VAR_2))
 VAR_4 = 1;



      if (FUNC_0 (VAR_3))
 break;
      VAR_3 = FUNC_1 (VAR_3);
    }

  if (!VAR_4)
    {
      FUNC_2 (VAR_2, "No locals.\n");
    }
}
