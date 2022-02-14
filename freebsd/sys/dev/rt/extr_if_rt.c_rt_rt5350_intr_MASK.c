
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
 int FUNC_0 (struct rt_softc*,int ,char*,int) ;
 int FUNC_1 (struct rt_softc*,int ) ;
 int FUNC_2 (struct rt_softc*,int ,int) ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (struct rt_softc*) ;
 int FUNC_5 (struct rt_softc*,int) ;
 int FUNC_6 (struct rt_softc*) ;
 int FUNC_7 (struct rt_softc*) ;
 int FUNC_8 (struct rt_softc*,int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_12)
{
 struct rt_softc *VAR_13;
 struct ifnet *VAR_14;
 uint32_t VAR_15;

 VAR_13 = VAR_12;
 VAR_14 = VAR_13->ifp;


 VAR_15 = FUNC_1(VAR_13, VAR_13->fe_int_status);
 FUNC_2(VAR_13, VAR_13->fe_int_status, VAR_15);

 FUNC_0(VAR_13, VAR_11, "interrupt: status=0x%08x\n", VAR_15);

 if (VAR_15 == 0xffffffff ||
  VAR_15 == 0)
  return;

 VAR_13->interrupts++;

 if (!(VAR_14->if_drv_flags & VAR_0))
         return;

 if (VAR_15 & VAR_8)
  FUNC_6(VAR_13);
 if (VAR_15 & VAR_3)
  FUNC_3(VAR_13);
 if (VAR_15 & VAR_9)
         FUNC_4(VAR_13);
 if (VAR_15 & VAR_10)
         FUNC_7(VAR_13);
 if (VAR_15 & VAR_2)
  FUNC_5(VAR_13, 1);
 if (VAR_15 & VAR_1)
  FUNC_5(VAR_13, 0);
 if (VAR_15 & VAR_7)
  FUNC_8(VAR_13, 3);
 if (VAR_15 & VAR_6)
  FUNC_8(VAR_13, 2);
 if (VAR_15 & VAR_5)
  FUNC_8(VAR_13, 1);
 if (VAR_15 & VAR_4)
  FUNC_8(VAR_13, 0);
}
