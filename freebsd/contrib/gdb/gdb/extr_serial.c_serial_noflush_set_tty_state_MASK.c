
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {TYPE_1__* ops; } ;
typedef int serial_ttystate ;
struct TYPE_2__ {int (* noflush_set_tty_state ) (struct serial*,int ,int ) ;} ;


 int FUNC_0 (struct serial*,int ,int ) ;

int
FUNC_1 (struct serial *VAR_0,
         serial_ttystate VAR_1,
         serial_ttystate VAR_2)
{
  return VAR_0->ops->noflush_set_tty_state (VAR_0, VAR_1, VAR_2);
}
