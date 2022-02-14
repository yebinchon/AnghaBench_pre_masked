
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int et_arg; int (* et_event_cb ) (TYPE_2__*,int ) ;scalar_t__ et_active; } ;
struct TYPE_3__ {TYPE_2__ et; } ;
struct am335x_dmtimer_softc {TYPE_1__ func; } ;


 int FUNC_0 (struct am335x_dmtimer_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct am335x_dmtimer_softc *VAR_4;

 VAR_4 = VAR_3;


 FUNC_0(VAR_4, VAR_0, VAR_1);
 if (VAR_4->func.et.et_active)
  VAR_4->func.et.et_event_cb(&VAR_4->func.et, VAR_4->func.et.et_arg);

 return (VAR_2);
}
