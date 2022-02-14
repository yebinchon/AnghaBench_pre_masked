
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt_softc {int interrupts; int fe_int_status; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rt_softc*,int ,char*,int) ;
 int FUNC_1 (struct rt_softc*,int ) ;
 int FUNC_2 (struct rt_softc*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (struct rt_softc*) ;
 int FUNC_5 (struct rt_softc*) ;
 int FUNC_6 (struct rt_softc*) ;
 int FUNC_7 (struct rt_softc*) ;
 int FUNC_8 (struct rt_softc*) ;
 int FUNC_9 (struct rt_softc*) ;
 int FUNC_10 (struct rt_softc*) ;
 int FUNC_11 (struct rt_softc*) ;
 int FUNC_12 (struct rt_softc*) ;
 int FUNC_13 (struct rt_softc*) ;
 int FUNC_14 (struct rt_softc*,int ) ;
 int FUNC_15 (struct rt_softc*) ;
 int FUNC_16 (struct rt_softc*) ;
 int FUNC_17 (struct rt_softc*,int) ;

__attribute__((used)) static void
FUNC_18(void *VAR_20)
{
 struct rt_softc *VAR_21;
 struct ifnet *VAR_22;
 uint32_t VAR_23;

 VAR_21 = VAR_20;
 VAR_22 = VAR_21->ifp;


 VAR_23 = FUNC_1(VAR_21, VAR_21->fe_int_status);
 FUNC_2(VAR_21, VAR_21->fe_int_status, VAR_23);

 FUNC_0(VAR_21, VAR_17, "interrupt: status=0x%08x\n", VAR_23);

 if (VAR_23 == 0xffffffff ||
  VAR_23 == 0)
  return;

 VAR_21->interrupts++;

 if (!(VAR_22->if_drv_flags & VAR_4))
  return;

 if (VAR_23 & VAR_1)
  FUNC_4(VAR_21);

 if (VAR_23 & VAR_0)
  FUNC_3(VAR_21);

 if (VAR_23 & VAR_16)
  FUNC_11(VAR_21);

 if (VAR_23 & VAR_2)
  FUNC_5(VAR_21);

 if (VAR_23 & VAR_12)
  FUNC_7(VAR_21);

 if (VAR_23 & VAR_3)
  FUNC_6(VAR_21);

 if (VAR_23 & VAR_15)
  FUNC_10(VAR_21);

 if (VAR_23 & VAR_14)
  FUNC_9(VAR_21);

 if (VAR_23 & VAR_13)
  FUNC_8(VAR_21);

 if (VAR_23 & VAR_11)
  FUNC_15(VAR_21);

 if (VAR_23 & VAR_5)
  FUNC_12(VAR_21);

 if (VAR_23 & VAR_18)
  FUNC_13(VAR_21);

 if (VAR_23 & VAR_19)
  FUNC_16(VAR_21);

 if (VAR_23 & VAR_6)
  FUNC_14(VAR_21, 0);

 if (VAR_23 & VAR_10)
  FUNC_17(VAR_21, 3);

 if (VAR_23 & VAR_9)
  FUNC_17(VAR_21, 2);

 if (VAR_23 & VAR_8)
  FUNC_17(VAR_21, 1);

 if (VAR_23 & VAR_7)
  FUNC_17(VAR_21, 0);
}
