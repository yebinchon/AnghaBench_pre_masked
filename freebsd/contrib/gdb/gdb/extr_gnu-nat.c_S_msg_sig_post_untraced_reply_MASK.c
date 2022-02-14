
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sig; } ;
struct TYPE_5__ {TYPE_1__ value; int kind; } ;
struct TYPE_6__ {int suppress; TYPE_2__ status; } ;
struct inf {int stopped; TYPE_3__ wait; } ;
typedef int mach_port_t ;
typedef scalar_t__ error_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct inf* VAR_3 ;
 int FUNC_1 (char*,int ) ;

error_t
FUNC_2 (mach_port_t VAR_4, error_t VAR_5)
{
  struct inf *VAR_6 = VAR_3;

  if (VAR_5 == VAR_0)





    {
      VAR_6->wait.status.kind = VAR_2;
      VAR_6->wait.status.value.sig = VAR_1;
    }
  else if (VAR_5)
    FUNC_1 ("Signal delivery failed: %s", FUNC_0 (VAR_5));

  if (VAR_5)




    VAR_6->stopped = 1;
  else
    VAR_6->wait.suppress = 1;

  return 0;
}
