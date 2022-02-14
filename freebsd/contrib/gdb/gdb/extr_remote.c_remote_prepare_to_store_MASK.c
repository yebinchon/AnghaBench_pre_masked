
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct remote_state {TYPE_1__* regs; } ;
struct TYPE_4__ {int support; } ;
struct TYPE_3__ {int regnum; int in_g_packet; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 struct remote_state* FUNC_0 () ;
 int FUNC_1 (int ,int ,char*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct remote_state *VAR_4 = FUNC_0 ();
  int VAR_5;
  char VAR_6[VAR_0];


  switch (VAR_3.support)
    {
    case 130:
    case 128:

      for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 if (VAR_4->regs[VAR_5].in_g_packet)
   FUNC_1 (VAR_2, VAR_4->regs[VAR_5].regnum, VAR_6);
      break;
    case 129:
      break;
    }
}
