
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; scalar_t__* c_cc; int c_ospeed; int c_ispeed; int c_lflag; int c_oflag; int c_iflag; } ;
struct linux_termios {int c_iflag; int c_oflag; int c_cflag; int c_lflag; scalar_t__* c_cc; } ;


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
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 scalar_t__ VAR_65 ;
 int VAR_66 ;
 size_t VAR_67 ;
 size_t VAR_68 ;
 size_t VAR_69 ;
 size_t VAR_70 ;
 size_t VAR_71 ;
 size_t VAR_72 ;
 size_t VAR_73 ;
 size_t VAR_74 ;
 size_t VAR_75 ;
 size_t VAR_76 ;
 size_t VAR_77 ;
 size_t VAR_78 ;
 size_t VAR_79 ;
 size_t VAR_80 ;
 size_t VAR_81 ;
 size_t VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 size_t VAR_94 ;
 size_t VAR_95 ;
 size_t VAR_96 ;
 size_t VAR_97 ;
 size_t VAR_98 ;
 size_t VAR_99 ;
 size_t VAR_100 ;
 size_t VAR_101 ;
 size_t VAR_102 ;
 size_t VAR_103 ;
 size_t VAR_104 ;
 size_t VAR_105 ;
 size_t VAR_106 ;
 size_t VAR_107 ;
 size_t VAR_108 ;
 size_t VAR_109 ;
 void* VAR_110 ;
 int FUNC_0 (int,int ) ;
 int VAR_111 ;

