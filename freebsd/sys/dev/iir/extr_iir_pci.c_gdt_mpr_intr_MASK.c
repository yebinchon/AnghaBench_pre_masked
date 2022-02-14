
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {scalar_t__* event_string; void* severity; } ;
struct gdt_softc {int sc_fw_vers; int sc_dpmem; TYPE_1__ sc_dvr; } ;
struct gdt_intr_ctx {int istatus; scalar_t__ service; void* info2; void* info; void* cmd_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 void* FUNC_1 (int ,scalar_t__) ;
 void* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;

void
FUNC_5(struct gdt_softc *VAR_11, struct gdt_intr_ctx *VAR_12)
{
    int VAR_13;

    FUNC_0(VAR_1, ("gdt_mpr_intr(%p) ", VAR_11));

    FUNC_4(VAR_11->sc_dpmem, VAR_3, 0xff);

    if (VAR_12->istatus & 0x80) {
        VAR_12->istatus &= ~0x80;
        VAR_12->cmd_status = FUNC_2(VAR_11->sc_dpmem, VAR_7);
    } else
        VAR_12->cmd_status = VAR_10;

    VAR_12->info = FUNC_3(VAR_11->sc_dpmem, VAR_4);
    VAR_12->service = FUNC_2(VAR_11->sc_dpmem, VAR_6);
    VAR_12->info2 = FUNC_3(VAR_11->sc_dpmem, VAR_4 + sizeof (u_int32_t));


    if (VAR_12->istatus == VAR_0) {
        if (VAR_12->service != VAR_8 &&
            (VAR_11->sc_fw_vers & 0xff) >= 0x1a) {
            VAR_11->sc_dvr.severity = FUNC_1(VAR_11->sc_dpmem, VAR_9);
            for (VAR_13 = 0; VAR_13 < 256; ++VAR_13) {
                VAR_11->sc_dvr.event_string[VAR_13] = FUNC_1(VAR_11->sc_dpmem,
      VAR_2 + VAR_13);
                if (VAR_11->sc_dvr.event_string[VAR_13] == 0)
                    break;
            }
        }
    }
    FUNC_4(VAR_11->sc_dpmem, VAR_5, 0);
}
