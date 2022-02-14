
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_dmtimer_softc {int tmr_num; int tmr_name; int * tmr_mem_res; int tmr_mem_rid; int sysclk_freq; int dev; } ;
typedef int device_t ;
typedef int clk_ident_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct am335x_dmtimer_softc*) ;
 int FUNC_1 (struct am335x_dmtimer_softc*) ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 struct am335x_dmtimer_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ,int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8)
{
 struct am335x_dmtimer_softc *VAR_9;
 clk_ident_t VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->dev = VAR_8;


 if ((VAR_11 = FUNC_9(VAR_5, &VAR_9->sysclk_freq)) != 0)
  return (VAR_11);


 if ((VAR_10 = FUNC_6(VAR_8)) == VAR_2)
  return (VAR_0);
 if ((VAR_11 = FUNC_10(VAR_10, VAR_4)) != 0)
  return (VAR_11);
 if ((VAR_11 = FUNC_8(VAR_10)) != 0)
  return (VAR_11);


 VAR_9->tmr_mem_res = FUNC_2(VAR_8, VAR_6,
     &VAR_9->tmr_mem_rid, VAR_3);
 if (VAR_9->tmr_mem_res == ((void*)0)) {
  return (VAR_0);
 }

 VAR_9->tmr_num = FUNC_7(VAR_8, "timer");
 FUNC_5(VAR_9->tmr_name, sizeof(VAR_9->tmr_name), "DMTimer%d", VAR_9->tmr_num);





 if (VAR_9->tmr_num == VAR_1)
  FUNC_0(VAR_9);
 else if (VAR_9->tmr_num == VAR_7)
  FUNC_1(VAR_9);
 else
  FUNC_4("am335x_dmtimer: bad timer number %d", VAR_9->tmr_num);

 return (0);
}
