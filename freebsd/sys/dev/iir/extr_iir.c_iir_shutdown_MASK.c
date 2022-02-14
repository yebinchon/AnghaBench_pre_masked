
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gdt_softc {int sc_lock; int sc_ucmd_queue; TYPE_1__* sc_hdr; int sc_pending_gccb; int sc_state; int sc_devnode; } ;
struct TYPE_5__ {int DeviceNo; } ;
struct TYPE_6__ {TYPE_2__ cache; } ;
struct gdt_ccb {int complete_flag; TYPE_3__ u; int OpCode; int service; } ;
typedef struct gdt_ccb gdt_ucmd_t ;
struct TYPE_4__ {scalar_t__ hd_present; } ;


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
 struct gdt_ccb* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct gdt_ccb*,int ) ;
 int FUNC_3 (struct gdt_ccb*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct gdt_ccb*,int ) ;
 int FUNC_6 (struct gdt_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct gdt_ccb* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct gdt_ccb*,int *,int,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12( void *VAR_13, int VAR_14 )
{
    struct gdt_softc *VAR_15;
    struct gdt_ccb *VAR_16;
    gdt_ucmd_t *VAR_17;
    int VAR_18;

    VAR_15 = (struct gdt_softc *)VAR_13;
    FUNC_0(VAR_2, ("iir_shutdown(%p, %d)\n", VAR_15, VAR_14));

    FUNC_4(VAR_15->sc_devnode,
 "Flushing all Host Drives. Please wait ...  ");


    VAR_17 = FUNC_7(sizeof(gdt_ucmd_t), VAR_7, VAR_8);
    if (VAR_17 == ((void*)0)) {
 FUNC_11("\n");
        FUNC_4(VAR_15->sc_devnode,
     "iir_shutdown(): Cannot allocate resource\n");
        return;
    }
    FUNC_3(VAR_17, sizeof(gdt_ucmd_t));


    FUNC_8(&VAR_15->sc_lock);
    VAR_15->sc_state = VAR_5;
    if ((VAR_16 = FUNC_1(&VAR_15->sc_pending_gccb)) != ((void*)0))
        FUNC_9(VAR_16, &VAR_15->sc_lock, VAR_9 | VAR_10, "iirshw", 100 * VAR_11);


    for (VAR_18 = 0; VAR_18 < VAR_4; ++VAR_18) {
        if (VAR_15->sc_hdr[VAR_18].hd_present) {
            VAR_17->service = VAR_1;
            VAR_17->OpCode = VAR_3;
            VAR_17->u.cache.DeviceNo = VAR_18;
            FUNC_2(&VAR_15->sc_ucmd_queue, VAR_17, VAR_12);
            VAR_17->complete_flag = VAR_0;
            FUNC_6(VAR_15);
            if (!VAR_17->complete_flag)
                FUNC_9(VAR_17, &VAR_15->sc_lock, VAR_9 | VAR_10, "iirshw",
      10 * VAR_11);
        }
    }
    FUNC_10(&VAR_15->sc_lock);

    FUNC_5(VAR_17, VAR_6);
    FUNC_11("Done.\n");
}
