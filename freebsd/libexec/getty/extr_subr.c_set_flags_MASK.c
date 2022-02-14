
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* tcflag_t ;
struct TYPE_4__ {void* c_lflag; void* c_cflag; void* c_oflag; void* c_iflag; } ;
struct TYPE_3__ {void* c_lflag; void* c_cflag; void* c_oflag; void* c_iflag; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (void*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 void* VAR_39 ;
 int VAR_40 ;
 void* VAR_41 ;
 int VAR_42 ;
 void* VAR_43 ;
 int VAR_44 ;
 void* VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 void* VAR_50 ;
 int VAR_51 ;
 void* VAR_52 ;
 int VAR_53 ;
 void* VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 int FUNC_1 (void*,int) ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 int FUNC_2 () ;
 void* VAR_66 ;
 TYPE_2__ VAR_67 ;
 TYPE_1__ VAR_68 ;

void
FUNC_3(int VAR_69)
{
 tcflag_t VAR_70, VAR_71, VAR_72, VAR_73;


 switch (VAR_69) {
 case 0:
  if (VAR_2 && VAR_28 && VAR_40 && VAR_51) {
   VAR_68.c_cflag = VAR_1;
   VAR_68.c_iflag = VAR_27;
   VAR_68.c_lflag = VAR_39;
   VAR_68.c_oflag = VAR_50;
   return;
  }
  break;
 case 1:
  if (VAR_4 && VAR_30 && VAR_42 && VAR_53) {
   VAR_68.c_cflag = VAR_3;
   VAR_68.c_iflag = VAR_29;
   VAR_68.c_lflag = VAR_41;
   VAR_68.c_oflag = VAR_52;
   return;
  }
  break;
 default:
  if (VAR_6 && VAR_32 && VAR_44 && VAR_55) {
   VAR_68.c_cflag = VAR_5;
   VAR_68.c_iflag = VAR_31;
   VAR_68.c_lflag = VAR_43;
   VAR_68.c_oflag = VAR_54;
   return;
  }
  break;
 }

 VAR_70 = VAR_67.c_iflag;
 VAR_71 = VAR_67.c_oflag;
 VAR_72 = VAR_67.c_cflag;
 VAR_73 = VAR_67.c_lflag;

 if (VAR_49) {
  FUNC_0(VAR_72, VAR_14|VAR_60);
  FUNC_1(VAR_72, VAR_13);
  FUNC_0(VAR_70, VAR_37|VAR_36|VAR_35);
 } else if (VAR_0 || VAR_22 || VAR_57) {
  FUNC_0(VAR_72, VAR_14);
  FUNC_1(VAR_72, VAR_12|VAR_60);
  FUNC_1(VAR_70, VAR_37);
  if (VAR_57 && !VAR_22) {
   FUNC_1(VAR_70, VAR_36|VAR_35);
   FUNC_1(VAR_72, VAR_61);
   if (VAR_0)
    FUNC_0(VAR_70, VAR_36);
  } else if (VAR_22 && !VAR_57) {
   FUNC_1(VAR_70, VAR_36|VAR_35);
   FUNC_0(VAR_72, VAR_61);
   if (VAR_0)
    FUNC_0(VAR_70, VAR_36);
  } else if (VAR_0 || (VAR_22 && VAR_57)) {
   FUNC_0(VAR_70, VAR_36|VAR_35);
   FUNC_0(VAR_72, VAR_61);
  }
 }






 if (VAR_23)
  FUNC_1(VAR_72, VAR_25);
 else
  FUNC_0(VAR_72, VAR_25);

 if (VAR_46)
  FUNC_1(VAR_72, VAR_47);
 else
  FUNC_0(VAR_72, VAR_47);

 if (VAR_26)
  FUNC_1(VAR_72, VAR_11);
 else
  FUNC_0(VAR_72, VAR_11);

 if (VAR_48) {
  FUNC_1(VAR_70, VAR_34);
  FUNC_1(VAR_71, VAR_56|VAR_58);
 } else {
  FUNC_0(VAR_70, VAR_34);
  FUNC_0(VAR_71, VAR_56);
 }

 if (!VAR_24)
  FUNC_1(VAR_71, VAR_59|VAR_58);
 else
  FUNC_0(VAR_71, VAR_59);





 if (VAR_69 == 1) {
  if (VAR_63) {
   VAR_70 = 0;
   FUNC_0(VAR_71, VAR_58);
   FUNC_0(VAR_72, VAR_14|VAR_60);
   FUNC_1(VAR_72, VAR_13);
   VAR_73 = 0;
  } else {
   FUNC_0(VAR_73, VAR_33);
  }
  goto out;
 }

 if (VAR_69 == 0)
  goto out;






 if (VAR_8)
  FUNC_1(VAR_73, VAR_19);
 else
  FUNC_0(VAR_73, VAR_19);

 if (VAR_9)
  FUNC_1(VAR_73, VAR_20);
 else
  FUNC_0(VAR_73, VAR_20);

 if (VAR_62)
  FUNC_1(VAR_73, VAR_21);
 else
  FUNC_0(VAR_73, VAR_21);

 if (VAR_16)
  FUNC_1(VAR_73, VAR_17);
 else
  FUNC_0(VAR_73, VAR_17);

 if (VAR_65)
  FUNC_1(VAR_73, VAR_18);
 else
  FUNC_0(VAR_73, VAR_18);

 if (VAR_15)
  FUNC_1(VAR_73, VAR_38);
 else
  FUNC_0(VAR_73, VAR_38);

out:
 VAR_68.c_iflag = VAR_70;
 VAR_68.c_oflag = VAR_71;
 VAR_68.c_cflag = VAR_72;
 VAR_68.c_lflag = VAR_73;
}
