
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int ctlr_handle; int * watchdog_callout; } ;
typedef int device_t ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct twa_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,struct twa_softc*,char*) ;
 int FUNC_4 (struct twa_softc*,char*,int ,int ,int,char*,int ) ;
 int FUNC_5 (struct twa_softc*) ;

__attribute__((used)) static TW_INT32
FUNC_6(device_t VAR_2)
{
 struct twa_softc *VAR_3 = FUNC_1(VAR_2);
 TW_INT32 VAR_4 = 0;

 FUNC_3(3, VAR_3, "entered");


 VAR_4 = FUNC_5(VAR_3);


 FUNC_0(&(VAR_3->watchdog_callout[0]));
 FUNC_0(&(VAR_3->watchdog_callout[1]));


 if ((VAR_4 = FUNC_2(&(VAR_3->ctlr_handle), 0))) {
  FUNC_4(VAR_3, "error = %d",
   VAR_1,
   VAR_0,
   0x2015,
   "Failed to shutdown Common Layer/controller",
   VAR_4);
 }
 return(VAR_4);
}
