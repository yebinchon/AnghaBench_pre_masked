
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int regs_content_count; } ;
struct TYPE_5__ {TYPE_1__ data_display_info; } ;
struct TYPE_6__ {TYPE_2__ detail; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

void
FUNC_4 (int VAR_1, int VAR_2)
{
  int VAR_3 = (-1);

  if (VAR_1 < VAR_0->detail.data_display_info.regs_content_count)
    VAR_3 = FUNC_3 (VAR_1);
  else
    {
    }

  if (VAR_3 >= 0)
    {
      FUNC_2 ((char *) ((void*)0));
      if (!VAR_2)
 FUNC_0 ();
      FUNC_1 (VAR_3);
    }
}
