
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct winsize {int ws_row; int ws_col; } ;
struct termios {long c_lflag; long c_iflag; long c_oflag; long c_cflag; scalar_t__* c_cc; } ;
struct cchar {char* name; size_t sub; scalar_t__ def; } ;
typedef enum FMT { ____Placeholder_FMT } FMT ;
typedef int buf2 ;
typedef int buf1 ;


 long const VAR_0 ;
 long const VAR_1 ;
 int VAR_2 ;

 long const VAR_3 ;
 long const VAR_4 ;
 long const VAR_5 ;
 int VAR_6 ;
 long const VAR_7 ;





 long VAR_8 ;
 long const VAR_9 ;
 long const VAR_10 ;
 long const VAR_11 ;
 long const VAR_12 ;
 long const VAR_13 ;
 long const VAR_14 ;
 long const VAR_15 ;
 long const VAR_16 ;
 long const VAR_17 ;
 long const VAR_18 ;
 long const VAR_19 ;
 long const VAR_20 ;
 long const VAR_21 ;
 long const VAR_22 ;
 long const VAR_23 ;
 long const VAR_24 ;
 long const VAR_25 ;
 long const VAR_26 ;
 long const VAR_27 ;
 long const VAR_28 ;
 long const VAR_29 ;
 long const VAR_30 ;
 long const VAR_31 ;
 long const VAR_32 ;
 long const VAR_33 ;
 int VAR_34 ;
 long const VAR_35 ;
 long const VAR_36 ;
 long const VAR_37 ;
 long const VAR_38 ;
 long const VAR_39 ;
 long const VAR_40 ;
 long const VAR_41 ;
 long const VAR_42 ;
 int VAR_43 ;
 long const VAR_44 ;
 long const VAR_45 ;
 long const VAR_46 ;
 int VAR_47 ;




 long VAR_48 ;
 long const VAR_49 ;
 int VAR_50 ;
 char* VAR_51 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct cchar* VAR_52 ;
 char* FUNC_2 (struct cchar*,scalar_t__) ;
 int FUNC_3 (struct termios*) ;
 int FUNC_4 (struct termios*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,...) ;
 int FUNC_7 (char*,long const,int) ;
 int FUNC_8 (char*,int,char*,char*,...) ;

