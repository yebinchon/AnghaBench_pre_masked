
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int board_flags; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct bwn_nphy_gain_ctl_workaround_entry {int* lna1_gain; int* lna2_gain; int* gain_db; int* gain_bits; int init_gain; int* rfseq_init; int cliphi_gain; int clipmd_gain; int cliplo_gain; int nbclip; int wlclip; int crsminu; int crsminl; int crsmin; } ;
struct TYPE_4__ {int rev; } ;
struct bwn_mac {TYPE_2__ mac_phy; struct bwn_softc* mac_sc; } ;


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
 int VAR_34 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int,int ) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (struct bwn_mac*,int,int) ;
 struct bwn_nphy_gain_ctl_workaround_entry* FUNC_7 (struct bwn_mac*,int,int) ;
 int FUNC_8 (struct bwn_mac*,int ,int,int*) ;

__attribute__((used)) static void FUNC_9(struct bwn_mac *VAR_35)
{
 struct bwn_softc *VAR_36 = VAR_35->mac_sc;
 bool VAR_37;
 bool VAR_38;
 uint16_t VAR_39;
 struct bwn_nphy_gain_ctl_workaround_entry *VAR_40;
 uint8_t VAR_41[6] = { 0x00, 0x06, 0x0C, 0x12, 0x12, 0x12 };
 uint8_t VAR_42[6] = { 0, 1, 2, 3, 3, 3 };


 VAR_37 = FUNC_2(VAR_35, VAR_10)
  & VAR_11;
 VAR_38 = VAR_37 ? VAR_36->sc_board_info.board_flags & VAR_9 :
  VAR_36->sc_board_info.board_flags & VAR_8;
 VAR_40 = FUNC_7(VAR_35, VAR_37, VAR_38);
 if (VAR_37 && VAR_35->mac_phy.rev >= 5)
  VAR_39 = 0x90;
 else
  VAR_39 = 0x50;

 FUNC_3(VAR_35, VAR_34, 0x0040);


 FUNC_3(VAR_35, VAR_12, VAR_13);
 FUNC_3(VAR_35, VAR_17, VAR_18);

 FUNC_6(VAR_35, VAR_0 | VAR_3,
   0x17);
 FUNC_6(VAR_35, VAR_1 | VAR_3,
   0x17);
 FUNC_6(VAR_35, VAR_0 | VAR_5, 0xF0);
 FUNC_6(VAR_35, VAR_1 | VAR_5, 0xF0);
 FUNC_6(VAR_35, VAR_0 | VAR_7, 0x00);
 FUNC_6(VAR_35, VAR_1 | VAR_7, 0x00);
 FUNC_6(VAR_35, VAR_0 | VAR_6,
   VAR_39);
 FUNC_6(VAR_35, VAR_1 | VAR_6,
   VAR_39);
 FUNC_6(VAR_35, VAR_0 | VAR_2,
   0x17);
 FUNC_6(VAR_35, VAR_1 | VAR_2,
   0x17);
 FUNC_6(VAR_35, VAR_0 | VAR_4, 0xFF);
 FUNC_6(VAR_35, VAR_1 | VAR_4, 0xFF);

 FUNC_8(VAR_35, FUNC_1(0, 8), 4, VAR_40->lna1_gain);
 FUNC_8(VAR_35, FUNC_1(1, 8), 4, VAR_40->lna1_gain);
 FUNC_8(VAR_35, FUNC_1(0, 16), 4, VAR_40->lna2_gain);
 FUNC_8(VAR_35, FUNC_1(1, 16), 4, VAR_40->lna2_gain);
 FUNC_8(VAR_35, FUNC_1(0, 32), 10, VAR_40->gain_db);
 FUNC_8(VAR_35, FUNC_1(1, 32), 10, VAR_40->gain_db);
 FUNC_8(VAR_35, FUNC_1(2, 32), 10, VAR_40->gain_bits);
 FUNC_8(VAR_35, FUNC_1(3, 32), 10, VAR_40->gain_bits);
 FUNC_8(VAR_35, FUNC_1(0, 0x40), 6, VAR_41);
 FUNC_8(VAR_35, FUNC_1(1, 0x40), 6, VAR_41);
 FUNC_8(VAR_35, FUNC_1(2, 0x40), 6, VAR_42);
 FUNC_8(VAR_35, FUNC_1(3, 0x40), 6, VAR_42);

 FUNC_5(VAR_35, VAR_29, VAR_40->init_gain);
 FUNC_5(VAR_35, VAR_33, VAR_40->init_gain);

 FUNC_8(VAR_35, FUNC_0(7, 0x106), 2,
    VAR_40->rfseq_init);

 FUNC_5(VAR_35, VAR_26, VAR_40->cliphi_gain);
 FUNC_5(VAR_35, VAR_30, VAR_40->cliphi_gain);
 FUNC_5(VAR_35, VAR_28, VAR_40->clipmd_gain);
 FUNC_5(VAR_35, VAR_32, VAR_40->clipmd_gain);
 FUNC_5(VAR_35, VAR_27, VAR_40->cliplo_gain);
 FUNC_5(VAR_35, VAR_31, VAR_40->cliplo_gain);

 FUNC_4(VAR_35, VAR_23, 0xFF00, VAR_40->crsmin);
 FUNC_4(VAR_35, VAR_24, 0xFF00, VAR_40->crsminl);
 FUNC_4(VAR_35, VAR_25, 0xFF00, VAR_40->crsminu);
 FUNC_5(VAR_35, VAR_16, VAR_40->nbclip);
 FUNC_5(VAR_35, VAR_21, VAR_40->nbclip);
 FUNC_4(VAR_35, VAR_14,
   ~VAR_15, VAR_40->wlclip);
 FUNC_4(VAR_35, VAR_19,
   ~VAR_20, VAR_40->wlclip);
 FUNC_5(VAR_35, VAR_22, 0x809C);
}
