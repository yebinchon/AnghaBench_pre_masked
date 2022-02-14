
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct TYPE_3__ {int len; } ;
struct mbuf {int m_len; int m_data; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_snd; } ;
struct TYPE_4__ {int ue_udev; } ;
struct cdce_softc {int sc_flags; TYPE_2__ sc_ue; struct mbuf** sc_tx_buf; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct usb_xfer*) ;
 int VAR_7 ;


 int FUNC_4 (struct mbuf**,size_t) ;
 int FUNC_5 (struct mbuf*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (struct mbuf*,int,void*) ;
 struct mbuf* FUNC_9 (struct mbuf*,int ) ;
 int FUNC_10 (struct mbuf*) ;
 struct ifnet* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,size_t,int ,int ) ;
 int FUNC_16 (struct usb_xfer*,size_t) ;
 int FUNC_17 (struct usb_xfer*) ;
 struct cdce_softc* FUNC_18 (struct usb_xfer*) ;
 int FUNC_19 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_20(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct cdce_softc *VAR_10 = FUNC_18(VAR_8);
 struct ifnet *VAR_11 = FUNC_11(&VAR_10->sc_ue);
 struct mbuf *VAR_12;
 struct mbuf *VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;
 int VAR_16, VAR_17;

 FUNC_19(VAR_8, &VAR_16, ((void*)0), &VAR_17, ((void*)0));

 FUNC_1(1, "\n");

 switch (FUNC_3(VAR_8)) {
 case 128:
  FUNC_1(11, "transfer complete: %u bytes in %u frames\n",
      VAR_16, VAR_17);

  FUNC_7(VAR_11, VAR_3, 1);


  FUNC_4(VAR_10->sc_tx_buf, VAR_1);


 case 129:
tr_setup:
  for (VAR_15 = 0; VAR_15 != VAR_1; VAR_15++) {

   FUNC_2(&VAR_11->if_snd, VAR_12);

   if (VAR_12 == ((void*)0))
    break;

   if (VAR_10->sc_flags & VAR_0) {





    VAR_14 = FUNC_5(VAR_12, 0, VAR_12->m_pkthdr.len);
    VAR_14 = FUNC_6(VAR_14);

    if (!FUNC_8(VAR_12, 4, (void *)&VAR_14)) {
     FUNC_10(VAR_12);
     FUNC_7(VAR_11, VAR_2, 1);
     continue;
    }
   }
   if (VAR_12->m_len != VAR_12->m_pkthdr.len) {
    VAR_13 = FUNC_9(VAR_12, VAR_5);
    if (VAR_13 == ((void*)0)) {
     FUNC_10(VAR_12);
     FUNC_7(VAR_11, VAR_2, 1);
     continue;
    }
    VAR_12 = VAR_13;
   }
   if (VAR_12->m_pkthdr.len > VAR_4) {
    VAR_12->m_pkthdr.len = VAR_4;
   }
   VAR_10->sc_tx_buf[VAR_15] = VAR_12;
   FUNC_15(VAR_8, VAR_15, VAR_12->m_data, VAR_12->m_len);





   FUNC_0(VAR_11, VAR_12);
  }
  if (VAR_15 != 0) {
   FUNC_16(VAR_8, VAR_15);

   FUNC_14(VAR_8);
  }
  break;

 default:
  FUNC_1(11, "transfer error, %s\n",
      FUNC_12(VAR_9));


  FUNC_4(VAR_10->sc_tx_buf, VAR_1);


  FUNC_7(VAR_11, VAR_2, 1);

  if (VAR_9 != VAR_6) {
   if (FUNC_13(VAR_10->sc_ue.ue_udev) == VAR_7) {

    FUNC_17(VAR_8);
   }
   goto tr_setup;
  }
  break;
 }
}
