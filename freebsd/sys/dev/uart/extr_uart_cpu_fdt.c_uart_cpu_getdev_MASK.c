
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_2__ {int bst; int bsh; void* rclk; void* regiowidth; void* regshft; scalar_t__ chan; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; TYPE_1__ bas; int parity; int ops; } ;
struct uart_class {int dummy; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_class**,int *,int *,int*,void**,void**,void**) ;
 int FUNC_1 (int,struct uart_devinfo*,struct uart_class*) ;
 int FUNC_2 (struct uart_class*) ;
 struct uart_class VAR_5 ;

int
FUNC_3(int VAR_6, struct uart_devinfo *VAR_7)
{
 struct uart_class *VAR_8;
 bus_space_tag_t VAR_9;
 bus_space_handle_t VAR_10;
 u_int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;


 VAR_8 = &VAR_5;
 VAR_15 = FUNC_1(VAR_6, VAR_7, VAR_8);
 if (!VAR_15)
  return (0);

 if (VAR_6 != VAR_1)
  return (VAR_0);

 VAR_15 = FUNC_0(&VAR_8, &VAR_9, &VAR_10, &VAR_14, &VAR_13, &VAR_11, &VAR_12);
 if (VAR_15 != 0)
  return (VAR_15);




 VAR_7->bas.chan = 0;
 VAR_7->bas.regshft = VAR_11;
 VAR_7->bas.regiowidth = VAR_12;
 VAR_7->baudrate = VAR_14;
 VAR_7->bas.rclk = VAR_13;
 VAR_7->ops = FUNC_2(VAR_8);
 VAR_7->databits = 8;
 VAR_7->stopbits = 1;
 VAR_7->parity = VAR_2;
 VAR_7->bas.bst = VAR_9;
 VAR_7->bas.bsh = VAR_10;

 VAR_4 = VAR_7->bas.bst;
 VAR_3 = ((void*)0);

 return (VAR_15);
}
