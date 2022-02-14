
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int state_num; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_6, rtx VAR_7, bool VAR_8, bool VAR_9)
{



  if (!VAR_4)
    {
      if (VAR_8)
 FUNC_1 (VAR_6, "\t.label_state %d\n",
   ++VAR_3->machine->state_num);
      VAR_5 = 1;
    }

  if (VAR_8)
    FUNC_1 (VAR_6, "\t.restore sp\n");
  if (VAR_0 && VAR_9)
    FUNC_0 (FUNC_2 (VAR_7),
         VAR_2, VAR_1);
}
