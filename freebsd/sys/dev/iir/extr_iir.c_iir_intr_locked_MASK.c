
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_11__ {int index; int ionode; } ;
struct TYPE_12__ {TYPE_1__ driver; } ;
struct TYPE_18__ {int size; TYPE_2__ eu; } ;
struct gdt_softc {int sc_state; int (* sc_get_status ) (struct gdt_softc*) ;int sc_info; int sc_status; int sc_ucmd_queue; TYPE_9__ sc_dvr; int sc_hanum; int sc_devnode; struct gdt_ccb* sc_gccbs; int sc_info2; int sc_service; int (* sc_intr ) (struct gdt_softc*,struct gdt_intr_ctx*) ;int sc_lock; } ;
struct gdt_intr_ctx {int istatus; int service; int info2; int info; int cmd_status; } ;
struct gdt_ccb {int gc_flags; int gc_scratch; TYPE_7__* gc_ucmd; int gc_service; } ;
struct TYPE_15__ {int sdlen; int sense_len; } ;
struct TYPE_14__ {int BlockCnt; } ;
struct TYPE_13__ {int param_size; } ;
struct TYPE_16__ {TYPE_5__ raw; TYPE_4__ cache; TYPE_3__ ioctl; } ;
struct TYPE_17__ {int data; TYPE_6__ u; int OpCode; int service; int complete_flag; int info; int status; } ;
typedef TYPE_7__ gdt_ucmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,TYPE_7__*,int ) ;
 int VAR_14 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gdt_softc*,int ) ;
 int FUNC_5 (struct gdt_softc*,struct gdt_ccb*) ;
 int FUNC_6 (struct gdt_softc*) ;
 int FUNC_7 (int ,int,TYPE_9__*) ;
 int FUNC_8 (struct gdt_softc*,int ,int,struct gdt_ccb*) ;
 int VAR_15 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct gdt_softc*) ;
 int FUNC_11 (struct gdt_softc*,struct gdt_intr_ctx*) ;
 int FUNC_12 (TYPE_7__*) ;

int
FUNC_13(struct gdt_softc *VAR_16)
{
    struct gdt_intr_ctx VAR_17;
    struct gdt_ccb *VAR_18;
    gdt_ucmd_t *VAR_19;
    u_int32_t VAR_20;

    FUNC_0(VAR_3, ("gdt_intr(%p)\n", VAR_16));

    FUNC_9(&VAR_16->sc_lock, VAR_13);


    if ((VAR_16->sc_state & VAR_7) &&
        !(VAR_16->sc_state & VAR_8))
        return (0);

    VAR_17.istatus = VAR_16->sc_get_status(VAR_16);
    if (VAR_17.istatus == 0x00) {
        VAR_16->sc_status = VAR_12;
        return (VAR_17.istatus);
    }

    VAR_16->sc_intr(VAR_16, &VAR_17);

    VAR_16->sc_status = VAR_17.cmd_status;
    VAR_16->sc_service = VAR_17.service;
    VAR_16->sc_info = VAR_17.info;
    VAR_16->sc_info2 = VAR_17.info2;

    if (VAR_17.istatus == VAR_0) {
        FUNC_4(VAR_16, VAR_17.service);
        return (VAR_17.istatus);
    }
    if (VAR_17.istatus == VAR_10) {
        FUNC_0(VAR_4,
                    ("%s: Service unknown or not initialized!\n",
       FUNC_3(VAR_16->sc_devnode)));
        VAR_16->sc_dvr.size = sizeof(VAR_16->sc_dvr.eu.driver);
        VAR_16->sc_dvr.eu.driver.ionode = VAR_16->sc_hanum;
        FUNC_7(VAR_5, 4, &VAR_16->sc_dvr);
        return (VAR_17.istatus);
    }

    VAR_18 = &VAR_16->sc_gccbs[VAR_17.istatus - 2];
    VAR_17.service = VAR_18->gc_service;

    switch (VAR_18->gc_flags) {
      case 128:
        FUNC_0(VAR_4, ("%s: Index (%d) to unused command!\n",
      FUNC_3(VAR_16->sc_devnode), VAR_17.istatus));
        VAR_16->sc_dvr.size = sizeof(VAR_16->sc_dvr.eu.driver);
        VAR_16->sc_dvr.eu.driver.ionode = VAR_16->sc_hanum;
        VAR_16->sc_dvr.eu.driver.index = VAR_17.istatus;
        FUNC_7(VAR_5, 1, &VAR_16->sc_dvr);
        FUNC_5(VAR_16, VAR_18);
 break;

      case 130:
        break;

      case 129:
        VAR_19 = VAR_18->gc_ucmd;
        if (VAR_16->sc_status == VAR_11) {
            FUNC_0(VAR_2, ("iir_intr(%p) ioctl: gccb %p busy\n",
                                      VAR_16, VAR_18));
            FUNC_1(&VAR_16->sc_ucmd_queue, VAR_19, VAR_15);
        } else {
            VAR_19->status = VAR_16->sc_status;
            VAR_19->info = VAR_16->sc_info;
            VAR_19->complete_flag = VAR_14;
            if (VAR_19->service == VAR_1) {
                if (VAR_19->OpCode == VAR_6) {
                    VAR_20 = VAR_19->u.ioctl.param_size;
                    if (VAR_20 != 0)
                        FUNC_2(VAR_18->gc_scratch, VAR_19->data, VAR_20);
                } else {
                    VAR_20 = VAR_19->u.cache.BlockCnt * VAR_9;
                    if (VAR_20 != 0)
                        FUNC_2(VAR_18->gc_scratch, VAR_19->data, VAR_20);
                }
            } else {
                VAR_20 = VAR_19->u.raw.sdlen;
                if (VAR_20 != 0)
                    FUNC_2(VAR_18->gc_scratch, VAR_19->data, VAR_20);
                if (VAR_19->u.raw.sense_len != 0)
                    FUNC_2(VAR_18->gc_scratch, VAR_19->data, VAR_20);
            }
            FUNC_5(VAR_16, VAR_18);

            FUNC_12(VAR_19);
        }
        FUNC_6(VAR_16);
        break;

      default:
        FUNC_5(VAR_16, VAR_18);
        FUNC_8(VAR_16, VAR_17.service, VAR_17.istatus, VAR_18);
        FUNC_6(VAR_16);
        break;
    }

    return (VAR_17.istatus);
}
