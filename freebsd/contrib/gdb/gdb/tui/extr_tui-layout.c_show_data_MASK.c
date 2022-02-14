
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct tui_gen_win_info {int width; int type; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;
struct TYPE_16__ {void* can_highlight; } ;
struct TYPE_13__ {void* has_locator; struct tui_gen_win_info* execution_info; } ;
struct TYPE_14__ {TYPE_2__ source_info; } ;
struct TYPE_15__ {TYPE_3__ detail; struct tui_gen_win_info generic; } ;
struct TYPE_12__ {int height; } ;
struct TYPE_11__ {TYPE_1__ generic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_10__* VAR_7 ;
 TYPE_8__* VAR_8 ;
 int FUNC_0 (void**,int ,int,int,int ,int,int ) ;
 int FUNC_1 (struct tui_gen_win_info*,int ,int,int,int,int) ;
 int FUNC_2 (TYPE_8__**,int,int ) ;
 int FUNC_3 (TYPE_4__**,int,int) ;
 int FUNC_4 (TYPE_4__**,int,int) ;
 int FUNC_5 (TYPE_4__*) ;
 struct tui_gen_win_info* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct tui_gen_win_info*) ;
 int FUNC_9 (struct tui_gen_win_info*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_4__** VAR_9 ;

__attribute__((used)) static void
FUNC_14 (enum tui_layout_type VAR_10)
{
  int VAR_11 = (FUNC_12 () - VAR_7->generic.height);
  int VAR_12, VAR_13;
  enum tui_win_type VAR_14;
  struct tui_gen_win_info * VAR_15 = FUNC_6 ();


  VAR_13 = VAR_11 / 2;
  VAR_12 = VAR_11 - VAR_13;
  FUNC_7 ();
  FUNC_8 (VAR_15);
  FUNC_2 (&VAR_8, VAR_13, 0);
  VAR_8->can_highlight = VAR_6;
  if (VAR_10 == VAR_4)
    VAR_14 = VAR_5;
  else
    VAR_14 = VAR_0;
  if (VAR_9[VAR_14] == ((void*)0))
    {
      if (VAR_14 == VAR_5)
 FUNC_4 (&VAR_9[VAR_14], VAR_12, VAR_13 - 1);
      else
 FUNC_3 (&VAR_9[VAR_14], VAR_12, VAR_13 - 1);
      FUNC_0 ((void **) & VAR_15,
         VAR_3,
         2 ,
         FUNC_13 (),
         0,
         VAR_11 - 1,
         VAR_1);
    }
  else
    {
      FUNC_1 (&VAR_9[VAR_14]->generic,
         VAR_9[VAR_14]->generic.type,
         VAR_12,
         VAR_9[VAR_14]->generic.width,
     VAR_9[VAR_14]->detail.source_info.execution_info->width,
         VAR_13 - 1);
      FUNC_1 (VAR_9[VAR_14]->detail.source_info.execution_info,
         VAR_2,
         VAR_12,
         3,
         0,
         VAR_13 - 1);
      FUNC_9 (&VAR_9[VAR_14]->generic);
      FUNC_9 (VAR_9[VAR_14]->detail.source_info.execution_info);
      FUNC_1 (VAR_15,
         VAR_3,
         2 ,
         FUNC_13 (),
         0,
         VAR_11 - 1);
    }
  VAR_9[VAR_14]->detail.source_info.has_locator = VAR_6;
  FUNC_9 (VAR_15);
  FUNC_11 ();
  FUNC_5 (VAR_9[VAR_14]);
  FUNC_10 (VAR_10);
}
