
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int* c_cc; int c_cflag; int c_lflag; int c_oflag; } ;
typedef int sigset_t ;
typedef void* cc_t ;


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
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_49 ;
 struct termios VAR_50 ;
 struct termios VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int VAR_54 ;
 int FUNC_5 (int ,struct termios*) ;
 scalar_t__ FUNC_6 (int ,int ,struct termios*) ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_7 (int) ;

void
FUNC_8(int VAR_57)
{
    static int VAR_58 = 0;
    struct termios VAR_59;
    int VAR_60;
    int VAR_61;
    cc_t VAR_62;

    VAR_48 = VAR_57&~VAR_15;
    if (VAR_58 == VAR_57)
 return;
    VAR_61 = FUNC_7(VAR_31|VAR_47);
    if (VAR_61 < 0 || VAR_61 > 1) {
 FUNC_5(VAR_55, &VAR_59);
 do {



     FUNC_6(VAR_55, VAR_34, &VAR_59);
     VAR_61 = FUNC_7(VAR_31|VAR_47);
 } while (VAR_61 < 0 || VAR_61 > 1);
    }

    VAR_61 = VAR_58;
    VAR_58 = VAR_57&~VAR_15;
    VAR_59 = VAR_50;

    if (VAR_57&VAR_12) {
 VAR_59.c_lflag |= VAR_2;
 VAR_59.c_oflag |= VAR_23;
 if (VAR_45)
  VAR_59.c_iflag |= VAR_6;
    } else {
 VAR_59.c_lflag &= ~VAR_2;
 VAR_59.c_oflag &= ~VAR_23;




    }

    if ((VAR_57&VAR_14) == 0) {
 VAR_59.c_iflag &= ~(VAR_10|VAR_11);
    } else {
 if (VAR_52 < 0) {
  VAR_59.c_iflag |= VAR_10|VAR_11;
 } else if (VAR_52 > 0) {
  VAR_59.c_iflag |= VAR_10|VAR_11|VAR_9;
 } else {
  VAR_59.c_iflag |= VAR_10|VAR_11;
  VAR_59.c_iflag &= ~VAR_9;
 }
    }

    if ((VAR_57&VAR_21) == 0) {
 VAR_59.c_lflag &= ~VAR_7;
 VAR_49 = 0;
    } else {
 VAR_59.c_lflag |= VAR_7;
 VAR_49 = 1;
    }

    if (VAR_57&VAR_13) {
 VAR_59.c_lflag |= VAR_5;
    } else {
 VAR_59.c_lflag &= ~VAR_5;
 VAR_59.c_iflag &= ~VAR_6;
 VAR_59.c_cc[VAR_40] = 1;
 VAR_59.c_cc[VAR_41] = 0;
    }

    if ((VAR_57&(VAR_13|VAR_21)) == 0) {



    }

    if (VAR_57&VAR_20) {







    } else {






    }

    if (VAR_57&VAR_17) {



    } else {



    }

    if (VAR_57 == -1) {
 VAR_60 = 0;
    } else {
 if (VAR_57 & VAR_16)
  VAR_59.c_iflag &= ~VAR_8;
 else
  VAR_59.c_iflag |= VAR_8;
 if ((VAR_57 & VAR_19) || (VAR_57 & VAR_18)) {
  VAR_59.c_cflag &= ~(VAR_1|VAR_26);
  VAR_59.c_cflag |= VAR_0;
  if(VAR_57 & VAR_19)
      VAR_59.c_oflag &= ~VAR_24;
  else
      VAR_59.c_oflag |= VAR_24;
 } else {
  VAR_59.c_cflag &= ~(VAR_1|VAR_26);
  VAR_59.c_cflag |= VAR_51.c_cflag & (VAR_1|VAR_26);
  VAR_59.c_oflag |= VAR_24;
 }
 VAR_60 = 1;
    }

    if (VAR_57 != -1) {
 VAR_62 = (VAR_53 != VAR_42) ? VAR_53 : VAR_46;
 if ((VAR_59.c_cc[VAR_37] != VAR_62)



     ) {
  if (VAR_59.c_cc[VAR_37] == (cc_t)(VAR_42))
      VAR_59.c_cc[VAR_37] = VAR_62;




 }
    } else {
        sigset_t VAR_63;
 VAR_59 = VAR_51;
    }
    if (FUNC_6(VAR_55, VAR_34, &VAR_59) < 0)
 FUNC_6(VAR_55, VAR_35, &VAR_59);

    FUNC_0(VAR_55, VAR_4, (char *)&VAR_60);
    FUNC_0(VAR_56, VAR_4, (char *)&VAR_60);

}
