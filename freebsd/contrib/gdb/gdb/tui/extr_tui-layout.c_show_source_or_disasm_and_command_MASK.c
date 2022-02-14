
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* has_locator; struct tui_gen_win_info* execution_info; } ;
struct TYPE_7__ {TYPE_1__ source_info; } ;
struct TYPE_8__ {int x; int y; } ;
struct tui_gen_win_info {int height; int width; TYPE_3__ origin; int type; } ;
struct tui_win_info {TYPE_2__ detail; struct tui_gen_win_info generic; void* can_highlight; } ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;
struct TYPE_9__ {struct tui_gen_win_info generic; int can_highlight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 TYPE_4__* VAR_6 ;
 struct tui_win_info* VAR_7 ;
 struct tui_win_info* VAR_8 ;
 int FUNC_0 (void**,int ,int,int,int ,int,int ) ;
 int FUNC_1 (struct tui_gen_win_info*,int ,int,int,int,int) ;
 int FUNC_2 (TYPE_4__**,int,int) ;
 int FUNC_3 (struct tui_win_info**,int,int ) ;
 int FUNC_4 (struct tui_win_info**,int,int ) ;
 int FUNC_5 () ;
 struct tui_gen_win_info* FUNC_6 () ;
 int FUNC_7 (struct tui_gen_win_info*) ;
 int FUNC_8 (struct tui_gen_win_info*) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct tui_win_info*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14 (enum tui_layout_type VAR_9)
{
  if (FUNC_5 () != VAR_9)
    {
      struct tui_win_info * *VAR_10;
      int VAR_11, VAR_12;
      struct tui_gen_win_info * VAR_13 = FUNC_6 ();

      if (VAR_6 != ((void*)0))
 VAR_12 = VAR_6->generic.height;
      else
 VAR_12 = FUNC_12 () / 3;
      VAR_11 = FUNC_12 () - VAR_12;


      if (VAR_9 == VAR_4)
 VAR_10 = &VAR_8;
      else
 VAR_10 = &VAR_7;

      if ((*VAR_10) == ((void*)0))
 {
   if (VAR_9 == VAR_4)
     FUNC_4 (VAR_10, VAR_11 - 1, 0);
   else
     FUNC_3 (VAR_10, VAR_11 - 1, 0);
   FUNC_0 ((void **) & VAR_13,
      VAR_3,
      2 ,
      FUNC_13 (),
      0,
      VAR_11 - 1,
      VAR_0);
 }
      else
 {
   FUNC_1 (VAR_13,
      VAR_3,
      2 ,
      FUNC_13 (),
      0,
      VAR_11 - 1);
   (*VAR_10)->detail.source_info.has_locator = VAR_5;
   FUNC_1 (
       &(*VAR_10)->generic,
       (*VAR_10)->generic.type,
       VAR_11 - 1,
       (*VAR_10)->generic.width,
        (*VAR_10)->detail.source_info.execution_info->width,
       0);
   FUNC_1 ((*VAR_10)->detail.source_info.execution_info,
      VAR_1,
      VAR_11 - 1,
      3,
      0,
      0);
   (*VAR_10)->can_highlight = VAR_5;
   FUNC_7 (&(*VAR_10)->generic);
   FUNC_7 ((*VAR_10)->detail.source_info.execution_info);
 }
      if ((*VAR_10) != ((void*)0))
 {
   (*VAR_10)->detail.source_info.has_locator = VAR_5;
   FUNC_7 (VAR_13);
   FUNC_10 ();
   FUNC_11 (*VAR_10);

   if (VAR_6 == ((void*)0))
     {
       FUNC_2 (&VAR_6, VAR_12, VAR_11);
       FUNC_8 (&VAR_6->generic);
     }
   else
     {
       FUNC_1 (&VAR_6->generic,
          VAR_6->generic.type,
          VAR_6->generic.height,
          VAR_6->generic.width,
          VAR_6->generic.origin.x,
          VAR_6->generic.origin.y);
       VAR_6->can_highlight = VAR_2;
       FUNC_7 (&VAR_6->generic);
     }
 }
      FUNC_9 (VAR_9);
    }
}
