
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct otus_softc {int dummy; } ;
struct otus_data {scalar_t__ buf; } ;
struct mbufq {int dummy; } ;
struct ar_rx_head {scalar_t__ tag; scalar_t__ len; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct otus_softc*,int ,char*,int,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct otus_softc*,int *,int,struct mbufq*) ;
 struct otus_softc* FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_7(struct usb_xfer *VAR_2, struct otus_data *VAR_3, struct mbufq *VAR_4)
{
 struct otus_softc *VAR_5 = FUNC_5(VAR_2);
 caddr_t VAR_6 = VAR_3->buf;
 struct ar_rx_head *VAR_7;
 uint16_t VAR_8;
 int VAR_9;

 FUNC_6(VAR_2, &VAR_9, ((void*)0), ((void*)0), ((void*)0));

 while (VAR_9 >= sizeof (*VAR_7)) {
  VAR_7 = (struct ar_rx_head *)VAR_6;
  if (FUNC_1(VAR_7->tag != FUNC_2(VAR_0))) {
   FUNC_0(VAR_5, VAR_1,
       "tag not valid 0x%x\n", FUNC_3(VAR_7->tag));
   break;
  }
  VAR_8 = FUNC_3(VAR_7->len);
  if (FUNC_1(sizeof (*VAR_7) + VAR_8 > VAR_9)) {
   FUNC_0(VAR_5, VAR_1,
       "xfer too short %d/%d\n", VAR_9, VAR_8);
   break;
  }

  FUNC_4(VAR_5, (uint8_t *)&VAR_7[1], VAR_8, VAR_4);


  VAR_8 = (sizeof (*VAR_7) + VAR_8 + 3) & ~3;
  VAR_6 += VAR_8;
  VAR_9 -= VAR_8;
 }
}
