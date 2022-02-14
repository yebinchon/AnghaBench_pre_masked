
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct resource {int dummy; } ;
struct gdt_softc {int sc_ic_all_size; int sc_lock; struct resource* sc_dpmem; scalar_t__ sc_init_level; int sc_parent_dmat; int sc_test_busy; int sc_set_sema0; int sc_release_event; int sc_intr; int sc_get_status; int sc_copy_cmd; int sc_class; int sc_subdevice; int sc_device; int sc_vendor; int sc_slot; int sc_bus; int sc_hanum; int sc_devnode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct resource*,scalar_t__) ;
 int FUNC_5 (struct resource*,scalar_t__) ;
 int FUNC_6 (int ,int ,int,struct resource*) ;
 int FUNC_7 (struct resource*,int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,struct resource*,int,int *,int ,struct gdt_softc*,void**) ;
 int FUNC_9 (struct resource*,scalar_t__,int) ;
 int FUNC_10 (struct resource*,scalar_t__,int ) ;
 int VAR_28 ;
 struct gdt_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_14 (struct gdt_softc*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct gdt_softc*) ;
 int FUNC_17 (struct gdt_softc*) ;
 scalar_t__ FUNC_18 (struct gdt_softc*) ;
 int VAR_35 ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*,int *,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct resource*) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_36)
{
    struct gdt_softc *VAR_37;
    struct resource *VAR_38 = ((void*)0);
    int VAR_39, VAR_40, VAR_41 = 0;
    void *VAR_42;
    u_int8_t VAR_43;

    VAR_37 = FUNC_11(VAR_36);
    FUNC_21(&VAR_37->sc_lock, "iir", ((void*)0), VAR_22);


    VAR_40 = VAR_23;
    VAR_37->sc_dpmem = FUNC_1(VAR_36, VAR_27, &VAR_40, VAR_24);
    if (VAR_37->sc_dpmem == ((void*)0)) {
        FUNC_13(VAR_36, "can't allocate register resources\n");
        VAR_41 = VAR_4;
        goto err;
    }


    VAR_40 = 0;
    VAR_38 = FUNC_1(VAR_36, VAR_26, &VAR_40,
                                 VAR_24 | VAR_25);
    if (VAR_38 == ((void*)0)) {
        FUNC_13(VAR_36, "can't find IRQ value\n");
        VAR_41 = VAR_4;
        goto err;
    }

    VAR_37->sc_devnode = VAR_36;
    VAR_37->sc_init_level = 0;
    VAR_37->sc_hanum = FUNC_12(VAR_36);
    VAR_37->sc_bus = FUNC_22(VAR_36);
    VAR_37->sc_slot = FUNC_24(VAR_36);
    VAR_37->sc_vendor = FUNC_26(VAR_36);
    VAR_37->sc_device = FUNC_23(VAR_36);
    VAR_37->sc_subdevice = FUNC_25(VAR_36);
    VAR_37->sc_class = VAR_9;







    FUNC_10(VAR_37->sc_dpmem, VAR_11, FUNC_15(VAR_13));
    if (FUNC_5(VAR_37->sc_dpmem, VAR_11) != FUNC_15(VAR_13)) {
 FUNC_13(VAR_36, "cannot access DPMEM at 0x%jx (shadowed?)\n",
     FUNC_27(VAR_37->sc_dpmem));
        VAR_41 = VAR_5;
        goto err;
    }
    FUNC_7(VAR_37->sc_dpmem, VAR_8, FUNC_15(0), VAR_14 >> 2);


    FUNC_9(VAR_37->sc_dpmem, VAR_7,
 FUNC_4(VAR_37->sc_dpmem, VAR_7) | 4);
    FUNC_9(VAR_37->sc_dpmem, VAR_10, 0xff);
    FUNC_9(VAR_37->sc_dpmem, VAR_11 + VAR_19, 0);
    FUNC_9(VAR_37->sc_dpmem, VAR_11 + VAR_6, 0);

    FUNC_10(VAR_37->sc_dpmem, VAR_11 + VAR_18,
 FUNC_15(FUNC_27(VAR_37->sc_dpmem)));
    FUNC_9(VAR_37->sc_dpmem, VAR_11 + VAR_17, 0xff);
    FUNC_9(VAR_37->sc_dpmem, VAR_12, 1);

    FUNC_0(20);
    VAR_39 = VAR_16;
    while (FUNC_4(VAR_37->sc_dpmem, VAR_11 + VAR_19) != 0xff) {
        if (--VAR_39 == 0) {
            FUNC_13(VAR_36, "DEINIT failed\n");
            VAR_41 = VAR_5;
            goto err;
        }
        FUNC_0(1);
    }

    VAR_43 = (uint8_t)FUNC_19(FUNC_5(VAR_37->sc_dpmem,
     VAR_11 + VAR_18));
    FUNC_9(VAR_37->sc_dpmem, VAR_11 + VAR_19, 0);
    if (VAR_43 != VAR_15) {
        FUNC_13(VAR_36, "unsupported protocol %d\n", VAR_43);
        VAR_41 = VAR_5;
        goto err;
    }


    FUNC_10(VAR_37->sc_dpmem, VAR_11 + VAR_18, FUNC_15(0));
    FUNC_10(VAR_37->sc_dpmem, VAR_11 + VAR_18 + sizeof (u_int32_t),
 FUNC_15(0));
    FUNC_10(VAR_37->sc_dpmem, VAR_11 + VAR_18 + 2 * sizeof (u_int32_t),
 FUNC_15(1));
    FUNC_10(VAR_37->sc_dpmem, VAR_11 + VAR_18 + 3 * sizeof (u_int32_t),
 FUNC_15(0));
    FUNC_9(VAR_37->sc_dpmem, VAR_11 + VAR_17, 0xfe);
    FUNC_9(VAR_37->sc_dpmem, VAR_12, 1);

    FUNC_0(20);
    VAR_39 = VAR_16;
    while (FUNC_4(VAR_37->sc_dpmem, VAR_11 + VAR_19) != 0xfe) {
        if (--VAR_39 == 0) {
            FUNC_13(VAR_36, "initialization error\n");
            VAR_41 = VAR_5;
            goto err;
        }
        FUNC_0(1);
    }

    FUNC_9(VAR_37->sc_dpmem, VAR_11 + VAR_19, 0);

    VAR_37->sc_ic_all_size = VAR_14;

    VAR_37->sc_copy_cmd = VAR_29;
    VAR_37->sc_get_status = VAR_30;
    VAR_37->sc_intr = VAR_31;
    VAR_37->sc_release_event = VAR_32;
    VAR_37->sc_set_sema0 = VAR_33;
    VAR_37->sc_test_busy = VAR_34;


    if (FUNC_2( FUNC_3(VAR_36),
                                        1, 0,
                                      VAR_1,
                                       VAR_0,
                                     ((void*)0), ((void*)0),
                                      VAR_2,
                   VAR_3,
                                       VAR_2,
               0, VAR_28,
                 &VAR_37->sc_lock, &VAR_37->sc_parent_dmat) != 0) {
        VAR_41 = VAR_5;
        goto err;
    }
    VAR_37->sc_init_level++;

    if (FUNC_18(VAR_37) != 0) {
        FUNC_17(VAR_37);
        VAR_41 = VAR_5;
        goto err;
    }


    FUNC_16(VAR_37);


    if (FUNC_8(VAR_36, VAR_38, VAR_21 | VAR_20,
                        ((void*)0), VAR_35, VAR_37, &VAR_42 )) {
        FUNC_13(VAR_36, "Unable to register interrupt handler\n");
        VAR_41 = VAR_5;
        goto err;
    }

    FUNC_14(VAR_37);
    return (0);

err:
    if (VAR_38)
        FUNC_6( VAR_36, VAR_26, 0, VAR_38 );

    if (VAR_37->sc_dpmem)
        FUNC_6( VAR_36, VAR_27, VAR_40, VAR_37->sc_dpmem );
    FUNC_20(&VAR_37->sc_lock);

    return (VAR_41);
}
