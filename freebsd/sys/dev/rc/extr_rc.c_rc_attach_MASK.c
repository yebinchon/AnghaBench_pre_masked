
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty {int t_stop; int t_close; int t_break; int t_modem; int t_param; int t_oproc; struct rc_chans* t_sc; } ;
struct rc_softc {int sc_unit; int sc_swicookie; int sc_hwicookie; int * sc_irq; struct rc_chans* sc_channels; int sc_irqrid; int ** sc_port; int sc_bh; int sc_bt; int sc_dev; } ;
struct rc_chans {int rc_chan; struct tty* rc_tp; int rc_dtrcallout; int rc_obuf; int rc_obufend; int rc_optr; int * rc_ibuf; int * rc_hiwat; int * rc_bufend; int * rc_iptr; struct rc_softc* rc_rcb; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int * FUNC_1 (int ,int ,int*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int,int) ;
 int FUNC_3 (int ,int *,int ,int *,int ,struct rc_softc*,int *) ;
 int FUNC_4 (int *,int ) ;
 struct rc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int* VAR_15 ;
 int FUNC_8 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_10 (struct rc_softc*) ;
 int FUNC_11 (struct rc_softc*,int ) ;
 int FUNC_12 (struct rc_softc*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*,int ,struct rc_softc*,int ,int ,int *) ;
 int VAR_24 ;
 struct tty* FUNC_16 () ;
 int FUNC_17 (struct tty*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_25)
{
  struct rc_chans *VAR_26;
 struct tty *VAR_27;
 struct rc_softc *VAR_28;
 u_int VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;

 VAR_28 = FUNC_5(VAR_25);
 VAR_28->sc_dev = VAR_25;
 VAR_29 = FUNC_8(VAR_25);
 for (VAR_33 = 0; VAR_33 < VAR_7; VAR_33++)
  if (FUNC_2(VAR_25, VAR_12, VAR_33,
      VAR_29 + VAR_15[VAR_33], 0x10) != 0)
   return (VAR_5);
 VAR_32 = VAR_4;
 for (VAR_33 = 0; VAR_33 < VAR_7; VAR_33++) {
  VAR_34 = VAR_33;
  VAR_28->sc_port[VAR_33] = FUNC_1(VAR_25,
      VAR_12, &VAR_34, 0x10, VAR_10);
  if (VAR_34 != VAR_33) {
   FUNC_7(VAR_25, "ioport %d was rid %d\n", VAR_33, VAR_34);
   goto fail;
  }
  if (VAR_28->sc_port[VAR_33] == ((void*)0)) {
   FUNC_7(VAR_25, "failed to alloc ioports %x-%x\n",
       VAR_29 + VAR_15[VAR_33],
       VAR_29 + VAR_15[VAR_33] + 0x10);
   goto fail;
  }
 }
 VAR_28->sc_bt = FUNC_14(VAR_28->sc_port[0]);
 VAR_28->sc_bh = FUNC_13(VAR_28->sc_port[0]);

 VAR_28->sc_irq = FUNC_0(VAR_25, VAR_13, &VAR_28->sc_irqrid,
     VAR_10);
 if (VAR_28->sc_irq == ((void*)0)) {
  FUNC_7(VAR_25, "failed to alloc IRQ\n");
  goto fail;
 }




 VAR_32 = VAR_5;
 FUNC_12(VAR_28, VAR_3, 0x22);
 FUNC_12(VAR_28, VAR_2, 0x11);
 if (FUNC_11(VAR_28, VAR_3) != 0x22 || FUNC_11(VAR_28, VAR_2) != 0x11)
  goto fail;
 if (FUNC_10(VAR_28))
  goto fail;




 VAR_28->sc_unit = FUNC_6(VAR_25);

 FUNC_7(VAR_25, "%d chans, firmware rev. %c\n",
  VAR_1, (FUNC_11(VAR_28, VAR_0) & 0xF) + 'A');
 VAR_26 = VAR_28->sc_channels;
 VAR_30 = VAR_1 * VAR_28->sc_unit;
 for (VAR_31 = 0; VAR_31 < VAR_1; VAR_31++, VAR_26++) {
  VAR_26->rc_rcb = VAR_28;
  VAR_26->rc_chan = VAR_31;
  VAR_26->rc_iptr = VAR_26->rc_ibuf;
  VAR_26->rc_bufend = &VAR_26->rc_ibuf[VAR_8];
  VAR_26->rc_hiwat = &VAR_26->rc_ibuf[VAR_9];
  VAR_26->rc_optr = VAR_26->rc_obufend = VAR_26->rc_obuf;
  FUNC_4(&VAR_26->rc_dtrcallout, 0);
  VAR_27 = VAR_26->rc_tp = FUNC_16();
  VAR_27->t_sc = VAR_26;
  VAR_27->t_oproc = VAR_22;
  VAR_27->t_param = VAR_20;
  VAR_27->t_modem = VAR_19;
  VAR_27->t_break = VAR_16;
  VAR_27->t_close = VAR_17;
  VAR_27->t_stop = VAR_23;
  FUNC_17(VAR_27, VAR_14, "m%d", VAR_31 + VAR_30);
 }

 VAR_32 = FUNC_3(VAR_25, VAR_28->sc_irq, VAR_6, ((void*)0), VAR_18,
     VAR_28, &VAR_28->sc_hwicookie);
 if (VAR_32) {
  FUNC_7(VAR_25, "failed to register interrupt handler\n");
  goto fail;
 }

 FUNC_15(&VAR_24, "rc", VAR_21, VAR_28, VAR_11, 0,
     &VAR_28->sc_swicookie);
 return (0);

fail:
 FUNC_9(VAR_25);
 return (VAR_32);
}
