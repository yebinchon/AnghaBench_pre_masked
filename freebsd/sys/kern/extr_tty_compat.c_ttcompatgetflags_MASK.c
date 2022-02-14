
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tcflag_t ;
struct TYPE_2__ {int c_iflag; int c_lflag; int c_oflag; int c_cflag; } ;
struct tty {TYPE_1__ t_termios; } ;


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
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_44 ;

__attribute__((used)) static int
FUNC_1(struct tty *VAR_45)
{
 tcflag_t VAR_46 = VAR_45->t_termios.c_iflag;
 tcflag_t VAR_47 = VAR_45->t_termios.c_lflag;
 tcflag_t VAR_48 = VAR_45->t_termios.c_oflag;
 tcflag_t VAR_49 = VAR_45->t_termios.c_cflag;
 int VAR_50 = 0;

 if (VAR_46&VAR_25)
  VAR_50 |= VAR_41;
 if (VAR_46&VAR_19 || VAR_48&VAR_32)
  VAR_50 |= VAR_2;
 if ((VAR_49&VAR_7) == VAR_6) {
  VAR_50 |= VAR_36;
  if (VAR_46&VAR_23)
   VAR_50 |= VAR_0;
 }
 else if (VAR_49&VAR_34) {
  if (VAR_46&VAR_21) {
   if (VAR_49&VAR_35)
    VAR_50 |= VAR_31;
   else
    VAR_50 |= VAR_15;
  } else
   VAR_50 |= VAR_15 | VAR_31;
 }

 if ((VAR_47&VAR_18) == 0) {

  if (VAR_46&(VAR_21|VAR_23|VAR_26) || VAR_47&(VAR_20|VAR_22)
      || (VAR_49&(VAR_7|VAR_34)) != VAR_6)
   VAR_50 |= VAR_1;
  else
   VAR_50 |= VAR_39;
 }
 if (!(VAR_50&VAR_39) && !(VAR_48&VAR_33) && (VAR_49&(VAR_7|VAR_34)) == VAR_6)
  VAR_50 |= VAR_27;
 if (VAR_49&VAR_28)
  VAR_50 |= VAR_28;
 if ((VAR_49&VAR_17) == 0)
  VAR_50 |= VAR_30;
 if (VAR_48&VAR_40)
  VAR_50 |= VAR_43;
 if (VAR_47&VAR_12)
  VAR_50 |= VAR_4|VAR_3;
 if (VAR_47&VAR_13)
  VAR_50 |= VAR_5|VAR_3;
 if (VAR_47&VAR_14)
  VAR_50 |= VAR_38;
 if (VAR_47&VAR_11)
  VAR_50 |= VAR_8;
 if ((VAR_46&VAR_24) == 0)
  VAR_50 |= VAR_9;
 VAR_50 |= VAR_47&(VAR_10|VAR_42|VAR_16|VAR_37|VAR_29);
 if (VAR_44)
  FUNC_0("getflags: %x\n", VAR_50);
 return (VAR_50);
}
