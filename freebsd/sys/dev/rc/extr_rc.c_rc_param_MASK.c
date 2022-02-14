
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_state; struct rc_chans* t_sc; } ;
struct termios {int c_ospeed; int c_ispeed; int c_cflag; int c_iflag; int c_lflag; int* c_cc; } ;
struct rc_softc {int dummy; } ;
struct rc_chans {int rc_chan; int rc_flags; int rc_cor2; int rc_ier; int rc_msvr; struct rc_softc* rc_rcb; } ;


 int FUNC_0 (struct rc_softc*,int,int) ;
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
 int FUNC_1 (int) ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 size_t VAR_65 ;
 size_t VAR_66 ;
 size_t VAR_67 ;
 size_t VAR_68 ;
 int FUNC_2 (struct rc_softc*,int) ;
 int VAR_69 ;
 int FUNC_3 (struct tty*,int ,int ) ;
 int FUNC_4 (struct rc_softc*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct tty*) ;

__attribute__((used)) static int
FUNC_8(struct tty *VAR_70, struct termios *VAR_71)
{
 struct rc_softc *VAR_72;
 struct rc_chans *VAR_73;
 int VAR_74, VAR_75, VAR_76, VAR_77, VAR_78, VAR_79, VAR_80, VAR_81;

 if ( VAR_71->c_ospeed < 0 || VAR_71->c_ospeed > 76800
     || VAR_71->c_ispeed < 0 || VAR_71->c_ispeed > 76800
    )
  return (VAR_41);
 if (VAR_71->c_ispeed == 0)
  VAR_71->c_ispeed = VAR_71->c_ospeed;
 VAR_75 = FUNC_1(VAR_71->c_ospeed);
 VAR_74 = FUNC_1(VAR_71->c_ispeed);

 VAR_73 = VAR_70->t_sc;
 VAR_72 = VAR_73->rc_rcb;
 VAR_76 = FUNC_5();


 FUNC_4(VAR_72, VAR_8, VAR_73->rc_chan);


 if (VAR_71->c_ospeed == 0) {
  FUNC_0(VAR_72, VAR_73->rc_chan, VAR_5);
  FUNC_2(VAR_72, VAR_73->rc_chan);
  (void) FUNC_3(VAR_70, 0, VAR_61);
 }

 VAR_70->t_state &= ~VAR_63;
 VAR_78 = VAR_71->c_cflag;
 VAR_79 = VAR_71->c_iflag;
 VAR_80 = VAR_71->c_lflag;

 if (VAR_74 > 0) {
  FUNC_4(VAR_72, VAR_17, VAR_74 & 0xFF);
  FUNC_4(VAR_72, VAR_16, VAR_74 >> 8);
 }
 if (VAR_75 > 0) {
  FUNC_4(VAR_72, VAR_22, VAR_75 & 0xFF);
  FUNC_4(VAR_72, VAR_21, VAR_75 >> 8);
 }


 if (VAR_71->c_ispeed > 0) {
  int VAR_82 = VAR_71->c_ispeed > 2400 ? 5 : 10000 / VAR_71->c_ispeed + 1;

  if ( !(VAR_80 & VAR_42)
      && VAR_71->c_cc[VAR_65] != 0 && VAR_71->c_cc[VAR_68] != 0
      && VAR_71->c_cc[VAR_68] * 10 > VAR_82)
   VAR_82 = VAR_71->c_cc[VAR_68] * 10;

  FUNC_4(VAR_72, VAR_18, VAR_82 <= 255 ? VAR_82 : 255);
 }

 switch (VAR_78 & VAR_39) {
  case 131: VAR_77 = VAR_25; break;
  case 130: VAR_77 = VAR_26; break;
  case 129: VAR_77 = VAR_27; break;
  default:
  case 128: VAR_77 = VAR_28; break;
 }
 if (VAR_78 & VAR_55) {
  VAR_77 |= VAR_30;
  if (VAR_78 & VAR_56)
   VAR_77 |= VAR_31;
  if (!(VAR_78 & VAR_47))
   VAR_77 |= VAR_29;
 } else
  VAR_77 |= VAR_29;
 if (VAR_78 & VAR_40)
  VAR_77 |= VAR_24;
 FUNC_4(VAR_72, VAR_9, VAR_77);


 VAR_77 = VAR_71->c_ospeed <= 4800 ? 1 : VAR_15 / 2;
 VAR_81 = 0;
 if ( (VAR_79 & VAR_49)
     && ( VAR_71->c_cc[VAR_67] != VAR_69
  && ( VAR_71->c_cc[VAR_66] != VAR_69
      || (VAR_79 & VAR_48)
     )
        )
    ) {
  VAR_81 = 1;
  VAR_77 |= VAR_36|VAR_35;
 }
 FUNC_4(VAR_72, VAR_11, VAR_77);


 VAR_77 = 0;
 VAR_73->rc_flags &= ~(VAR_57|VAR_60);
 if (VAR_78 & VAR_7) {
  VAR_73->rc_flags |= VAR_57;
  VAR_77 |= VAR_32;
 } else
  VAR_73->rc_flags |= VAR_60;
 if (VAR_70->t_state & VAR_64)
  VAR_73->rc_flags |= VAR_58;
 else
  VAR_73->rc_flags &= ~VAR_58;
 if (VAR_78 & VAR_38)
  VAR_73->rc_flags |= VAR_59;
 else
  VAR_73->rc_flags &= ~VAR_59;

 if (VAR_81) {
  if (VAR_71->c_cc[VAR_66] != VAR_69)
   FUNC_4(VAR_72, VAR_19, VAR_71->c_cc[VAR_66]);
  FUNC_4(VAR_72, VAR_20, VAR_71->c_cc[VAR_67]);
  VAR_77 |= VAR_34;
  if (VAR_79 & VAR_48)
   VAR_77 |= VAR_33;
 }

 FUNC_4(VAR_72, VAR_10, VAR_73->rc_cor2 = VAR_77);

 FUNC_0(VAR_72, VAR_73->rc_chan, VAR_0 | VAR_1 | VAR_2);

 FUNC_7(VAR_70);


 VAR_77 = VAR_78 & VAR_23 ? 0 : VAR_50;
 if (VAR_78 & VAR_7)
  VAR_77 |= VAR_51;
 FUNC_4(VAR_72, VAR_13, VAR_77);

 VAR_77 = VAR_78 & VAR_23 ? 0 : VAR_52;
 if (VAR_78 & VAR_7)
  VAR_77 |= VAR_53;
 FUNC_4(VAR_72, VAR_14, VAR_77);


 FUNC_0(VAR_72, VAR_73->rc_chan,
  VAR_6 | ((VAR_78 & VAR_37) ? VAR_4 : VAR_3));
 FUNC_2(VAR_72, VAR_73->rc_chan);

 VAR_73->rc_ier = VAR_78 & VAR_23 ? 0 : VAR_43;
 if (VAR_78 & VAR_7)
  VAR_73->rc_ier |= VAR_44;
 if (VAR_78 & VAR_37)
  VAR_73->rc_ier |= VAR_45;
 if (VAR_70->t_state & VAR_62)
  VAR_73->rc_ier |= VAR_46;
 if (VAR_71->c_ospeed != 0)
  FUNC_3(VAR_70, VAR_61, 0);
 if ((VAR_78 & VAR_7) && (VAR_73->rc_msvr & VAR_54))
  VAR_73->rc_flags |= VAR_60;
 FUNC_4(VAR_72, VAR_12, VAR_73->rc_ier);
 (void) FUNC_6(VAR_76);
 return 0;
}