__attribute__((used)) static void
FUNC_1(struct linux_termios *VAR_112, struct termios *VAR_113)
{
 int VAR_114;

 VAR_113->c_iflag = 0;
 if (VAR_112->c_iflag & VAR_47)
  VAR_113->c_iflag |= VAR_17;
 if (VAR_112->c_iflag & VAR_28)
  VAR_113->c_iflag |= VAR_0;
 if (VAR_112->c_iflag & VAR_49)
  VAR_113->c_iflag |= VAR_19;
 if (VAR_112->c_iflag & VAR_62)
  VAR_113->c_iflag |= VAR_89;
 if (VAR_112->c_iflag & VAR_52)
  VAR_113->c_iflag |= VAR_22;
 if (VAR_112->c_iflag & VAR_54)
  VAR_113->c_iflag |= VAR_24;
 if (VAR_112->c_iflag & VAR_51)
  VAR_113->c_iflag |= VAR_21;
 if (VAR_112->c_iflag & VAR_48)
  VAR_113->c_iflag |= VAR_18;
 if (VAR_112->c_iflag & VAR_45)
  VAR_113->c_iflag |= VAR_15;
 if (VAR_112->c_iflag & VAR_57)
  VAR_113->c_iflag |= VAR_27;
 if (VAR_112->c_iflag & VAR_55)
  VAR_113->c_iflag |= VAR_25;
 if (VAR_112->c_iflag & VAR_56)
  VAR_113->c_iflag |= VAR_26;
 if (VAR_112->c_iflag & VAR_50)
  VAR_113->c_iflag |= VAR_20;

 VAR_113->c_oflag = 0;
 if (VAR_112->c_oflag & VAR_60)
  VAR_113->c_oflag |= VAR_87;
 if (VAR_112->c_oflag & VAR_59)
  VAR_113->c_oflag |= VAR_86;
 if (VAR_112->c_oflag & VAR_83)
  VAR_113->c_oflag |= VAR_92;

 VAR_113->c_cflag = (VAR_112->c_cflag & VAR_33) << 4;
 if (VAR_112->c_cflag & VAR_34)
  VAR_113->c_cflag |= VAR_4;
 if (VAR_112->c_cflag & VAR_31)
  VAR_113->c_cflag |= VAR_2;
 if (VAR_112->c_cflag & VAR_61)
  VAR_113->c_cflag |= VAR_88;
 if (VAR_112->c_cflag & VAR_63)
  VAR_113->c_cflag |= VAR_90;
 if (VAR_112->c_cflag & VAR_43)
  VAR_113->c_cflag |= VAR_13;
 if (VAR_112->c_cflag & VAR_30)
  VAR_113->c_cflag |= VAR_1;
 if (VAR_112->c_cflag & VAR_32)
  VAR_113->c_cflag |= VAR_3;

 VAR_113->c_lflag = 0;
 if (VAR_112->c_lflag & VAR_53)
  VAR_113->c_lflag |= VAR_23;
 if (VAR_112->c_lflag & VAR_44)
  VAR_113->c_lflag |= VAR_14;
 if (VAR_112->c_lflag & VAR_35)
  VAR_113->c_lflag |= VAR_5;
 if (VAR_112->c_lflag & VAR_37)
  VAR_113->c_lflag |= VAR_7;
 if (VAR_112->c_lflag & VAR_38)
  VAR_113->c_lflag |= VAR_8;
 if (VAR_112->c_lflag & VAR_40)
  VAR_113->c_lflag |= VAR_10;
 if (VAR_112->c_lflag & VAR_58)
  VAR_113->c_lflag |= VAR_85;
 if (VAR_112->c_lflag & VAR_66)
  VAR_113->c_lflag |= VAR_93;
 if (VAR_112->c_lflag & VAR_36)
  VAR_113->c_lflag |= VAR_6;
 if (VAR_112->c_lflag & VAR_41)
  VAR_113->c_lflag |= VAR_11;
 if (VAR_112->c_lflag & VAR_39)
  VAR_113->c_lflag |= VAR_9;
 if (VAR_112->c_lflag & VAR_42)
  VAR_113->c_lflag |= VAR_12;
 if (VAR_112->c_lflag & VAR_64)
  VAR_113->c_lflag |= VAR_91;
 if (VAR_112->c_lflag & VAR_46)
  VAR_113->c_lflag |= VAR_16;

 for (VAR_114=0; VAR_114<VAR_84; VAR_114++)
  VAR_113->c_cc[VAR_114] = VAR_110;
 VAR_113->c_cc[VAR_99] = VAR_112->c_cc[VAR_72];
 VAR_113->c_cc[VAR_103] = VAR_112->c_cc[VAR_76];
 VAR_113->c_cc[VAR_98] = VAR_112->c_cc[VAR_71];
 VAR_113->c_cc[VAR_100] = VAR_112->c_cc[VAR_73];
 VAR_113->c_cc[VAR_95] = VAR_112->c_cc[VAR_68];
 VAR_113->c_cc[VAR_96] = VAR_112->c_cc[VAR_69];
 VAR_113->c_cc[VAR_102] = VAR_112->c_cc[VAR_75];
 VAR_113->c_cc[VAR_108] = VAR_112->c_cc[VAR_81];
 VAR_113->c_cc[VAR_97] = VAR_112->c_cc[VAR_70];
 VAR_113->c_cc[VAR_107] = VAR_112->c_cc[VAR_80];
 VAR_113->c_cc[VAR_105] = VAR_112->c_cc[VAR_78];
 VAR_113->c_cc[VAR_106] = VAR_112->c_cc[VAR_79];
 VAR_113->c_cc[VAR_104] = VAR_112->c_cc[VAR_77];
 VAR_113->c_cc[VAR_94] = VAR_112->c_cc[VAR_67];
 VAR_113->c_cc[VAR_109] = VAR_112->c_cc[VAR_82];
 VAR_113->c_cc[VAR_101] = VAR_112->c_cc[VAR_74];

 for (VAR_114=0; VAR_114<VAR_84; VAR_114++) {
  if (VAR_114 != VAR_102 && VAR_114 != VAR_108 &&
      VAR_113->c_cc[VAR_114] == VAR_65)
   VAR_113->c_cc[VAR_114] = VAR_110;
 }

 VAR_113->c_ispeed = VAR_113->c_ospeed =
     FUNC_0(VAR_112->c_cflag & VAR_29, VAR_111);
}
