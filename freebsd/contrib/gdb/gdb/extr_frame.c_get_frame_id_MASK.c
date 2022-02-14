
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct frame_id {int dummy; } ;
struct TYPE_3__ {int p; struct frame_id value; } ;
struct frame_info {TYPE_1__ this_id; int prologue_cache; int next; TYPE_2__* unwind; int type; int level; } ;
struct TYPE_4__ {int (* this_id ) (int ,int *,struct frame_id*) ;int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct frame_id) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 struct frame_id VAR_3 ;
 int FUNC_5 (int ,int *,struct frame_id*) ;

struct frame_id
FUNC_6 (struct frame_info *VAR_4)
{
  if (VAR_4 == ((void*)0))
    {
      return VAR_3;
    }
  if (!VAR_4->this_id.p)
    {
      FUNC_3 (!FUNC_4 (VAR_0));
      if (VAR_1)
 FUNC_1 (VAR_2, "{ get_frame_id (fi=%d) ",
       VAR_4->level);

      if (VAR_4->unwind == ((void*)0))
 {
   VAR_4->unwind = FUNC_2 (VAR_4->next);





   VAR_4->type = VAR_4->unwind->type;
 }

      VAR_4->unwind->this_id (VAR_4->next, &VAR_4->prologue_cache, &VAR_4->this_id.value);
      VAR_4->this_id.p = 1;
      if (VAR_1)
 {
   FUNC_1 (VAR_2, "-> ");
   FUNC_0 (VAR_2, VAR_4->this_id.value);
   FUNC_1 (VAR_2, " }\n");
 }
    }
  return VAR_4->this_id.value;
}
