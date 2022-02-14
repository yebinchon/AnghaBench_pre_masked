
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cgem_softc {int net_ctl_shadow; int rxnobufs; int rxoverruns; int dev; int ifp; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cgem_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct cgem_softc*) ;
 int VAR_10 ;
 int FUNC_2 (struct cgem_softc*,int ) ;
 int FUNC_3 (struct cgem_softc*,int ,int) ;
 int FUNC_4 (struct cgem_softc*) ;
 int FUNC_5 (struct cgem_softc*) ;
 int FUNC_6 (struct cgem_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void *VAR_11)
{
 struct cgem_softc *VAR_12 = (struct cgem_softc *)VAR_11;
 if_t VAR_13 = VAR_12->ifp;
 uint32_t VAR_14;

 FUNC_0(VAR_12);

 if ((FUNC_9(VAR_13) & VAR_10) == 0) {
  FUNC_1(VAR_12);
  return;
 }


 VAR_14 = FUNC_2(VAR_12, VAR_4);
 FUNC_3(VAR_12, VAR_4, VAR_14);


 if ((VAR_14 & VAR_1) != 0)
  FUNC_6(VAR_12);


 FUNC_4(VAR_12);


 if ((VAR_14 & VAR_0) != 0) {
  FUNC_8(VAR_12->dev, "cgem_intr: hresp not okay! "
         "rx_status=0x%x\n", FUNC_2(VAR_12, VAR_7));
  FUNC_3(VAR_12, VAR_7, VAR_8);
 }


 if ((VAR_14 & VAR_2) != 0) {

  FUNC_3(VAR_12, VAR_7, VAR_9);
  VAR_12->rxoverruns++;
 }


 if ((VAR_14 & VAR_3) != 0) {
  FUNC_3(VAR_12, VAR_5, VAR_12->net_ctl_shadow |
      VAR_6);
  FUNC_5(VAR_12);
  VAR_12->rxnobufs++;
 }


 if (!FUNC_10(VAR_13))
  FUNC_7(VAR_13);

 FUNC_1(VAR_12);
}
