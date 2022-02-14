
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ timeout; int sc; } ;
typedef TYPE_1__ ips_command_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

void FUNC_2(ips_command_t *VAR_1)
{
 uint32_t VAR_2;





 VAR_2 = VAR_0 + VAR_1->timeout;
 while ((VAR_1->timeout != 0)
  && (FUNC_1(VAR_1->sc) == 0)
  && (VAR_2 > VAR_0))
  FUNC_0(1000);
}
