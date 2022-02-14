
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct serial {TYPE_1__* ops; } ;
typedef int serial_ttystate ;
struct TYPE_2__ {int (* print_tty_state ) (struct serial*,int ,struct ui_file*) ;} ;


 int FUNC_0 (struct serial*,int ,struct ui_file*) ;

void
FUNC_1 (struct serial *VAR_0,
   serial_ttystate VAR_1,
   struct ui_file *VAR_2)
{
  VAR_0->ops->print_tty_state (VAR_0, VAR_1, VAR_2);
}
