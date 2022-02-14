
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {int dummy; } ;
struct TYPE_2__ {int sg_flags; } ;
struct hardwire_ttystate {TYPE_1__ sgttyb; } ;
typedef scalar_t__ serial_ttystate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct serial*,struct hardwire_ttystate*) ;

__attribute__((used)) static int
FUNC_1 (struct serial *VAR_2,
    serial_ttystate VAR_3,
    serial_ttystate VAR_4)
{
  struct hardwire_ttystate VAR_5;




  VAR_5 = *(struct hardwire_ttystate *) VAR_3;
  return FUNC_0 (VAR_2, &VAR_5);
}
