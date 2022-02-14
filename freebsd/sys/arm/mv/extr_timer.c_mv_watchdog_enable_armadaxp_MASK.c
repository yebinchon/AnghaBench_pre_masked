
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int irq_timer_wd_clr; int bridge_irq_cause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_8 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(void)
{
 uint32_t VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_8->config->bridge_irq_cause);
 VAR_9 &= VAR_8->config->irq_timer_wd_clr;
 FUNC_5(VAR_8->config->bridge_irq_cause, VAR_9);

 VAR_10 = FUNC_4(VAR_7);
 VAR_10 |= (VAR_6 | VAR_5);
 FUNC_7(VAR_7, VAR_10);

 VAR_10 = FUNC_3(VAR_3);
 VAR_10 &= ~VAR_4;
 FUNC_6(VAR_3, VAR_10);

 VAR_10 = FUNC_0();
 VAR_10 |= VAR_1 | VAR_0 | VAR_2;
 FUNC_1(VAR_10);
}
