
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serial {int dummy; } ;
struct TYPE_4__ {int c_cflag; } ;
struct TYPE_3__ {int c_cflag; } ;
struct hardwire_ttystate {TYPE_2__ termio; TYPE_1__ termios; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (struct serial*,struct hardwire_ttystate*) ;
 int FUNC_1 (struct serial*,struct hardwire_ttystate*) ;

__attribute__((used)) static int
FUNC_2 (struct serial *VAR_1, int VAR_2)
{
  struct hardwire_ttystate VAR_3;
  int VAR_4;

  if (FUNC_0 (VAR_1, &VAR_3))
    return -1;

  switch (VAR_2)
    {
    case 129:
      VAR_4 = 0;
      break;
    case 130:
    case 128:
      VAR_4 = 1;
      break;
    default:
      return 1;
    }
  return FUNC_1 (VAR_1, &VAR_3);
}
