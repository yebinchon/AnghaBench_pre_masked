
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ecore_ilt {TYPE_4__* lines; TYPE_2__* clients; } ;
struct TYPE_6__ {scalar_t__ int_block; } ;
struct bxe_softc {scalar_t__ interrupt_mode; int dmae_ready; int igu_sb_cnt; int igu_base_sb; int igu_dsb_id; int link_params; TYPE_1__ devinfo; TYPE_5__* context; struct ecore_ilt* ilt; } ;
struct TYPE_8__ {int paddr; } ;
struct TYPE_10__ {int size; TYPE_3__ vcxt_dma; int vcxt; } ;
struct TYPE_9__ {int size; int page_mapping; int page; } ;
struct TYPE_7__ {int start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_38 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int VAR_39 ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*) ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_42 ;
 int FUNC_8 (int) ;
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
 size_t VAR_71 ;
 int VAR_72 ;
 scalar_t__ VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int FUNC_11 (struct bxe_softc*) ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int FUNC_12 (struct bxe_softc*,int) ;
 int FUNC_13 (struct bxe_softc*,int,int) ;
 int FUNC_14 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_15 (struct bxe_softc*) ;
 int FUNC_16 (struct bxe_softc*) ;
 int FUNC_17 (struct bxe_softc*) ;
 int VAR_84 ;
 int VAR_85 ;
 scalar_t__ FUNC_18 (int) ;
 int VAR_86 ;
 int VAR_87 ;
 scalar_t__ FUNC_19 (int) ;
 int VAR_88 ;
 int VAR_89 ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct bxe_softc*,int,int ,int ,int ,int) ;
 int FUNC_22 (struct bxe_softc*,int) ;
 int FUNC_23 (struct bxe_softc*) ;
 int FUNC_24 (struct bxe_softc*) ;
 int FUNC_25 (struct bxe_softc*,int,int) ;
 int FUNC_26 (struct bxe_softc*,int ,int,int) ;
 int FUNC_27 (struct bxe_softc*,int ) ;
 int FUNC_28 (struct bxe_softc*,int ,int) ;
 int FUNC_29 (int *) ;
 int VAR_90 ;

