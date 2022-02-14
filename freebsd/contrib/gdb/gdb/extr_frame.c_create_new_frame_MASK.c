
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; } ;
struct frame_info {scalar_t__ type; TYPE_1__ this_id; TYPE_2__* unwind; int next; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,struct frame_info*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct frame_info*,int ) ;
 int FUNC_4 (struct frame_info*,int ) ;
 int FUNC_5 (int ,struct frame_info*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 struct frame_info* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;

struct frame_info *
FUNC_11 (CORE_ADDR VAR_4, CORE_ADDR VAR_5)
{
  struct frame_info *VAR_6;

  if (VAR_2)
    {
      FUNC_6 (VAR_3,
     "{ create_new_frame (addr=0x%s, pc=0x%s) ",
     FUNC_10 (VAR_4), FUNC_10 (VAR_5));
    }

  VAR_6 = FUNC_7 (sizeof (struct frame_info));

  VAR_6->next = FUNC_2 (VAR_1);



  VAR_6->unwind = FUNC_9 (VAR_6->next);
  if (VAR_6->unwind->type != VAR_0)
    VAR_6->type = VAR_6->unwind->type;
  else
    VAR_6->type = FUNC_8 (VAR_5);

  VAR_6->this_id.p = 1;
  FUNC_3 (VAR_6, VAR_4);
  FUNC_4 (VAR_6, VAR_5);

  if (FUNC_1 ())
    FUNC_0 (0, VAR_6);

  if (VAR_2)
    {
      FUNC_6 (VAR_3, "-> ");
      FUNC_5 (VAR_3, VAR_6);
      FUNC_6 (VAR_3, " }\n");
    }

  return VAR_6;
}
