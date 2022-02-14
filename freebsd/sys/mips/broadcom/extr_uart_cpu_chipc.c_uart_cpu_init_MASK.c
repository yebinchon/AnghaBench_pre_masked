
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {int rclk; scalar_t__ regshft; scalar_t__ bsh; int bst; scalar_t__ chan; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; int parity; TYPE_1__ bas; int ops; } ;
typedef scalar_t__ bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_devinfo *VAR_6, u_int VAR_7, int VAR_8)
{
 if (VAR_7 >= VAR_0)
  return (VAR_1);

 VAR_6->ops = FUNC_4(VAR_4);
 VAR_6->bas.chan = 0;
 VAR_6->bas.bst = VAR_5;
 VAR_6->bas.bsh = (bus_space_handle_t) FUNC_0(FUNC_2(),
     VAR_3, FUNC_1(VAR_7));
 VAR_6->bas.regshft = 0;
 VAR_6->bas.rclk = FUNC_3(FUNC_2());
 VAR_6->baudrate = VAR_8;
 VAR_6->databits = 8;
 VAR_6->stopbits = 1;
 VAR_6->parity = VAR_2;

 return (0);
}