void
FUNC_9(struct termios *VAR_53, struct winsize *VAR_54, int VAR_55, enum FMT VAR_56)
{
 struct cchar *VAR_57;
 long VAR_58;
 u_char *VAR_59;
 int VAR_60, VAR_61, VAR_62;
 char VAR_63[100], VAR_64[100];

 VAR_60 = 0;


 if (VAR_55 != VAR_50) {
  switch(VAR_55) {
  case 130:
   VAR_60 += FUNC_6("slip disc; ");
   break;
  case 131:
   VAR_60 += FUNC_6("ppp disc; ");
   break;
  default:
   VAR_60 += FUNC_6("#%d disc; ", VAR_55);
   break;
  }
 }


 VAR_61 = FUNC_3(VAR_53);
 VAR_62 = FUNC_4(VAR_53);
 if (VAR_61 != VAR_62)
  VAR_60 +=
      FUNC_6("ispeed %d baud; ospeed %d baud;", VAR_61, VAR_62);
 else
  VAR_60 += FUNC_6("speed %d baud;", VAR_61);
 if (VAR_56 >= VAR_2)
  VAR_60 += FUNC_6(" %d rows; %d columns;", VAR_54->ws_row, VAR_54->ws_col);
 if (VAR_60)
  (void)FUNC_6("\n");







 VAR_58 = VAR_53->c_lflag;
 FUNC_0("lflags");
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_20)) != 0) != (1)) FUNC_1(("-icanon") + ((VAR_58 & (VAR_20)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_29)) != 0) != (1)) FUNC_1(("-isig") + ((VAR_58 & (VAR_29)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_22)) != 0) != (1)) FUNC_1(("-iexten") + ((VAR_58 & (VAR_22)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_10)) != 0) != (1)) FUNC_1(("-echo") + ((VAR_58 & (VAR_10)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_12)) != 0) != (0)) FUNC_1(("-echoe") + ((VAR_58 & (VAR_12)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_13)) != 0) != (0)) FUNC_1(("-echok") + ((VAR_58 & (VAR_13)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_14)) != 0) != (0)) FUNC_1(("-echoke") + ((VAR_58 & (VAR_14)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_15)) != 0) != (0)) FUNC_1(("-echonl") + ((VAR_58 & (VAR_15)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_11)) != 0) != (0)) FUNC_1(("-echoctl") + ((VAR_58 & (VAR_11)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_16)) != 0) != (0)) FUNC_1(("-echoprt") + ((VAR_58 & (VAR_16)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_0)) != 0) != (0)) FUNC_1(("-altwerase") + ((VAR_58 & (VAR_0)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_36)) != 0) != (0)) FUNC_1(("-noflsh") + ((VAR_58 & (VAR_36)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_49)) != 0) != (0)) FUNC_1(("-tostop") + ((VAR_58 & (VAR_49)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_18)) != 0) != (0)) FUNC_1(("-flusho") + ((VAR_58 & (VAR_18)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_46)) != 0) != (0)) FUNC_1(("-pendin") + ((VAR_58 & (VAR_46)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_37)) != 0) != (0)) FUNC_1(("-nokerninfo") + ((VAR_58 & (VAR_37)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_17)) != 0) != (0)) FUNC_1(("-extproc") + ((VAR_58 & (VAR_17)) != 0));;


 VAR_58 = VAR_53->c_iflag;
 FUNC_0("iflags");
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_30)) != 0) != (0)) FUNC_1(("-istrip") + ((VAR_58 & (VAR_30)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_21)) != 0) != (1)) FUNC_1(("-icrnl") + ((VAR_58 & (VAR_21)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_27)) != 0) != (0)) FUNC_1(("-inlcr") + ((VAR_58 & (VAR_27)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_24)) != 0) != (0)) FUNC_1(("-igncr") + ((VAR_58 & (VAR_24)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_33)) != 0) != (1)) FUNC_1(("-ixon") + ((VAR_58 & (VAR_33)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_32)) != 0) != (0)) FUNC_1(("-ixoff") + ((VAR_58 & (VAR_32)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_31)) != 0) != (1)) FUNC_1(("-ixany") + ((VAR_58 & (VAR_31)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_26)) != 0) != (1)) FUNC_1(("-imaxbel") + ((VAR_58 & (VAR_26)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_23)) != 0) != (0)) FUNC_1(("-ignbrk") + ((VAR_58 & (VAR_23)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_1)) != 0) != (1)) FUNC_1(("-brkint") + ((VAR_58 & (VAR_1)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_28)) != 0) != (0)) FUNC_1(("-inpck") + ((VAR_58 & (VAR_28)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_25)) != 0) != (0)) FUNC_1(("-ignpar") + ((VAR_58 & (VAR_25)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_44)) != 0) != (0)) FUNC_1(("-parmrk") + ((VAR_58 & (VAR_44)) != 0));;


 VAR_58 = VAR_53->c_oflag;
 FUNC_0("oflags");
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_42)) != 0) != (1)) FUNC_1(("-opost") + ((VAR_58 & (VAR_42)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_39)) != 0) != (1)) FUNC_1(("-onlcr") + ((VAR_58 & (VAR_39)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_38)) != 0) != (0)) FUNC_1(("-ocrnl") + ((VAR_58 & (VAR_38)) != 0));;
 switch(VAR_58&VAR_48) {
 case 129:
  FUNC_1("tab0");
  break;
 case 128:
  FUNC_1("tab3");
  break;
 }
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_41)) != 0) != (0)) FUNC_1(("-onocr") + ((VAR_58 & (VAR_41)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_40)) != 0) != (0)) FUNC_1(("-onlret") + ((VAR_58 & (VAR_40)) != 0));;


 VAR_58 = VAR_53->c_cflag;
 FUNC_0("cflags");
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_7)) != 0) != (1)) FUNC_1(("-cread") + ((VAR_58 & (VAR_7)) != 0));;
 switch(VAR_58&VAR_8) {
 case 135:
  FUNC_1("cs5");
  break;
 case 134:
  FUNC_1("cs6");
  break;
 case 133:
  FUNC_1("cs7");
  break;
 case 132:
  FUNC_1("cs8");
  break;
 }
 FUNC_1(&"-parenb" [ ((VAR_58 & (VAR_43)) != 0)]);
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_45)) != 0) != (0)) FUNC_1(("-parodd") + ((VAR_58 & (VAR_45)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_19)) != 0) != (1)) FUNC_1(("-hupcl") + ((VAR_58 & (VAR_19)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_5)) != 0) != (0)) FUNC_1(("-clocal") + ((VAR_58 & (VAR_5)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_9)) != 0) != (0)) FUNC_1(("-cstopb") + ((VAR_58 & (VAR_9)) != 0));;
 switch(VAR_58 & (137 | 136)) {
 case 137:
  FUNC_1("ctsflow");
  break;
 case 136:
  FUNC_1("rtsflow");
  break;
 default:
  if (VAR_56 >= VAR_2 || ((VAR_58 & (137 | 136)) != 0) != (0)) FUNC_1(("-crtscts") + ((VAR_58 & (137 | 136)) != 0));;
  break;
 }
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_3)) != 0) != (0)) FUNC_1(("-dsrflow") + ((VAR_58 & (VAR_3)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_4)) != 0) != (0)) FUNC_1(("-dtrflow") + ((VAR_58 & (VAR_4)) != 0));;
 if (VAR_56 >= VAR_2 || ((VAR_58 & (VAR_35)) != 0) != (0)) FUNC_1(("-mdmbuf") + ((VAR_58 & (VAR_35)) != 0));;
 if (((VAR_58 & (VAR_6)) != 0))
  FUNC_1("-rtsdtr");
 else {
  if (VAR_56 >= VAR_2)
   FUNC_1("rtsdtr");
 }


 VAR_59 = VAR_53->c_cc;
 if (VAR_56 == VAR_47) {
  FUNC_0("cchars");
  for (VAR_57 = VAR_52; VAR_57->name; ++VAR_57) {
   (void)FUNC_8(VAR_63, sizeof(VAR_63), "%s = %s;",
       VAR_57->name, FUNC_2(VAR_57, VAR_59[VAR_57->sub]));
   FUNC_1(VAR_63);
  }
  FUNC_0(((void*)0));
 } else {
  FUNC_0(((void*)0));
  for (VAR_57 = VAR_52, VAR_60 = 0; VAR_57->name; ++VAR_57) {
   if (VAR_56 != VAR_2 && VAR_59[VAR_57->sub] == VAR_57->def)
    continue;

   (void)FUNC_8(VAR_63 + VAR_60 * 8, sizeof(VAR_63) - VAR_60 * 8,
       "%-8s", VAR_57->name);
   (void)FUNC_8(VAR_64 + VAR_60 * 8, sizeof(VAR_64) - VAR_60 * 8,
       "%-8s", FUNC_2(VAR_57, VAR_59[VAR_57->sub]));
   if (++VAR_60 == VAR_34 / 8) {
    VAR_60 = 0;
    (void)FUNC_6("%s\n", VAR_63);
    (void)FUNC_6("%s\n", VAR_64);
   }
  }
  if (VAR_60) {
   (void)FUNC_6("%s\n", VAR_63);
   (void)FUNC_6("%s\n", VAR_64);
  }
 }
}
