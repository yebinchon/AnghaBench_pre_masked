
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serial {int dummy; } ;
struct TYPE_4__ {int sg_ispeed; int sg_ospeed; } ;
struct TYPE_3__ {int c_cflag; } ;
struct hardwire_ttystate {TYPE_2__ sgttyb; TYPE_1__ termio; int termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct serial*,struct hardwire_ttystate*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct serial*,struct hardwire_ttystate*) ;

__attribute__((used)) static int
FUNC_5 (struct serial *VAR_4, int VAR_5)
{
  struct hardwire_ttystate VAR_6;
  int VAR_7 = FUNC_3 (VAR_5);

  if (VAR_7 < 0)
    {


      VAR_3 = VAR_2;
      return -1;
    }

  if (FUNC_2 (VAR_4, &VAR_6))
    return -1;
  return FUNC_4 (VAR_4, &VAR_6);
}
