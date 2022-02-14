
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termio {int c_iflag; int* c_cc; int c_cflag; int c_lflag; int c_oflag; } ;
struct tchars {void* t_brkc; scalar_t__ t_eofc; scalar_t__ t_quitc; scalar_t__ t_intrc; scalar_t__ t_stopc; scalar_t__ t_startc; } ;
struct sgttyb {int sg_flags; } ;
struct ltchars {scalar_t__ t_dsuspc; scalar_t__ t_lnextc; scalar_t__ t_suspc; } ;
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
 void FUNC_0 (int) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 int VAR_50 ;
 scalar_t__ VAR_51 ;
 void FUNC_1 (int) ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 void FUNC_2 (int) ;
 void FUNC_3 (int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_57 ;
 struct termio VAR_58 ;
 struct ltchars VAR_59 ;
 struct tchars VAR_60 ;
 struct sgttyb VAR_61 ;
 struct termio VAR_62 ;
 int VAR_63 ;
 struct ltchars VAR_64 ;
 struct tchars VAR_65 ;
 struct sgttyb VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,void (*) (int)) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 void FUNC_9 (int) ;
 int FUNC_10 (int ,struct termio*) ;
 scalar_t__ FUNC_11 (int ,int ,struct termio*) ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_12 (int) ;

void
FUNC_13(int VAR_71)
{
    static int VAR_72 = 0;

    struct tchars VAR_73;
    struct ltchars VAR_74;
    struct sgttyb VAR_75;
    int VAR_76;



    int VAR_77;
    int VAR_78;
    cc_t VAR_79;

    VAR_56 = VAR_71&~VAR_20;
    if (VAR_72 == VAR_71)
 return;
    VAR_78 = FUNC_12(VAR_35|VAR_55);
    if (VAR_78 < 0 || VAR_78 > 1) {



 do {






     VAR_78 = FUNC_12(VAR_35|VAR_55);
 } while (VAR_78 < 0 || VAR_78 > 1);
    }

    VAR_78 = VAR_72;
    VAR_72 = VAR_71&~VAR_20;

    VAR_75 = VAR_61;
    VAR_73 = VAR_60;
    VAR_74 = VAR_59;
    VAR_76 = VAR_63;




    if (VAR_71&VAR_17) {

 VAR_75.sg_flags |= VAR_4;






    } else {

 VAR_75.sg_flags &= ~VAR_4;




    }

    if ((VAR_71&VAR_19) == 0) {

 VAR_73.t_startc = VAR_51;
 VAR_73.t_stopc = VAR_51;
    }

    if ((VAR_71&VAR_25) == 0) {

 VAR_73.t_intrc = VAR_51;
 VAR_73.t_quitc = VAR_51;
 VAR_73.t_eofc = VAR_51;
 VAR_74.t_suspc = VAR_51;
 VAR_74.t_dsuspc = VAR_51;



 VAR_57 = 0;
    } else {



 VAR_57 = 1;
    }

    if (VAR_71&VAR_18) {

 VAR_75.sg_flags &= ~VAR_0;
 VAR_75.sg_flags |= VAR_1;



    } else {

 VAR_75.sg_flags |= VAR_0;
 if (VAR_71&VAR_17)
     VAR_75.sg_flags |= VAR_1;
 else
     VAR_75.sg_flags &= ~VAR_1;






    }

    if ((VAR_71&(VAR_18|VAR_25)) == 0) {

 VAR_74.t_lnextc = VAR_51;





    }

    if (VAR_71&VAR_24) {

 VAR_75.sg_flags |= VAR_50;
    } else {

 VAR_75.sg_flags &= ~VAR_50;
    }

    if (VAR_71&VAR_22) {

 VAR_76 &= ~VAR_14;





    } else {

 VAR_76 |= VAR_14;





    }

    if (VAR_71 == -1) {
 VAR_77 = 0;
    } else {

 if (VAR_71 & VAR_23)
  VAR_76 |= VAR_15;
 else
  VAR_76 &= ~VAR_15;

 if (VAR_71 & VAR_21)
  VAR_76 |= VAR_16;
 else
  VAR_76 &= ~VAR_16;
 VAR_77 = 1;
    }

    if (VAR_71 != -1) {
 VAR_74.t_dsuspc = VAR_51;
 if (VAR_73.t_brkc == (cc_t)(VAR_51))
  VAR_73.t_brkc = VAR_79;

    } else {
 VAR_74 = VAR_64;
 VAR_73 = VAR_65;
 VAR_75 = VAR_66;
 VAR_76 = VAR_63;



    }

    FUNC_4(VAR_69, VAR_40, (char *)&VAR_76);
    FUNC_4(VAR_69, VAR_43, (char *)&VAR_74);
    FUNC_4(VAR_69, VAR_41, (char *)&VAR_73);
    FUNC_4(VAR_69, VAR_42, (char *)&VAR_75);





    FUNC_4(VAR_69, VAR_6, (char *)&VAR_77);
    FUNC_4(VAR_70, VAR_6, (char *)&VAR_77);

}
