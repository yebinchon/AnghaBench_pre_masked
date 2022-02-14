
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_2__ {int target_info; int break_info; int step_info; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (struct target_ops *VAR_3)
{
  FUNC_1 ("Target capabilities:\n");
  FUNC_0 (VAR_2, VAR_1.step_info);
  FUNC_0 (VAR_0, VAR_1.break_info);
  FUNC_2 ("target level RDI %x\n", (VAR_1.target_info >> 5) & 3);
}
