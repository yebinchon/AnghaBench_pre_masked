
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct musbotg_td {int channel; int transaction_started; int dev_addr; int haddr; int hport; int transfer_type; int error; int pc; } ;
struct musbotg_softc {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct musbotg_softc*,struct musbotg_td*,int ) ;
 int FUNC_8 (struct musbotg_softc*,struct musbotg_td*) ;

__attribute__((used)) static uint8_t
FUNC_9(struct musbotg_td *VAR_14)
{
 struct musbotg_softc *VAR_15;
 uint8_t VAR_16, VAR_17;


 VAR_15 = FUNC_6(VAR_14->pc);

 if (VAR_14->channel == -1)
  VAR_14->channel = FUNC_7(VAR_15, VAR_14, 0);


 if (VAR_14->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_14->channel);


 FUNC_5(VAR_15, VAR_9, 0);

 if (!VAR_14->transaction_started) {
  FUNC_5(VAR_15, FUNC_2(0),
      VAR_14->dev_addr);

  FUNC_5(VAR_15, FUNC_3(0), VAR_14->haddr);
  FUNC_5(VAR_15, FUNC_4(0), VAR_14->hport);
  FUNC_5(VAR_15, VAR_12, VAR_14->transfer_type);


  FUNC_5(VAR_15, VAR_11, VAR_0);

  VAR_14->transaction_started = 1;


  VAR_17 = FUNC_1(VAR_15, VAR_10);
  VAR_17 |= VAR_1;
  FUNC_5(VAR_15, VAR_10, VAR_17);


  FUNC_5(VAR_15, VAR_13,
      VAR_8 |
      VAR_4);

  return (1);

 }

 VAR_16 = FUNC_1(VAR_15, VAR_13);

 FUNC_0(4, "IN STATUS csr=0x%02x\n", VAR_16);

 if (VAR_16 & VAR_5) {
  FUNC_5(VAR_15, VAR_13,
      VAR_6);
  FUNC_8(VAR_15, VAR_14);
  return (0);
 }

 if (VAR_16 & VAR_3) {
  VAR_16 &= ~ (VAR_8 |
      VAR_4);
  FUNC_5(VAR_15, VAR_13, VAR_16);

  VAR_16 &= ~VAR_3;
  FUNC_5(VAR_15, VAR_13, VAR_16);
  VAR_14->error = 1;
 }


 if (VAR_16 & (VAR_7 |
     VAR_2))
 {

  FUNC_5(VAR_15, VAR_13, 0);
  FUNC_0(1, "error bit set, csr=0x%02x\n", VAR_16);
  VAR_14->error = 1;
 }

 if (VAR_14->error) {
  FUNC_8(VAR_15, VAR_14);
  return (0);
 }

 return (1);
}
