
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int dummy; } ;
struct dos_ttystate {int baudrate; } ;
typedef scalar_t__ serial_ttystate ;


 int FUNC_0 (struct serial*,int ) ;

__attribute__((used)) static int
FUNC_1 (struct serial *VAR_0, serial_ttystate VAR_1,
      serial_ttystate VAR_2)
{
  struct dos_ttystate *VAR_3;

  VAR_3 = (struct dos_ttystate *) VAR_1;
  FUNC_0 (VAR_0, VAR_3->baudrate);
  return 0;
}
