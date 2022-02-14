
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* dv_xname; } ;
struct tpm_softc {int (* sc_init ) (struct tpm_softc*,scalar_t__,char*) ;int sc_powerhook; int sc_suspend; TYPE_1__ sc_dev; int sc_bh; int sc_bt; int * sc_ih; int sc_end; int sc_write; int sc_read; int sc_start; int sc_batm; } ;
struct isa_attach_args {scalar_t__ ia_irq; int ia_ic; int ia_maddr; int ia_memt; int ia_iot; int ia_iosize; int ia_iobase; } ;
typedef scalar_t__ device_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (int ,scalar_t__,int ,int ,int ,struct tpm_softc*,char*) ;
 int FUNC_3 (int ,struct tpm_softc*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct tpm_softc*,scalar_t__,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct tpm_softc*,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct tpm_softc*,scalar_t__,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_9(device_t VAR_15, device_t VAR_16, void *VAR_17)
{
 struct tpm_softc *VAR_18 = (struct tpm_softc *)VAR_16;
 struct isa_attach_args *VAR_19 = VAR_17;
 bus_addr_t VAR_20;
 bus_size_t VAR_21;
 int VAR_22;

 if (FUNC_7(VAR_19->ia_iot, VAR_19->ia_iobase)) {
  VAR_18->sc_bt = VAR_19->ia_iot;
  VAR_20 = VAR_19->ia_iobase;
  VAR_21 = VAR_19->ia_iosize;
  VAR_18->sc_batm = VAR_19->ia_iot;
  VAR_18->sc_init = FUNC_6;
  VAR_18->sc_start = VAR_8;
  VAR_18->sc_read = VAR_7;
  VAR_18->sc_write = VAR_9;
  VAR_18->sc_end = VAR_6;
 } else {
  VAR_18->sc_bt = VAR_19->ia_memt;
  VAR_20 = VAR_19->ia_maddr;
  VAR_21 = VAR_4;
  VAR_18->sc_init = FUNC_8;
  VAR_18->sc_start = VAR_13;
  VAR_18->sc_read = VAR_12;
  VAR_18->sc_write = VAR_14;
  VAR_18->sc_end = VAR_11;
 }

 if (FUNC_0(VAR_18->sc_bt, VAR_20, VAR_21, 0, &VAR_18->sc_bh)) {
  FUNC_4(": cannot map registers\n");
  return;
 }

 if ((VAR_22 = (VAR_18->sc_init)(VAR_18, VAR_19->ia_irq, VAR_18->sc_dev.dv_xname))) {
  FUNC_1(VAR_18->sc_bt, VAR_18->sc_bh, VAR_21);
  return;
 }





 if (VAR_18->sc_init == FUNC_8 && VAR_19->ia_irq != VAR_1 &&
     (VAR_18->sc_ih = FUNC_2(VAR_19->ia_ic, VAR_19->ia_irq, VAR_2,
     VAR_0, VAR_5, VAR_18, VAR_18->sc_dev.dv_xname)) == ((void*)0)) {
  FUNC_1(VAR_18->sc_bt, VAR_18->sc_bh, VAR_4);
  FUNC_4("%s: cannot establish interrupt\n",
      VAR_18->sc_dev.dv_xname);
  return;
 }

 VAR_18->sc_suspend = VAR_3;
 VAR_18->sc_powerhook = FUNC_3(VAR_10, VAR_18);
}
