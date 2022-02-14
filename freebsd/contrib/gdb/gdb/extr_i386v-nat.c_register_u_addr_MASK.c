
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_space; } ;
struct TYPE_4__ {int u_fpstate; } ;
struct user {TYPE_1__ i387; TYPE_2__ u_fps; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_3 ;

CORE_ADDR
FUNC_1 (CORE_ADDR VAR_4, int VAR_5)
{
  struct user VAR_6;
  CORE_ADDR VAR_7;

  if (FUNC_0 (VAR_5))
    {





      VAR_7 = VAR_4 + ((char *) &VAR_6.i387.st_space - (char *) &VAR_6);
      return (VAR_7 + 10 * (VAR_5 - VAR_0));

    }

  return (VAR_4 + 4 * VAR_3[VAR_5]);
}
