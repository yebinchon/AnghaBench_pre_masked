
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; int function; } ;
struct inet6_ifaddr {TYPE_1__ timer; } ;
typedef enum addrconf_timer_t { ____Placeholder_addrconf_timer_t } addrconf_timer_t ;




 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3(struct inet6_ifaddr *VAR_3,
          enum addrconf_timer_t VAR_4,
          unsigned long VAR_5)
{
 if (!FUNC_1(&VAR_3->timer))
  FUNC_2(VAR_3);

 switch (VAR_4) {
 case 129:
  VAR_3->timer.function = VAR_0;
  break;
 case 128:
  VAR_3->timer.function = VAR_1;
  break;
 default:;
 }
 VAR_3->timer.expires = VAR_2 + VAR_5;
 FUNC_0(&VAR_3->timer);
}
