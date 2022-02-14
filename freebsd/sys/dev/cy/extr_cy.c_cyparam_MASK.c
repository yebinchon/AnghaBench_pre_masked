
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
struct tty {scalar_t__ t_ospeed; int t_state; struct com_s* t_sc; } ;
struct termios {scalar_t__ c_ispeed; scalar_t__ c_ospeed; int c_cflag; int* c_cc; int c_iflag; int c_lflag; int c_oflag; } ;
struct com_s {int channel_control; int* cor; int state; int last_modem_status; int intr_enable; int * ibufold; int mcr_rts; int mcr_image; int mcr_rts_reg; int gfrcr_image; } ;


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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_61 ;
 int VAR_62 ;



 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_2 (int ) ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 size_t VAR_92 ;
 size_t VAR_93 ;
 size_t VAR_94 ;
 size_t VAR_95 ;
 size_t VAR_96 ;
 size_t VAR_97 ;
 int VAR_98 ;
 int FUNC_3 (struct com_s*,int) ;
 int FUNC_4 (struct com_s*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct com_s*) ;
 int FUNC_8 (struct tty*,int ,int ) ;
 int FUNC_9 (struct com_s*,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int*) ;
 int FUNC_11 (struct tty*) ;
 int FUNC_12 (struct tty*,struct termios*,struct com_s*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17(struct tty *VAR_99, struct termios *VAR_100)
{
 int VAR_101;
 int VAR_102;
 struct com_s *VAR_103;
 u_char VAR_104;
 u_long VAR_105;
 int VAR_106;
 int VAR_107;
 int VAR_108;
 int VAR_109;
 int VAR_110;
 int VAR_111;
 u_char VAR_112;
 int VAR_113;

 VAR_103 = VAR_99->t_sc;


 VAR_105 = FUNC_2(VAR_103->gfrcr_image);
 VAR_106 = FUNC_10(VAR_100->c_ispeed, VAR_105, &VAR_108);
 if (VAR_106 <= 0)
  return (VAR_70);
 VAR_110 = FUNC_10(VAR_100->c_ospeed != 0 ? VAR_100->c_ospeed : VAR_99->t_ospeed,
       VAR_105, &VAR_111);
 if (VAR_110 <= 0)
  return (VAR_70);


 VAR_113 = FUNC_15();
 if (VAR_100->c_ospeed == 0)
  (void)FUNC_8(VAR_99, 0, VAR_90);
 else
  (void)FUNC_8(VAR_99, VAR_90, 0);

 (void) FUNC_9(VAR_103, VAR_100->c_ispeed);



 FUNC_4(VAR_103, VAR_49, VAR_106);
 FUNC_4(VAR_103, VAR_50, VAR_108);
 FUNC_4(VAR_103, VAR_59, VAR_110);
 FUNC_4(VAR_103, VAR_60, VAR_111);






 VAR_102 = VAR_100->c_cflag;
 VAR_112 = VAR_2 | VAR_9
       | (VAR_102 & VAR_61 ? VAR_8 : VAR_7);
 if (VAR_112 != VAR_103->channel_control) {
  VAR_103->channel_control = VAR_112;
  FUNC_3(VAR_103, VAR_112);
 }
 VAR_112 = 0;

 if (VAR_102 & VAR_86) {
  if (VAR_102 & VAR_88)
   VAR_112 |= VAR_17;
  VAR_112 |= VAR_16;
 }
 VAR_107 = VAR_100->c_iflag;
 if (!(VAR_107 & VAR_78))
  VAR_112 |= VAR_15;
 VAR_101 = 1 + 1;

 if (VAR_102 & VAR_64) {
  ++VAR_101;
  VAR_112 |= VAR_18;
 }

 switch (VAR_102 & VAR_63) {
 case 130:
  VAR_101 += 5;
  VAR_112 |= VAR_11;
  break;
 case 129:
  VAR_101 += 6;
  VAR_112 |= VAR_12;
  break;
 case 128:
  VAR_101 += 7;
  VAR_112 |= VAR_13;
  break;
 default:
  VAR_101 += 8;
  VAR_112 |= VAR_14;
  break;
 }
 VAR_104 = 0;
 if (VAR_112 != VAR_103->cor[0]) {
  VAR_104 |= VAR_4;
  FUNC_4(VAR_103, VAR_10, VAR_103->cor[0] = VAR_112);
 }




 VAR_109 = FUNC_14(1000 * VAR_101, VAR_100->c_ispeed);





 if (VAR_109 < 5)
  VAR_109 = 5;
 if (!(VAR_100->c_lflag & VAR_71) && VAR_100->c_cc[VAR_93] != 0 && VAR_100->c_cc[VAR_97] != 0
     && VAR_100->c_cc[VAR_97] * 10 > VAR_109)
  VAR_109 = VAR_100->c_cc[VAR_97] * 10;
 if (VAR_109 > 255)
  VAR_109 = 255;
 FUNC_4(VAR_103, VAR_51, VAR_109);





 VAR_112 = 0;







 if (VAR_102 & VAR_1)
  VAR_112 |= VAR_20;

 FUNC_5();
 FUNC_0();
 if (VAR_112 != VAR_103->cor[1]) {
  VAR_104 |= VAR_5;
  FUNC_4(VAR_103, VAR_19, VAR_103->cor[1] = VAR_112);
 }
 FUNC_1();
 FUNC_6();






 VAR_112 = VAR_89;







 if (VAR_112 != VAR_103->cor[2]) {
  VAR_104 |= VAR_6;
  FUNC_4(VAR_103, VAR_23, VAR_103->cor[2] = VAR_112);
 }


 if (VAR_104)
  FUNC_3(VAR_103, VAR_3 | VAR_104);







 VAR_112 = 0;
 if (VAR_107 & VAR_75)
  VAR_112 |= VAR_30;
 if (VAR_107 & VAR_74)
  VAR_112 |= VAR_29 | VAR_32;




 if (!(VAR_107 & (VAR_0 | VAR_87)))
  VAR_112 |= VAR_32;
 VAR_112 |= VAR_35;

 FUNC_4(VAR_103, VAR_27, VAR_112);




 VAR_112 = 0;
 if (VAR_107 & VAR_79)
  VAR_112 |= VAR_38;
 if (VAR_100->c_iflag & VAR_73)

  VAR_112 |= VAR_39;






 FUNC_4(VAR_103, VAR_37, VAR_112);
 VAR_112 = VAR_43;




 FUNC_4(VAR_103, VAR_42, VAR_112);





 VAR_112 = VAR_46;




 FUNC_4(VAR_103, VAR_45, VAR_112);





 FUNC_5();
 FUNC_0();

 VAR_103->state &= ~VAR_69;
 if (!(VAR_99->t_state & VAR_91))
  VAR_103->state |= VAR_69;
 if (VAR_102 & VAR_62) {
  VAR_103->state |= VAR_68;






 } else if (VAR_103->state & VAR_68) {
  VAR_103->state &= ~VAR_68;




  FUNC_4(VAR_103, VAR_103->mcr_rts_reg,
     VAR_103->mcr_image |= VAR_103->mcr_rts);
 }






 VAR_103->state |= VAR_67;
 FUNC_12(VAR_99, VAR_100, VAR_103);
 if (VAR_103->state >= (VAR_65 | VAR_69 | VAR_67)) {
  if (!(VAR_103->intr_enable & VAR_58))
   FUNC_4(VAR_103, VAR_56,
      VAR_103->intr_enable
      = (VAR_103->intr_enable & ~VAR_57)
        | VAR_58);
 } else {
  if (VAR_103->intr_enable & VAR_58)
   FUNC_4(VAR_103, VAR_56,
      VAR_103->intr_enable
      = (VAR_103->intr_enable & ~VAR_58)
        | VAR_57);
 }

 FUNC_1();
 FUNC_6();
 FUNC_16(VAR_113);
 FUNC_11(VAR_99);
 if (VAR_103->ibufold != ((void*)0)) {
  FUNC_13(VAR_103->ibufold, VAR_83);
  VAR_103->ibufold = ((void*)0);
 }
 return (0);
}
