
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uss820dci_td {scalar_t__ ep_index; int error; int remainder; } ;
struct uss820dci_softc {int sc_dv_addr; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct uss820dci_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct uss820dci_softc*,int ,scalar_t__) ;
 int FUNC_3 (struct uss820dci_softc*,int) ;

__attribute__((used)) static uint8_t
FUNC_4(struct uss820dci_softc *VAR_10, struct uss820dci_td *VAR_11)
{
 uint8_t VAR_12;
 uint8_t VAR_13;


 FUNC_2(VAR_10, VAR_0, VAR_11->ep_index);


 VAR_13 = FUNC_1(VAR_10, VAR_5);

 if (VAR_11->ep_index == 0) {

  VAR_12 = FUNC_1(VAR_10, VAR_1);

  FUNC_0(5, "rx_stat=0x%02x rem=%u\n", VAR_12, VAR_11->remainder);

  if (VAR_12 & (VAR_3 |
      VAR_4 |
      VAR_2)) {
   FUNC_0(5, "faking complete\n");

   return (0);
  }
 }
 FUNC_0(5, "tx_flag=0x%02x rem=%u\n", VAR_13, VAR_11->remainder);

 if (VAR_13 & (VAR_8 |
     VAR_9)) {
  VAR_11->error = 1;
  return (0);
 }
 if (VAR_13 & (VAR_6 |
     VAR_7)) {
  return (1);
 }
 if (VAR_11->ep_index == 0 && VAR_10->sc_dv_addr != 0xFF) {

  FUNC_3(VAR_10, VAR_10->sc_dv_addr);
 }
 return (0);
}
