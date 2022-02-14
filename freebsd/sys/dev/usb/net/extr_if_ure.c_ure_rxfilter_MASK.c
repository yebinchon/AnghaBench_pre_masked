
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_ether {int dummy; } ;
struct ure_softc {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ure_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*,int ,int**) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct ure_softc* FUNC_4 (struct usb_ether*) ;
 int VAR_12 ;
 int FUNC_5 (struct ure_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_13)
{
 struct ure_softc *VAR_14 = FUNC_4(VAR_13);
 struct ifnet *VAR_15 = FUNC_3(VAR_13);
 uint32_t VAR_16;
 uint32_t VAR_17, VAR_18[2] = { 0, 0 };

 FUNC_0(VAR_14, VAR_3);

 VAR_16 = VAR_11;
 if (VAR_15->if_flags & VAR_1)
   VAR_16 |= VAR_9;
 if (VAR_15->if_flags & (VAR_0 | VAR_2)) {
  if (VAR_15->if_flags & VAR_2)
   VAR_16 |= VAR_8;
  VAR_16 |= VAR_10;
  VAR_18[0] = VAR_18[1] = 0xffffffff;
  goto done;
 }

 VAR_16 |= VAR_10;
 FUNC_2(VAR_15, VAR_12, &VAR_18);

 VAR_17 = FUNC_1(VAR_18[0]);
 VAR_18[0] = FUNC_1(VAR_18[1]);
 VAR_18[1] = VAR_17;
 VAR_16 |= VAR_10;

done:
 FUNC_5(VAR_14, VAR_5, VAR_4, VAR_18[0]);
 FUNC_5(VAR_14, VAR_6, VAR_4, VAR_18[1]);
 FUNC_5(VAR_14, VAR_7, VAR_4, VAR_16);
}
