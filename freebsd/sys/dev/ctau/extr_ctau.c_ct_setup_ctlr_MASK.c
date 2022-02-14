
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_6__ {scalar_t__ cas; scalar_t__ higain; scalar_t__ crc4; scalar_t__ hdb3; } ;
struct TYPE_8__ {scalar_t__ num; TYPE_1__ gopt; TYPE_4__* board; } ;
typedef TYPE_3__ ct_chan_t ;
struct TYPE_7__ {scalar_t__ cfg; long s1; long s0; long s2; } ;
struct TYPE_9__ {TYPE_2__ opt; int port; } ;
typedef TYPE_4__ ct_board_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_37 ;
 int VAR_38 ;
 unsigned char VAR_39 ;
 unsigned char VAR_40 ;
 unsigned char VAR_41 ;
 unsigned char VAR_42 ;
 unsigned char VAR_43 ;
 unsigned char VAR_44 ;
 unsigned char VAR_45 ;
 unsigned char VAR_46 ;
 unsigned char VAR_47 ;
 unsigned char VAR_48 ;
 unsigned char VAR_49 ;
 unsigned char VAR_50 ;
 unsigned char VAR_51 ;
 unsigned char VAR_52 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,unsigned char) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (ct_chan_t *VAR_53)
{
 ct_board_t *VAR_54 = VAR_53->board;
 port_t VAR_55 = VAR_53->num ? FUNC_1 (VAR_54->port) : FUNC_0 (VAR_54->port);
 unsigned char VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61;
 unsigned long VAR_62, VAR_63;
 int VAR_64;

 VAR_57 = VAR_45;
 VAR_58 = VAR_49 | VAR_50;
 VAR_59 = 0;
 VAR_60 = 0;
 VAR_61 = 0;

 if (VAR_54->opt.cfg != VAR_14) {

  VAR_57 |= VAR_46;
  VAR_59 |= VAR_52;
 }
 if (VAR_54->opt.cfg == VAR_11) {
  VAR_56 = VAR_43;
 } else {
  VAR_56 = VAR_42;
  VAR_57 |= VAR_44;
 }

 if (VAR_53->gopt.cas)
  VAR_58 |= VAR_48;
 else
  VAR_60 |= VAR_0;

 if (VAR_53->gopt.hdb3)
  VAR_60 |= VAR_4 | VAR_2;

 if (VAR_53->gopt.crc4) {
  VAR_60 |= VAR_3 | VAR_1;
  VAR_59 |= VAR_51;
 }

 if (VAR_53->gopt.higain)
  VAR_61 |= VAR_39;
 if (FUNC_5 (FUNC_2 (VAR_54->port)) & (VAR_53->num ? VAR_38 : VAR_37))
  VAR_61 |= VAR_40;
 else
  VAR_61 |= VAR_41;

 FUNC_4 (VAR_55, VAR_22, VAR_56);
 FUNC_4 (VAR_55, VAR_23, VAR_57);
 FUNC_4 (VAR_55, VAR_29, VAR_58);
 FUNC_4 (VAR_55, VAR_30, VAR_59);
 FUNC_4 (VAR_55, VAR_15, VAR_60);
 FUNC_4 (VAR_55, VAR_16, VAR_6 | VAR_5 | VAR_7);
 FUNC_4 (VAR_55, VAR_17, VAR_10);
 FUNC_4 (VAR_55, VAR_20, VAR_61);
 FUNC_4 (VAR_55, VAR_18, 0);
 FUNC_4 (VAR_55, VAR_19, VAR_47);
 FUNC_4 (VAR_55, VAR_31, 0);
 FUNC_4 (VAR_55, VAR_32, 0);
 FUNC_4 (VAR_55, VAR_27, 0x9b);
 FUNC_4 (VAR_55, VAR_35, 0xdf);
 FUNC_4 (VAR_55, VAR_33, 0xff);

 FUNC_4 (VAR_55, VAR_36, 0x0b);
 for (VAR_64=1; VAR_64<16; ++VAR_64)

  FUNC_4 (VAR_55, (unsigned char) (VAR_36+VAR_64), 0xff);
 if (VAR_54->opt.cfg == VAR_12)
  VAR_54->opt.s1 = 0;
 else if (VAR_54->opt.cfg == VAR_13)
  VAR_54->opt.s1 &=~ VAR_54->opt.s0;
 if (VAR_53->gopt.cas) {

  VAR_54->opt.s0 &=~ (1L << 16);
  VAR_54->opt.s1 &=~ (1L << 16);
 }
 VAR_54->opt.s2 &=~ VAR_54->opt.s0;
 VAR_54->opt.s2 &=~ VAR_54->opt.s1;
 VAR_62 = VAR_53->num ? VAR_54->opt.s1 : VAR_54->opt.s0;
 if (VAR_54->opt.cfg == VAR_11)
  VAR_63 = ~VAR_62;
 else if (VAR_54->opt.cfg == VAR_14)
  VAR_63 = 0;
 else if (VAR_53->num == 0)
  VAR_63 = ~(VAR_54->opt.s0 | VAR_54->opt.s1 | VAR_54->opt.s2);
 else
  VAR_63 = ~VAR_54->opt.s2;


 FUNC_4 (VAR_55, VAR_34, (unsigned char) (VAR_63 & 0xfe));
 FUNC_4 (VAR_55, VAR_34+1, (unsigned char) (VAR_63 >> 8));
 FUNC_4 (VAR_55, VAR_34+2, (unsigned char) (VAR_63 >> 16));
 FUNC_4 (VAR_55, VAR_34+3, (unsigned char) (VAR_63 >> 24));


 FUNC_4 (VAR_55, VAR_21, (unsigned char) (VAR_62 & 0xfe));
 FUNC_4 (VAR_55, VAR_21+1, (unsigned char) (VAR_62 >> 8));
 FUNC_4 (VAR_55, VAR_21+2, (unsigned char) (VAR_62 >> 16));
 FUNC_4 (VAR_55, VAR_21+3, (unsigned char) (VAR_62 >> 24));
 FUNC_4 (VAR_55, VAR_28, (unsigned char) (VAR_62 & 0xfe));
 FUNC_4 (VAR_55, VAR_28+1, (unsigned char) (VAR_62 >> 8));
 FUNC_4 (VAR_55, VAR_28+2, (unsigned char) (VAR_62 >> 16));
 FUNC_4 (VAR_55, VAR_28+3, (unsigned char) (VAR_62 >> 24));


 FUNC_4 (VAR_55, VAR_17, VAR_10 | VAR_9);
 FUNC_4 (VAR_55, VAR_17, VAR_10);


 FUNC_4 (VAR_55, VAR_17, VAR_10 | VAR_8);
 FUNC_4 (VAR_55, VAR_17, VAR_10);


 FUNC_3 (VAR_55, VAR_25, 0xff);
 FUNC_3 (VAR_55, VAR_26, 0xff);
 FUNC_3 (VAR_55, VAR_24, 0xff);
}
