
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct urndis_softc {int sc_ue; } ;
struct rndis_packet_msg {void* rm_datalen; void* rm_dataoffset; void* rm_len; void* rm_type; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_snd; } ;
typedef int msg ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct usb_xfer*) ;


 void* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct rndis_packet_msg*,int ,int) ;
 struct ifnet* FUNC_9 (int *) ;
 int FUNC_10 (struct usb_page_cache*,int ,struct rndis_packet_msg*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct usb_page_cache*,int,struct mbuf*,int ,int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_14 (struct usb_xfer*,unsigned int) ;
 int FUNC_15 (struct usb_xfer*,unsigned int,int ) ;
 int FUNC_16 (struct usb_xfer*,unsigned int,unsigned int) ;
 int FUNC_17 (struct usb_xfer*,unsigned int) ;
 int FUNC_18 (struct usb_xfer*) ;
 struct urndis_softc* FUNC_19 (struct usb_xfer*) ;
 int FUNC_20 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_21(struct usb_xfer *VAR_7, usb_error_t VAR_8)
{
 struct rndis_packet_msg VAR_9;
 struct urndis_softc *VAR_10 = FUNC_19(VAR_7);
 struct ifnet *VAR_11 = FUNC_9(&VAR_10->sc_ue);
 struct mbuf *VAR_12;
 unsigned VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_20(VAR_7, &VAR_14, ((void*)0), &VAR_15, ((void*)0));

 FUNC_2(1, "\n");

 switch (FUNC_4(VAR_7)) {
 case 128:
  FUNC_2(11, "%u bytes in %u frames\n", VAR_14, VAR_15);

  FUNC_6(VAR_11, VAR_1, 1);


 case 129:
tr_setup:
  FUNC_8(&VAR_9, 0, sizeof(VAR_9));

  for (VAR_13 = 0; VAR_13 != VAR_4; VAR_13++) {
   struct usb_page_cache *VAR_16 = FUNC_14(VAR_7, VAR_13);

   FUNC_16(VAR_7, VAR_13 * VAR_5, VAR_13);

next_pkt:
   FUNC_3(&VAR_11->if_snd, VAR_12);

   if (VAR_12 == ((void*)0))
    break;

   if ((VAR_12->m_pkthdr.len + sizeof(VAR_9)) > VAR_5) {
    FUNC_1("Too big packet\n");
    FUNC_6(VAR_11, VAR_0, 1);


    FUNC_7(VAR_12);
    goto next_pkt;
   }
   VAR_9.rm_type = FUNC_5(VAR_2);
   VAR_9.rm_len = FUNC_5(sizeof(VAR_9) + VAR_12->m_pkthdr.len);

   VAR_9.rm_dataoffset = FUNC_5(VAR_3);
   VAR_9.rm_datalen = FUNC_5(VAR_12->m_pkthdr.len);


   FUNC_10(VAR_16, 0, &VAR_9, sizeof(VAR_9));
   FUNC_12(VAR_16, sizeof(VAR_9), VAR_12, 0, VAR_12->m_pkthdr.len);
   FUNC_15(VAR_7, VAR_13, sizeof(VAR_9) + VAR_12->m_pkthdr.len);





   FUNC_0(VAR_11, VAR_12);


   FUNC_7(VAR_12);
  }
  if (VAR_13 != 0) {
   FUNC_17(VAR_7, VAR_13);
   FUNC_13(VAR_7);
  }
  break;

 default:
  FUNC_2(11, "transfer error, %s\n", FUNC_11(VAR_8));


  FUNC_6(VAR_11, VAR_0, 1);

  if (VAR_8 != VAR_6) {

   FUNC_18(VAR_7);
   goto tr_setup;
  }
  break;
 }
}
