
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xhci_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct xhci_softc*,scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct xhci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct xhci_softc*,int ,int ) ;
 struct xhci_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(device_t VAR_20)
{
 struct xhci_softc *VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_21 = FUNC_8(VAR_20);

 VAR_22 = FUNC_2(VAR_21, VAR_11);
 VAR_23 = FUNC_4(VAR_22);
 VAR_24 = FUNC_3(VAR_22);

 FUNC_9(VAR_20, "%d USB3 ports, %d USB2 ports\n",
     VAR_23, VAR_24);

 FUNC_0(VAR_21, VAR_13, 0, VAR_17);
 FUNC_0(VAR_21, VAR_13, VAR_17, 0);
 FUNC_0(VAR_21, VAR_14, VAR_12, 0);

 for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++)
  FUNC_0(VAR_21, FUNC_6(VAR_25), VAR_19 | VAR_18, 0);

 for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++)
  FUNC_0(VAR_21, FUNC_5(VAR_25), VAR_19 | VAR_18, 0);

 FUNC_1(100000);

 FUNC_7(VAR_21, VAR_9, VAR_10);
 FUNC_7(VAR_21, VAR_7, VAR_8);
 FUNC_7(VAR_21, VAR_0, VAR_1);
 FUNC_7(VAR_21, VAR_15, VAR_16);
 FUNC_0(VAR_21, VAR_5 + VAR_2, VAR_3,
     VAR_4);
 FUNC_0(VAR_21, VAR_6 + VAR_2, VAR_3,
     VAR_4);
}
