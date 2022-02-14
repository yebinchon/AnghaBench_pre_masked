
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtx_constant_pool {struct constant_descriptor_rtx* first; } ;
struct constant_descriptor_rtx {int align; int constant; int mode; int sym; scalar_t__ mark; struct constant_descriptor_rtx* next; } ;
struct TYPE_3__ {int (* select_rtx_section ) (int ,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct constant_descriptor_rtx*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_6 (struct rtx_constant_pool *VAR_1)
{
  struct constant_descriptor_rtx *VAR_2;

  for (VAR_2 = VAR_1->first; VAR_2 ; VAR_2 = VAR_2->next)
    if (VAR_2->mark)
      {




 if (FUNC_1 (VAR_2->sym)
     && FUNC_0 (VAR_2->sym))
   FUNC_3 (VAR_2->sym);
 else
   {
     FUNC_5 (VAR_0.asm_out.select_rtx_section
          (VAR_2->mode, VAR_2->constant, VAR_2->align));
     FUNC_2 (VAR_2, VAR_2->align);
   }
      }
}
