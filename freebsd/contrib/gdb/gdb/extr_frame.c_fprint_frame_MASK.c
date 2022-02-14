
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct TYPE_6__ {int value; scalar_t__ p; } ;
struct frame_info {TYPE_4__* next; TYPE_2__ this_id; int * unwind; int type; int level; } ;
struct TYPE_7__ {int addr; scalar_t__ p; } ;
struct TYPE_5__ {int value; scalar_t__ p; } ;
struct TYPE_8__ {TYPE_3__ prev_func; TYPE_1__ prev_pc; } ;


 int FUNC_0 (struct ui_file*,int ) ;
 int FUNC_1 (struct ui_file*,int ) ;
 int FUNC_2 (struct ui_file*,char*,...) ;
 int FUNC_3 (int *,struct ui_file*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (struct ui_file *VAR_0, struct frame_info *VAR_1)
{
  if (VAR_1 == ((void*)0))
    {
      FUNC_2 (VAR_0, "<NULL frame>");
      return;
    }
  FUNC_2 (VAR_0, "{");
  FUNC_2 (VAR_0, "level=%d", VAR_1->level);
  FUNC_2 (VAR_0, ",");
  FUNC_2 (VAR_0, "type=");
  FUNC_1 (VAR_0, VAR_1->type);
  FUNC_2 (VAR_0, ",");
  FUNC_2 (VAR_0, "unwind=");
  if (VAR_1->unwind != ((void*)0))
    FUNC_3 (VAR_1->unwind, VAR_0);
  else
    FUNC_2 (VAR_0, "<unknown>");
  FUNC_2 (VAR_0, ",");
  FUNC_2 (VAR_0, "pc=");
  if (VAR_1->next != ((void*)0) && VAR_1->next->prev_pc.p)
    FUNC_2 (VAR_0, "0x%s", FUNC_4 (VAR_1->next->prev_pc.value));
  else
    FUNC_2 (VAR_0, "<unknown>");
  FUNC_2 (VAR_0, ",");
  FUNC_2 (VAR_0, "id=");
  if (VAR_1->this_id.p)
    FUNC_0 (VAR_0, VAR_1->this_id.value);
  else
    FUNC_2 (VAR_0, "<unknown>");
  FUNC_2 (VAR_0, ",");
  FUNC_2 (VAR_0, "func=");
  if (VAR_1->next != ((void*)0) && VAR_1->next->prev_func.p)
    FUNC_2 (VAR_0, "0x%s", FUNC_4 (VAR_1->next->prev_func.addr));
  else
    FUNC_2 (VAR_0, "<unknown>");
  FUNC_2 (VAR_0, "}");
}
