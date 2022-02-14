
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_page_cache {int dummy; } ;
struct usb_ether {int ue_ifp; } ;
struct axe_softc {int sc_flags; int sc_lenmask; } ;
struct axe_sframe_hdr {int len; int ilen; int cstatus; } ;
struct axe_csum_hdr {int len; int ilen; int cstatus; } ;
typedef int hdr ;
typedef int csum_hdr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_ether*,struct usb_page_cache*,int,int,struct axe_sframe_hdr*) ;
 int FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (int) ;
 struct axe_softc* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct usb_page_cache*,int,struct axe_sframe_hdr*,int) ;

__attribute__((used)) static int
FUNC_6(struct usb_ether *VAR_4, struct usb_page_cache *VAR_5, int VAR_6)
{
 struct axe_softc *VAR_7;
 struct axe_sframe_hdr VAR_8;
 struct axe_csum_hdr VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_4(VAR_4);
 VAR_12 = 0;
 VAR_11 = 0;
 VAR_10 = 0;
 if ((VAR_7->sc_flags & VAR_1) != 0) {
  while (VAR_12 < VAR_6) {
   if ((int)(VAR_12 + sizeof(VAR_8)) > VAR_6) {

    VAR_10 = VAR_2;
    break;
   }
   FUNC_5(VAR_5, VAR_12, &VAR_8, sizeof(VAR_8));

   if ((VAR_8.len ^ VAR_8.ilen) != VAR_7->sc_lenmask) {

    VAR_10 = VAR_2;
    break;
   }
   VAR_12 += sizeof(VAR_8);
   VAR_11 = FUNC_3(VAR_8.len);
   if (VAR_12 + VAR_11 > VAR_6) {

    VAR_10 = VAR_2;
    break;
   }
   FUNC_1(VAR_4, VAR_5, VAR_12, VAR_11, ((void*)0));
   VAR_12 += VAR_11 + (VAR_11 % 2);
  }
 } else if ((VAR_7->sc_flags & VAR_0) != 0) {
  while (VAR_12 < VAR_6) {
   if ((int)(VAR_12 + sizeof(VAR_9)) > VAR_6) {

    VAR_10 = VAR_2;
    break;
   }
   FUNC_5(VAR_5, VAR_12, &VAR_9, sizeof(VAR_9));

   VAR_9.len = FUNC_3(VAR_9.len);
   VAR_9.ilen = FUNC_3(VAR_9.ilen);
   VAR_9.cstatus = FUNC_3(VAR_9.cstatus);
   if ((FUNC_0(VAR_9.len) ^
       FUNC_0(VAR_9.ilen)) !=
       VAR_7->sc_lenmask) {

    VAR_10 = VAR_2;
    break;
   }





   VAR_11 = sizeof(VAR_9) + FUNC_0(VAR_9.len);
   VAR_11 = (VAR_11 + 3) & ~3;
   if (VAR_12 + VAR_11 > VAR_6) {

    VAR_10 = VAR_2;
    break;
   }
   FUNC_1(VAR_4, VAR_5, VAR_12 + sizeof(VAR_9),
       FUNC_0(VAR_9.len), &VAR_9);
   VAR_12 += VAR_11;
  }
 } else
  FUNC_1(VAR_4, VAR_5, 0, VAR_6, ((void*)0));

 if (VAR_10 != 0)
  FUNC_2(VAR_4->ue_ifp, VAR_3, 1);
 return (VAR_10);
}
