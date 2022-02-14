
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct sp804_timer_softc {TYPE_1__ et; scalar_t__ et_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct sp804_timer_softc *VAR_4 = VAR_3;
 static uint32_t VAR_5 = 0;
 uint32_t VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_1);

 VAR_5 =VAR_6 ;
 FUNC_1(VAR_2, 1);
 if (VAR_4->et_enabled) {
  if (VAR_4->et.et_active) {
   VAR_4->et.et_event_cb(&VAR_4->et, VAR_4->et.et_arg);
  }
 }

 return (VAR_0);
}
