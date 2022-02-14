
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int y; } ;
struct tui_gen_win_info {int height; int width; TYPE_3__ origin; int type; } ;
struct TYPE_15__ {struct tui_gen_win_info generic; void* can_highlight; } ;
struct TYPE_11__ {void* has_locator; struct tui_gen_win_info* execution_info; } ;
struct TYPE_12__ {TYPE_1__ source_info; } ;
struct TYPE_14__ {TYPE_2__ detail; struct tui_gen_win_info generic; void* can_highlight; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_0 (void**,int ,int,int,int ,int,int ) ;
 int FUNC_1 (struct tui_gen_win_info*,int ,int,int,int,int) ;
 int FUNC_2 (TYPE_7__**,int,int) ;
 int FUNC_3 (TYPE_4__**,int,int) ;
 int FUNC_4 (TYPE_4__**,int,int ) ;
 scalar_t__ FUNC_5 () ;
 struct tui_gen_win_info* FUNC_6 () ;
 int FUNC_7 (struct tui_gen_win_info*) ;
 int FUNC_8 (struct tui_gen_win_info*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14 (void)
{
  if (FUNC_5 () != VAR_4)
    {
      int VAR_9, VAR_10, VAR_11;

      if (VAR_6 != ((void*)0))
 VAR_9 = VAR_6->generic.height;
      else
 VAR_9 = FUNC_12 () / 3;

      VAR_10 = (FUNC_12 () - VAR_9) / 2;
      VAR_11 = FUNC_12 () - (VAR_10 + VAR_9);

      if (VAR_8 == ((void*)0))
 FUNC_4 (&VAR_8, VAR_10, 0);
      else
 {
   FUNC_1 (&VAR_8->generic,
      VAR_8->generic.type,
      VAR_10,
      VAR_8->generic.width,
      VAR_8->detail.source_info.execution_info->width,
      0);
   VAR_8->can_highlight = VAR_5;
   FUNC_1 (VAR_8->detail.source_info.execution_info,
      VAR_1,
      VAR_10,
      3,
      0,
      0);
   FUNC_7 (&VAR_8->generic);
   FUNC_7 (VAR_8->detail.source_info.execution_info);
   VAR_8->detail.source_info.has_locator = VAR_2;;
 }
      if (VAR_8 != ((void*)0))
 {
   struct tui_gen_win_info * VAR_12 = FUNC_6 ();

   FUNC_11 (VAR_8);
   if (VAR_7 == ((void*)0))
     {
       FUNC_3 (&VAR_7, VAR_11, VAR_10 - 1);
       FUNC_0 ((void **) & VAR_12,
          VAR_3,
          2 ,
          FUNC_13 (),
          0,
          (VAR_10 + VAR_11) - 1,
          VAR_0);
     }
   else
     {
       FUNC_1 (VAR_12,
          VAR_3,
          2 ,
          FUNC_13 (),
          0,
          (VAR_10 + VAR_11) - 1);
       VAR_7->detail.source_info.has_locator = VAR_5;
       FUNC_1 (
    &VAR_7->generic,
    VAR_7->generic.type,
    VAR_11,
    VAR_7->generic.width,
   VAR_7->detail.source_info.execution_info->width,
    VAR_10 - 1);
       FUNC_1 (VAR_7->detail.source_info.execution_info,
          VAR_1,
          VAR_11,
          3,
          0,
          VAR_10 - 1);
       VAR_7->can_highlight = VAR_5;
       FUNC_7 (&VAR_7->generic);
       FUNC_7 (VAR_7->detail.source_info.execution_info);
     }
   if (VAR_7 != ((void*)0))
     {
       VAR_8->detail.source_info.has_locator = VAR_2;
       VAR_7->detail.source_info.has_locator = VAR_5;
       FUNC_7 (VAR_12);
       FUNC_10 ();
       FUNC_11 (VAR_7);

       if (VAR_6 == ((void*)0))
  FUNC_2 (&VAR_6,
        VAR_9,
        FUNC_12 () - VAR_9);
       else
  {
    FUNC_1 (&VAR_6->generic,
       VAR_6->generic.type,
       VAR_6->generic.height,
       VAR_6->generic.width,
       0,
       VAR_6->generic.origin.y);
    VAR_6->can_highlight = VAR_2;
    FUNC_7 (&VAR_6->generic);
  }
       if (VAR_6 != ((void*)0))
  FUNC_8 (&VAR_6->generic);
     }
 }
      FUNC_9 (VAR_4);
    }
}
