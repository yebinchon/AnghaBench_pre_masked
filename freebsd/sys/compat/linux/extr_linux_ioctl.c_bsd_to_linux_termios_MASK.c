
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_oflag; int c_cflag; int c_lflag; scalar_t__* c_cc; int c_ispeed; } ;
struct linux_termios {int c_cflag; scalar_t__* c_cc; scalar_t__ c_line; int c_lflag; int c_oflag; int c_iflag; } ;


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
 void* VAR_65 ;
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
 size_t VAR_93 ;
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
 scalar_t__ VAR_109 ;
 int FUNC_0 (int ,int ) ;
 int VAR_110 ;

__attribute__((used)) static void
FUNC_1(struct termios *VAR_111, struct linux_termios *VAR_112)
{
 int VAR_113;

 VAR_112->c_iflag = 0;
 if (VAR_111->c_iflag & VAR_18)
  VAR_112->c_iflag |= VAR_46;
 if (VAR_111->c_iflag & VAR_0)
  VAR_112->c_iflag |= VAR_29;
 if (VAR_111->c_iflag & VAR_20)
  VAR_112->c_iflag |= VAR_48;
 if (VAR_111->c_iflag & VAR_88)
  VAR_112->c_iflag |= VAR_62;
 if (VAR_111->c_iflag & VAR_23)
  VAR_112->c_iflag |= VAR_51;
 if (VAR_111->c_iflag & VAR_25)
  VAR_112->c_iflag |= VAR_53;
 if (VAR_111->c_iflag & VAR_22)
  VAR_112->c_iflag |= VAR_50;
 if (VAR_111->c_iflag & VAR_19)
  VAR_112->c_iflag |= VAR_47;
 if (VAR_111->c_iflag & VAR_16)
  VAR_112->c_iflag |= VAR_44;
 if (VAR_111->c_iflag & VAR_28)
  VAR_112->c_iflag |= VAR_56;
 if (VAR_111->c_iflag & VAR_26)
  VAR_112->c_iflag |= VAR_54;
 if (VAR_111->c_iflag & VAR_27)
  VAR_112->c_iflag |= VAR_55;
 if (VAR_111->c_iflag & VAR_21)
  VAR_112->c_iflag |= VAR_49;

 VAR_112->c_oflag = 0;
 if (VAR_111->c_oflag & VAR_86)
  VAR_112->c_oflag |= VAR_60;
 if (VAR_111->c_oflag & VAR_85)
  VAR_112->c_oflag |= VAR_59;
 if (VAR_111->c_oflag & VAR_91)
  VAR_112->c_oflag |= VAR_83;

 VAR_112->c_cflag = FUNC_0(VAR_111->c_ispeed, VAR_110);
 VAR_112->c_cflag |= (VAR_111->c_cflag & VAR_4) >> 4;
 if (VAR_111->c_cflag & VAR_5)
  VAR_112->c_cflag |= VAR_33;
 if (VAR_111->c_cflag & VAR_2)
  VAR_112->c_cflag |= VAR_31;
 if (VAR_111->c_cflag & VAR_87)
  VAR_112->c_cflag |= VAR_61;
 if (VAR_111->c_cflag & VAR_89)
  VAR_112->c_cflag |= VAR_63;
 if (VAR_111->c_cflag & VAR_14)
  VAR_112->c_cflag |= VAR_42;
 if (VAR_111->c_cflag & VAR_1)
  VAR_112->c_cflag |= VAR_30;
 if (VAR_111->c_cflag & VAR_3)
  VAR_112->c_cflag |= VAR_32;

 VAR_112->c_lflag = 0;
 if (VAR_111->c_lflag & VAR_24)
  VAR_112->c_lflag |= VAR_52;
 if (VAR_111->c_lflag & VAR_15)
  VAR_112->c_lflag |= VAR_43;
 if (VAR_111->c_lflag & VAR_6)
  VAR_112->c_lflag |= VAR_34;
 if (VAR_111->c_lflag & VAR_8)
  VAR_112->c_lflag |= VAR_36;
 if (VAR_111->c_lflag & VAR_9)
  VAR_112->c_lflag |= VAR_37;
 if (VAR_111->c_lflag & VAR_11)
  VAR_112->c_lflag |= VAR_39;
 if (VAR_111->c_lflag & VAR_84)
  VAR_112->c_lflag |= VAR_58;
 if (VAR_111->c_lflag & VAR_92)
  VAR_112->c_lflag |= VAR_66;
 if (VAR_111->c_lflag & VAR_7)
  VAR_112->c_lflag |= VAR_35;
 if (VAR_111->c_lflag & VAR_12)
  VAR_112->c_lflag |= VAR_40;
 if (VAR_111->c_lflag & VAR_10)
  VAR_112->c_lflag |= VAR_38;
 if (VAR_111->c_lflag & VAR_13)
  VAR_112->c_lflag |= VAR_41;
 if (VAR_111->c_lflag & VAR_90)
  VAR_112->c_lflag |= VAR_64;
 if (VAR_111->c_lflag & VAR_17)
  VAR_112->c_lflag |= VAR_45;

 for (VAR_113=0; VAR_113<VAR_57; VAR_113++)
  VAR_112->c_cc[VAR_113] = VAR_65;
 VAR_112->c_cc[VAR_72] = VAR_111->c_cc[VAR_98];
 VAR_112->c_cc[VAR_76] = VAR_111->c_cc[VAR_102];
 VAR_112->c_cc[VAR_71] = VAR_111->c_cc[VAR_97];
 VAR_112->c_cc[VAR_73] = VAR_111->c_cc[VAR_99];
 VAR_112->c_cc[VAR_68] = VAR_111->c_cc[VAR_94];
 VAR_112->c_cc[VAR_69] = VAR_111->c_cc[VAR_95];
 VAR_112->c_cc[VAR_75] = VAR_111->c_cc[VAR_101];
 VAR_112->c_cc[VAR_81] = VAR_111->c_cc[VAR_107];
 VAR_112->c_cc[VAR_70] = VAR_111->c_cc[VAR_96];
 VAR_112->c_cc[VAR_80] = VAR_111->c_cc[VAR_106];
 VAR_112->c_cc[VAR_78] = VAR_111->c_cc[VAR_104];
 VAR_112->c_cc[VAR_79] = VAR_111->c_cc[VAR_105];
 VAR_112->c_cc[VAR_77] = VAR_111->c_cc[VAR_103];
 VAR_112->c_cc[VAR_67] = VAR_111->c_cc[VAR_93];
 VAR_112->c_cc[VAR_82] = VAR_111->c_cc[VAR_108];
 VAR_112->c_cc[VAR_74] = VAR_111->c_cc[VAR_100];

 for (VAR_113=0; VAR_113<VAR_57; VAR_113++) {
  if (VAR_113 != VAR_75 && VAR_113 != VAR_81 &&
      VAR_112->c_cc[VAR_113] == VAR_109)
   VAR_112->c_cc[VAR_113] = VAR_65;
 }
 VAR_112->c_line = 0;
}
