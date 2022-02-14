
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_flags; int if_broadcastaddr; } ;
struct cue_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cue_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cue_softc*,int ,int ,int**,int) ;
 int FUNC_3 (struct ifnet*,int ,int*) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 struct cue_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_7)
{
 struct cue_softc *VAR_8 = FUNC_5(VAR_7);
 struct ifnet *VAR_9 = FUNC_4(VAR_7);
 uint32_t VAR_10, VAR_11;
 uint8_t VAR_12[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

 FUNC_0(VAR_8, VAR_5);

 if (VAR_9->if_flags & VAR_2 || VAR_9->if_flags & VAR_4) {
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   VAR_12[VAR_11] = 0xff;
  FUNC_2(VAR_8, VAR_0, VAR_1,
      &VAR_12, 8);
  return;
 }


 FUNC_3(VAR_9, VAR_6, VAR_12);





 if (VAR_9->if_flags & VAR_3) {
  VAR_10 = FUNC_1(VAR_9->if_broadcastaddr);
  VAR_12[VAR_10 >> 3] |= 1 << (VAR_10 & 0x7);
 }

 FUNC_2(VAR_8, VAR_0, VAR_1, &VAR_12, 8);
}
