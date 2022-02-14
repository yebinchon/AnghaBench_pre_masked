
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ challenge_response_authentication; scalar_t__ kbd_interactive_authentication; scalar_t__ password_authentication; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void
FUNC_0(int VAR_2)
{
 if (VAR_2 == 0 || VAR_1)
  return;
 VAR_1 = 1;
 VAR_0.password_authentication = 0;
 VAR_0.kbd_interactive_authentication = 0;
 VAR_0.challenge_response_authentication = 0;
}
