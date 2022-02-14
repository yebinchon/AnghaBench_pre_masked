
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* enable_interrupt ) (struct octeon_device*,int ) ;int (* process_interrupt_regs ) (struct octeon_device*) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;} ;
struct octeon_device {TYPE_1__ fn_list; int status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct octeon_device *VAR_3 = (struct octeon_device *)VAR_2;


 VAR_3->fn_list.disable_interrupt(VAR_3, VAR_1);

 VAR_3->fn_list.process_interrupt_regs(VAR_3);

 FUNC_1(VAR_3);


 if (!(FUNC_0(&VAR_3->status) == VAR_0))
  VAR_3->fn_list.enable_interrupt(VAR_3, VAR_1);
}
