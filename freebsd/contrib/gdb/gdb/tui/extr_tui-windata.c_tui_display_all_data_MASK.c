
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tui_win_content ;
struct TYPE_7__ {scalar_t__ data_content; scalar_t__ data_content_count; } ;
struct TYPE_8__ {TYPE_2__ data_display_info; } ;
struct TYPE_6__ {scalar_t__ content_size; } ;
struct TYPE_9__ {TYPE_3__ detail; TYPE_1__ generic; } ;


 char* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (void)
{
  if (VAR_1->generic.content_size <= 0)
    FUNC_3 (VAR_0);
  else
    {
      FUNC_3 ((char *) ((void*)0));
      FUNC_1 ();
      FUNC_0 (VAR_1);
      FUNC_2 (0);



      if (VAR_1->detail.data_display_info.data_content !=
   (tui_win_content) ((void*)0) &&
   VAR_1->detail.data_display_info.data_content_count > 0)
 {
 }
    }
}
