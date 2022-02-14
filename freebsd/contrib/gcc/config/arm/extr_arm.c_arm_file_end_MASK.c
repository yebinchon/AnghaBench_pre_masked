
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_3__ {int (* internal_label ) (int ,char*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_6;

  if (! VAR_4)
    return;

  FUNC_4 (VAR_3);
  FUNC_2 (VAR_1, "\t.code 16\n");
  FUNC_0 (VAR_1, 1);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
      rtx VAR_7 = VAR_5[VAR_6];

      if (VAR_7 != 0)
 {
   VAR_2.asm_out.internal_label (VAR_1, "L",
       FUNC_1 (VAR_7));
   FUNC_2 (VAR_1, "\tbx\t%r\n", VAR_6);
 }
    }
}
