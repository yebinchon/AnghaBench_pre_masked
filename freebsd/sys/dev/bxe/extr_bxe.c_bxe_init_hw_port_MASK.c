
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int mf_mode; scalar_t__ path_has_ovlan; } ;
struct TYPE_4__ {TYPE_1__ mf_info; } ;
struct bxe_softc {int mtu; TYPE_2__ devinfo; int qm_cid_count; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*) ;
 scalar_t__ FUNC_7 (struct bxe_softc*) ;
 scalar_t__ FUNC_8 (struct bxe_softc*) ;
 int VAR_38 ;
 int FUNC_9 (int) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_10 (struct bxe_softc*) ;
 scalar_t__ FUNC_11 (struct bxe_softc*) ;
 scalar_t__ FUNC_12 (struct bxe_softc*) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;



 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int FUNC_13 (struct bxe_softc*,int) ;
 int FUNC_14 (struct bxe_softc*,int,int) ;
 int FUNC_15 (struct bxe_softc*) ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_16 (struct bxe_softc*,int ,int) ;
 int FUNC_17 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_18(struct bxe_softc *VAR_74)
{
    int VAR_75 = FUNC_15(VAR_74);
    int VAR_76 = VAR_75 ? VAR_65 : VAR_64;
    uint32_t VAR_77, VAR_78;
    uint32_t VAR_79;

    FUNC_0(VAR_74, VAR_38, "starting port init for port %d\n", VAR_75);

    FUNC_14(VAR_74, VAR_54 + VAR_75*4, 0);

    FUNC_16(VAR_74, VAR_12, VAR_76);
    FUNC_16(VAR_74, VAR_18, VAR_76);
    FUNC_16(VAR_74, VAR_19, VAR_76);







    if (!FUNC_4(VAR_74)) {
        FUNC_14(VAR_74, VAR_63, 1);
    }

    FUNC_16(VAR_74, VAR_1, VAR_76);
    FUNC_16(VAR_74, VAR_8, VAR_76);
    FUNC_16(VAR_74, VAR_16, VAR_76);
    FUNC_16(VAR_74, VAR_20, VAR_76);

    FUNC_16(VAR_74, VAR_22, VAR_76);
    FUNC_16(VAR_74, VAR_26, VAR_76);
    FUNC_16(VAR_74, VAR_3, VAR_76);
    FUNC_16(VAR_74, VAR_30, VAR_76);


    FUNC_17(VAR_74, VAR_74->qm_cid_count, VAR_41);

    if (FUNC_8(VAR_74)) {
        FUNC_16(VAR_74, VAR_23, VAR_76);
        FUNC_14(VAR_74, VAR_73 + VAR_75*4, 20);
        FUNC_14(VAR_74, VAR_72 + VAR_75*4, 31);
    }

    FUNC_16(VAR_74, VAR_9, VAR_76);

    FUNC_16(VAR_74, VAR_2, VAR_76);

    if (FUNC_2(VAR_74) || FUNC_3(VAR_74)) {
        if (FUNC_10(VAR_74)) {
            VAR_77 = (FUNC_1(VAR_74) ? 160 : 246);
        } else if (VAR_74->mtu > 4096) {
            if (FUNC_1(VAR_74)) {
                VAR_77 = 160;
            } else {
                VAR_79 = VAR_74->mtu;

                VAR_77 = (96 + (VAR_79 / 64) + ((VAR_79 % 64) ? 1 : 0));
            }
        } else {
            VAR_77 = (FUNC_1(VAR_74) ? 80 : 160);
        }
        VAR_78 = (VAR_77 + 56);
        FUNC_14(VAR_74, VAR_37 + VAR_75*4, VAR_77);
        FUNC_14(VAR_74, VAR_36 + VAR_75*4, VAR_78);
    }

    if (FUNC_7(VAR_74)) {
        FUNC_14(VAR_74, FUNC_15(VAR_74) ?
               VAR_35 :
               VAR_34, 40);
    }

    FUNC_16(VAR_74, VAR_17, VAR_76);
    if (FUNC_6(VAR_74)) {
        if (FUNC_11(VAR_74)) {

            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_67 :
                   VAR_66, 0xE);
            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_69 :
                   VAR_68, 0x6);
            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_71 :
                   VAR_70, 0xA);
        } else {




            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_67 :
                   VAR_66,
                   (VAR_74->devinfo.mf_info.path_has_ovlan ? 7 : 6));
        }
    }

    FUNC_16(VAR_74, VAR_24, VAR_76);
    FUNC_16(VAR_74, VAR_6, VAR_76);
    FUNC_16(VAR_74, VAR_28, VAR_76);
    FUNC_16(VAR_74, VAR_32, VAR_76);

    FUNC_16(VAR_74, VAR_25, VAR_76);
    FUNC_16(VAR_74, VAR_29, VAR_76);
    FUNC_16(VAR_74, VAR_7, VAR_76);
    FUNC_16(VAR_74, VAR_33, VAR_76);

    FUNC_16(VAR_74, VAR_27, VAR_76);
    FUNC_16(VAR_74, VAR_31, VAR_76);

    FUNC_16(VAR_74, VAR_15, VAR_76);

    if (FUNC_4(VAR_74)) {

        FUNC_14(VAR_74, VAR_62 + VAR_75*4, 0);


        FUNC_14(VAR_74, VAR_60 + VAR_75*4, (9040/16));

        FUNC_14(VAR_74, VAR_61 + VAR_75*4, (9040/16) + 553 - 22);


        FUNC_14(VAR_74, VAR_59 + VAR_75*4, 1);
        FUNC_9(50);
        FUNC_14(VAR_74, VAR_59 + VAR_75*4, 0);
    }

    if (FUNC_8(VAR_74)) {
        FUNC_16(VAR_74, VAR_21, VAR_76);
    }

    FUNC_16(VAR_74, VAR_4, VAR_76);
    FUNC_16(VAR_74, VAR_5, VAR_76);

    if (FUNC_2(VAR_74)) {
        FUNC_14(VAR_74, VAR_39 + VAR_75*8, 0);
        FUNC_14(VAR_74, VAR_40 + VAR_75*8, 0);
    }
    FUNC_16(VAR_74, VAR_10, VAR_76);

    FUNC_16(VAR_74, VAR_11, VAR_76);

    FUNC_16(VAR_74, VAR_13, VAR_76);




    VAR_79 = FUNC_10(VAR_74) ? 0xF7 : 0x7;

    VAR_79 |= FUNC_2(VAR_74) ? 0 : 0x10;
    FUNC_14(VAR_74, VAR_44 + VAR_75*4, VAR_79);

    FUNC_16(VAR_74, VAR_14, VAR_76);

    if (!FUNC_4(VAR_74)) {



        if (FUNC_11(VAR_74)) {
            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_56 :
                   VAR_55, 0xE);
        } else {
            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_56 :
                   VAR_55,
                   FUNC_12(VAR_74) ? 7 : 6);
        }

        if (FUNC_5(VAR_74)) {
            FUNC_14(VAR_74, FUNC_15(VAR_74) ?
                   VAR_52 :
                   VAR_53, FUNC_10(VAR_74));
        }
    }
    if (!FUNC_5(VAR_74)) {
        FUNC_14(VAR_74, VAR_58 + VAR_75*4, 1);
    }

    if (!FUNC_2(VAR_74)) {

        FUNC_14(VAR_74, VAR_49 + VAR_75*4,
               (FUNC_12(VAR_74) ? 0x1 : 0x2));

        if (!FUNC_4(VAR_74)) {
            VAR_79 = 0;
            switch (VAR_74->devinfo.mf_info.mf_mode) {
            case 129:
                VAR_79 = 1;
                break;
            case 128:
            case 130:
                VAR_79 = 2;
                break;
            }

            FUNC_14(VAR_74, (FUNC_15(VAR_74) ? VAR_51 :
                        VAR_50), VAR_79);
        }
        FUNC_14(VAR_74, VAR_47 + VAR_75*4, 0);
        FUNC_14(VAR_74, VAR_48 + VAR_75*4, 0);
        FUNC_14(VAR_74, VAR_57 + VAR_75*4, 1);
    }


    VAR_79 = FUNC_13(VAR_74, VAR_45);
    if (VAR_79 & VAR_46) {
        uint32_t VAR_80 = (VAR_75 ? VAR_43 :
                                    VAR_42);
        VAR_79 = FUNC_13(VAR_74, VAR_80);
        VAR_79 |= VAR_0;
        FUNC_14(VAR_74, VAR_80, VAR_79);
    }

    return (0);
}
