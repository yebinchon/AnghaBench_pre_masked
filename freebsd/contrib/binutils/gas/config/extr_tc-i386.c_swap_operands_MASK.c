
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const seg_entry ;
struct TYPE_2__ {int operands; int mem_operands; int const** seg; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  switch (VAR_0.operands)
    {
    case 4:
      FUNC_1 (1, VAR_0.operands - 2);
    case 3:
    case 2:
      FUNC_1 (0, VAR_0.operands - 1);
      break;
    default:
      FUNC_0 ();
    }

  if (VAR_0.mem_operands == 2)
    {
      const seg_entry *VAR_1;
      VAR_1 = VAR_0.seg[0];
      VAR_0.seg[0] = VAR_0.seg[1];
      VAR_0.seg[1] = VAR_1;
    }
}
