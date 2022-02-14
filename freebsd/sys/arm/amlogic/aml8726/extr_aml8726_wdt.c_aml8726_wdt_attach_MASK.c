
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aml8726_wdt_softc {int * res; int ih_cookie; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ctrl_cpu_mask; int ctrl_en; int term_cnt_mask; int reset_cnt_mask; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aml8726_wdt_softc*) ;
 int FUNC_1 (struct aml8726_wdt_softc*) ;
 int VAR_5 ;
 int FUNC_2 (struct aml8726_wdt_softc*,int ) ;
 int FUNC_3 (struct aml8726_wdt_softc*,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,struct aml8726_wdt_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct aml8726_wdt_softc* VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int,int ,int *,struct aml8726_wdt_softc*,int *) ;
 struct aml8726_wdt_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_17)
{
 struct aml8726_wdt_softc *VAR_18 = FUNC_8(VAR_17);


 if (VAR_12 != ((void*)0))
  return (VAR_6);

 VAR_18->dev = VAR_17;

 if (FUNC_5(VAR_17, VAR_14, VAR_18->res)) {
  FUNC_9(VAR_17, "can not allocate resources for device\n");
  return (VAR_6);
 }




 switch (VAR_9) {
 case 130:
  VAR_13.ctrl_cpu_mask = 0xf <<
      VAR_0;
  switch (VAR_10) {
  case 128:
   VAR_13.ctrl_en = 1 << 19;
   VAR_13.term_cnt_mask = 0x07ffff <<
       VAR_4;
   VAR_13.reset_cnt_mask = 0x07ffff <<
       VAR_5;
   break;
  default:
   VAR_13.ctrl_en = 1 << 22;
   VAR_13.term_cnt_mask = 0x3fffff <<
       VAR_4;
   VAR_13.reset_cnt_mask = 0x3fffff <<
       VAR_5;
   break;
  }
  break;
 case 129:
  VAR_13.ctrl_cpu_mask = 0xf <<
      VAR_0;
  VAR_13.ctrl_en = 1 << 19;
  VAR_13.term_cnt_mask = 0x07ffff <<
      VAR_4;
  VAR_13.reset_cnt_mask = 0x07ffff <<
      VAR_5;
  break;
 default:
  VAR_13.ctrl_cpu_mask = 3 <<
      VAR_0;
  VAR_13.ctrl_en = 1 << 22;
  VAR_13.term_cnt_mask = 0x3fffff <<
      VAR_4;
  VAR_13.reset_cnt_mask = 0x3fffff <<
      VAR_5;
  break;
 }




 FUNC_3(VAR_18, VAR_3,
     (FUNC_2(VAR_18, VAR_3) & ~(VAR_2 |
     VAR_1)));





 FUNC_1(VAR_18);

 if (FUNC_7(VAR_17, VAR_18->res[1], VAR_8 | VAR_7,
     VAR_11, ((void*)0), VAR_18, &VAR_18->ih_cookie)) {
  FUNC_9(VAR_17, "could not setup interrupt handler\n");
  FUNC_6(VAR_17, VAR_14, VAR_18->res);
  FUNC_0(VAR_18);
  return (VAR_6);
 }

 VAR_12 = VAR_18;

 FUNC_4(VAR_16, VAR_15, VAR_18, 0);

 return (0);
}
