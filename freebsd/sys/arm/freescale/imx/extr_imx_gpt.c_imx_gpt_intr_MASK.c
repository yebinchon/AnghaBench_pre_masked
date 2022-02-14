
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct imx_gpt_softc {scalar_t__ sc_period; TYPE_1__ et; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct imx_gpt_softc*,int ) ;
 int FUNC_1 (struct imx_gpt_softc*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_6)
{
 struct imx_gpt_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = (struct imx_gpt_softc *)VAR_6;

 VAR_8 = FUNC_0(VAR_7, VAR_5);







 FUNC_1(VAR_7, VAR_5, VAR_8);


 if (VAR_8 & VAR_2) {
  if (VAR_7->et.et_active) {
   VAR_7->et.et_event_cb(&VAR_7->et, VAR_7->et.et_arg);
  }
 }


 if (VAR_8 & VAR_1) {
  if (VAR_7->et.et_active)
   VAR_7->et.et_event_cb(&VAR_7->et, VAR_7->et.et_arg);
  if (VAR_7->sc_period != 0)
   FUNC_1(VAR_7, VAR_4, FUNC_0(VAR_7, VAR_3) +
       VAR_7->sc_period);
 }

 return (VAR_0);
}