__attribute__((used)) static int
FUNC_30(struct bxe_softc *VAR_91)
{
    int VAR_92 = FUNC_16(VAR_91);
    int VAR_93 = FUNC_15(VAR_91);
    int VAR_94 = VAR_81 + VAR_93;
    struct ecore_ilt *VAR_95 = VAR_91->ilt;
    uint16_t VAR_96;
    uint32_t VAR_97, VAR_98;
    uint32_t VAR_99, VAR_100, VAR_101;
    int VAR_102, VAR_103, VAR_104;

    FUNC_0(VAR_91, VAR_42, "starting func init for func %d\n", VAR_93);


    if (!FUNC_5(VAR_91)) {
        VAR_104 = FUNC_24(VAR_91);
        if (VAR_104) {
            FUNC_1(VAR_91, "FLR cleanup failed!\n");


            return (VAR_104);
        }
    }


    if (VAR_91->devinfo.int_block == VAR_74) {
        VAR_97 = (VAR_92 ? VAR_46 : VAR_45);
        VAR_98 = FUNC_12(VAR_91, VAR_97);
        VAR_98 |= VAR_44;
        FUNC_13(VAR_91, VAR_97, VAR_98);
    }

    FUNC_28(VAR_91, VAR_22, VAR_94);
    FUNC_28(VAR_91, VAR_23, VAR_94);

    VAR_95 = VAR_91->ilt;
    VAR_96 = VAR_95->clients[VAR_71].start;

    for (VAR_102 = 0; VAR_102 < FUNC_10(VAR_91); VAR_102++) {
        VAR_95->lines[VAR_96 + VAR_102].page = VAR_91->context[VAR_102].vcxt;
        VAR_95->lines[VAR_96 + VAR_102].page_mapping =
            VAR_91->context[VAR_102].vcxt_dma.paddr;
        VAR_95->lines[VAR_96 + VAR_102].size = VAR_91->context[VAR_102].size;
    }
    FUNC_27(VAR_91, VAR_72);


    FUNC_13(VAR_91, VAR_82, 1);
    FUNC_0(VAR_91, VAR_42, "NIC MODE configured\n");

    if (!FUNC_5(VAR_91)) {
        uint32_t VAR_105 = VAR_59;




        if (VAR_91->interrupt_mode != VAR_73) {
            VAR_105 |= VAR_60;
        }







        FUNC_8(20000);






        FUNC_13(VAR_91, VAR_79, 1);

        FUNC_13(VAR_91, VAR_64, VAR_105);
    }

    VAR_91->dmae_ready = 1;

    FUNC_28(VAR_91, VAR_20, VAR_94);

    if (!FUNC_5(VAR_91))
        FUNC_13(VAR_91, VAR_80, VAR_93);

    FUNC_28(VAR_91, VAR_5, VAR_94);
    FUNC_28(VAR_91, VAR_12, VAR_94);
    FUNC_28(VAR_91, VAR_18, VAR_94);
    FUNC_28(VAR_91, VAR_25, VAR_94);
    FUNC_28(VAR_91, VAR_16, VAR_94);
    FUNC_28(VAR_91, VAR_26, VAR_94);
    FUNC_28(VAR_91, VAR_30, VAR_94);
    FUNC_28(VAR_91, VAR_7, VAR_94);
    FUNC_28(VAR_91, VAR_34, VAR_94);
    FUNC_28(VAR_91, VAR_29, VAR_94);
    FUNC_28(VAR_91, VAR_33, VAR_94);
    FUNC_28(VAR_91, VAR_11, VAR_94);
    FUNC_28(VAR_91, VAR_37, VAR_94);

    if (!FUNC_5(VAR_91))
        FUNC_13(VAR_91, VAR_83, 1);

    if (!FUNC_5(VAR_91)) {
        FUNC_13(VAR_91, VAR_84, VAR_38 + VAR_93);
        FUNC_13(VAR_91, VAR_86, VAR_38 + VAR_93);
        FUNC_13(VAR_91, VAR_40, VAR_38 + VAR_93);
        FUNC_13(VAR_91, VAR_88, VAR_38 + VAR_93);
    }
    FUNC_28(VAR_91, VAR_24, VAR_94);

    FUNC_28(VAR_91, VAR_27, VAR_94);
    FUNC_28(VAR_91, VAR_13, VAR_94);

    FUNC_23(VAR_91);

    FUNC_28(VAR_91, VAR_6, VAR_94);
    FUNC_28(VAR_91, VAR_21, VAR_94);
    FUNC_28(VAR_91, VAR_28, VAR_94);
    FUNC_28(VAR_91, VAR_10, VAR_94);
    FUNC_28(VAR_91, VAR_32, VAR_94);
    FUNC_28(VAR_91, VAR_36, VAR_94);
    FUNC_28(VAR_91, VAR_31, VAR_94);
    FUNC_28(VAR_91, VAR_35, VAR_94);
    FUNC_28(VAR_91, VAR_19, VAR_94);
    if (!FUNC_5(VAR_91))
        FUNC_13(VAR_91, VAR_78, 0);

    FUNC_28(VAR_91, VAR_8, VAR_94);

    FUNC_28(VAR_91, VAR_9, VAR_94);

    if (!FUNC_5(VAR_91))
        FUNC_13(VAR_91, VAR_39, 1);

    if (FUNC_9(VAR_91)) {
        FUNC_13(VAR_91, VAR_76 + VAR_92*8, 1);
        FUNC_13(VAR_91, VAR_77 + VAR_92*8, FUNC_11(VAR_91));
    }

    FUNC_28(VAR_91, VAR_17, VAR_94);


    if (VAR_91->devinfo.int_block == VAR_74) {
        if (FUNC_4(VAR_91)) {
            FUNC_13(VAR_91, VAR_75 + VAR_93*4, 0);

            FUNC_13(VAR_91, VAR_48 + VAR_92*8, 0);
            FUNC_13(VAR_91, VAR_51 + VAR_92*8, 0);
        }
        FUNC_28(VAR_91, VAR_14, VAR_94);

    } else {
        int VAR_106, VAR_107, VAR_108;

        FUNC_13(VAR_91, VAR_75 + VAR_93*4, 0);

        if (!FUNC_5(VAR_91)) {
            FUNC_13(VAR_91, VAR_61, 0);
            FUNC_13(VAR_91, VAR_70, 0);
        }

        FUNC_28(VAR_91, VAR_15, VAR_94);

        if (!FUNC_5(VAR_91)) {
            int VAR_109 = 0;
            VAR_106 = FUNC_3(VAR_91) ?
                VAR_54 : VAR_58;
            for (VAR_107 = 0; VAR_107 < VAR_91->igu_sb_cnt; VAR_107++) {
                VAR_108 = (VAR_91->igu_base_sb + VAR_107) *
                    VAR_106;

                for (VAR_102 = 0; VAR_102 < VAR_106; VAR_102++) {
                    VAR_97 = VAR_65 +
                            (VAR_108 + VAR_102) * 4;
                    FUNC_13(VAR_91, VAR_97, 0);
                }

                FUNC_21(VAR_91, VAR_91->igu_base_sb + VAR_107,
                           VAR_87, 0, VAR_55, 1);
                FUNC_22(VAR_91, VAR_91->igu_base_sb + VAR_107);
            }


            VAR_106 = FUNC_3(VAR_91) ?
                VAR_53 : VAR_57;

            if (FUNC_6(VAR_91))
                VAR_109 = FUNC_15(VAR_91);
            else
                VAR_109 = FUNC_17(VAR_91);

            VAR_108 = (FUNC_3(VAR_91) ?
                       VAR_52 + VAR_109 :
                       VAR_56 + VAR_109);





            for (VAR_102 = 0; VAR_102 < (VAR_106 * VAR_43);
                 VAR_102 += VAR_43) {
                VAR_97 = VAR_65 +
                            (VAR_108 + VAR_102)*4;
                FUNC_13(VAR_91, VAR_97, 0);
            }

            if (FUNC_3(VAR_91)) {
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_87, 0, VAR_55, 1);
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_41, 0, VAR_55, 1);
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_89, 0, VAR_55, 1);
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_85, 0, VAR_55, 1);
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_0, 0, VAR_55, 1);
            } else {
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_87, 0, VAR_55, 1);
                FUNC_21(VAR_91, VAR_91->igu_dsb_id,
                           VAR_0, 0, VAR_55, 1);
            }
            FUNC_22(VAR_91, VAR_91->igu_dsb_id);



            FUNC_13(VAR_91, VAR_66, 0);
            FUNC_13(VAR_91, VAR_67, 0);
            FUNC_13(VAR_91, VAR_68, 0);
            FUNC_13(VAR_91, VAR_69, 0);
            FUNC_13(VAR_91, VAR_62, 0);
            FUNC_13(VAR_91, VAR_63, 0);
        }
    }


    FUNC_13(VAR_91, 0x2114, 0xffffffff);
    FUNC_13(VAR_91, 0x2120, 0xffffffff);

    if (FUNC_5(VAR_91)) {
        VAR_100 = VAR_50 / 2;
        VAR_99 = VAR_49 +
                FUNC_16(VAR_91) * (VAR_100 * 4);
        VAR_101 = VAR_47;
        VAR_103 = 8;

        VAR_98 = FUNC_12(VAR_91, VAR_101);
        if (VAR_98) {
            FUNC_0(VAR_91, VAR_42,
                  "Parity errors in HC block during function init (0x%x)!\n",
                  VAR_98);
        }


        for (VAR_102 = VAR_99;
             VAR_102 < VAR_99 + VAR_100 * 4;
             VAR_102 += VAR_103) {
            FUNC_25(VAR_91, VAR_102, VAR_103 / 4);
            FUNC_26(VAR_91, FUNC_2(VAR_91, VAR_90),
                           VAR_102, VAR_103 / 4);
        }

        FUNC_12(VAR_91, VAR_101);
    }



    FUNC_14(VAR_91, VAR_3 +
           FUNC_19(FUNC_15(VAR_91)), 1);
    FUNC_14(VAR_91, VAR_2 +
           FUNC_18(FUNC_15(VAR_91)), 1);
    FUNC_14(VAR_91, VAR_1 +
           FUNC_7(FUNC_15(VAR_91)), 1);
    FUNC_14(VAR_91, VAR_4 +
           FUNC_20(FUNC_15(VAR_91)), 1);


    FUNC_29(&VAR_91->link_params);

    return (0);
}
