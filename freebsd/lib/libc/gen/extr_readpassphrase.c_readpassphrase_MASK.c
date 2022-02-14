
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term ;
struct termios {int c_lflag; scalar_t__* c_cc; } ;
struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef int ssize_t ;
typedef int oterm ;


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
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;



 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (size_t,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,char const*,int) ;
 int VAR_27 ;
 int FUNC_5 () ;
 int VAR_28 ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (struct termios*,struct termios*,int) ;
 int FUNC_9 (struct termios*,struct termios*,int) ;
 int FUNC_10 (struct termios*,int ,int) ;
 int FUNC_11 (int *) ;
 scalar_t__* VAR_29 ;
 int FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (int,struct termios*) ;
 int FUNC_14 (int,int,struct termios*) ;
 scalar_t__ FUNC_15 (unsigned char) ;
 scalar_t__ FUNC_16 (unsigned char) ;

char *
FUNC_17(const char *VAR_30, char *VAR_31, size_t VAR_32, int VAR_33)
{
 ssize_t VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 char VAR_41, *VAR_42, *VAR_43;
 struct termios VAR_44, VAR_45;
 struct sigaction VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;
 struct sigaction VAR_52, VAR_53, VAR_54, VAR_55;


 if (VAR_32 == 0) {
  VAR_27 = VAR_3;
  return(((void*)0));
 }

restart:
 for (VAR_38 = 0; VAR_38 < VAR_5; VAR_38++)
  VAR_29[VAR_38] = 0;
 VAR_34 = -1;
 VAR_37 = 0;
 VAR_39 = 0;




 VAR_40 = 0;
 if (!(VAR_33 & VAR_13)) {
         VAR_35 = VAR_36 = FUNC_2(VAR_25, VAR_7 | VAR_6);
  if (VAR_35 == -1) {
   if (VAR_33 & VAR_11) {
    VAR_27 = VAR_4;
    return(((void*)0));
   }
   VAR_35 = VAR_21;
   VAR_36 = VAR_20;
  } else {
   VAR_40 = 1;
  }
 } else {
  VAR_35 = VAR_21;
  VAR_36 = VAR_20;
 }






 if (VAR_40 && FUNC_13(VAR_35, &VAR_45) == 0) {
  FUNC_9(&VAR_44, &VAR_45, sizeof(VAR_44));
  if (!(VAR_33 & VAR_8))
   VAR_44.c_lflag &= ~(VAR_0 | VAR_1);
  if (VAR_44.c_cc[VAR_24] != VAR_26)
   VAR_44.c_cc[VAR_24] = VAR_26;
  (void)FUNC_14(VAR_35, VAR_22|VAR_23, &VAR_44);
 } else {
  FUNC_10(&VAR_44, 0, sizeof(VAR_44));
  VAR_44.c_lflag |= VAR_0;
  FUNC_10(&VAR_45, 0, sizeof(VAR_45));
  VAR_45.c_lflag |= VAR_0;
 }






 FUNC_11(&VAR_46.sa_mask);
 VAR_46.sa_flags = 0;
 VAR_46.sa_handler = VAR_28;
 (void)FUNC_0(VAR_14, &VAR_46, &VAR_47);
 (void)FUNC_0(VAR_15, &VAR_46, &VAR_49);
 (void)FUNC_0(VAR_16, &VAR_46, &VAR_48);
 (void)FUNC_0(VAR_17, &VAR_46, &VAR_55);
 (void)FUNC_0(VAR_18, &VAR_46, &VAR_50);
 (void)FUNC_0(VAR_19, &VAR_46, &VAR_51);
 (void)FUNC_0(130, &VAR_46, &VAR_52);
 (void)FUNC_0(129, &VAR_46, &VAR_53);
 (void)FUNC_0(128, &VAR_46, &VAR_54);

 if (!(VAR_33 & VAR_13))
  (void)FUNC_4(VAR_36, VAR_30, FUNC_12(VAR_30));
 VAR_43 = VAR_31 + VAR_32 - 1;
 VAR_42 = VAR_31;
 while ((VAR_34 = FUNC_3(VAR_35, &VAR_41, 1)) == 1 && VAR_41 != '\n' && VAR_41 != '\r') {
  if (VAR_42 < VAR_43) {
   if ((VAR_33 & VAR_12))
    VAR_41 &= 0x7f;
   if (FUNC_6((unsigned char)VAR_41)) {
    if ((VAR_33 & VAR_9))
     VAR_41 = (char)FUNC_15((unsigned char)VAR_41);
    if ((VAR_33 & VAR_10))
     VAR_41 = (char)FUNC_16((unsigned char)VAR_41);
   }
   *VAR_42++ = VAR_41;
  }
 }
 *VAR_42 = '\0';
 VAR_37 = VAR_27;
 if (!(VAR_44.c_lflag & VAR_0))
  (void)FUNC_4(VAR_36, "\n", 1);


 if (FUNC_8(&VAR_44, &VAR_45, sizeof(VAR_44)) != 0) {
  while (FUNC_14(VAR_35, VAR_22|VAR_23, &VAR_45) == -1 &&
      VAR_27 == VAR_2 && !VAR_29[128])
   continue;
 }
 (void)FUNC_0(VAR_14, &VAR_47, ((void*)0));
 (void)FUNC_0(VAR_15, &VAR_49, ((void*)0));
 (void)FUNC_0(VAR_16, &VAR_48, ((void*)0));
 (void)FUNC_0(VAR_18, &VAR_50, ((void*)0));
 (void)FUNC_0(VAR_17, &VAR_55, ((void*)0));
 (void)FUNC_0(VAR_19, &VAR_51, ((void*)0));
 (void)FUNC_0(130, &VAR_52, ((void*)0));
 (void)FUNC_0(129, &VAR_53, ((void*)0));
 (void)FUNC_0(128, &VAR_54, ((void*)0));
 if (VAR_40)
  (void)FUNC_1(VAR_35);





 for (VAR_38 = 0; VAR_38 < VAR_5; VAR_38++) {
  if (VAR_29[VAR_38]) {
   FUNC_7(FUNC_5(), VAR_38);
   switch (VAR_38) {
   case 130:
   case 129:
   case 128:
    VAR_39 = 1;
   }
  }
 }
 if (VAR_39)
  goto restart;

 if (VAR_37)
  VAR_27 = VAR_37;
 return(VAR_34 == -1 ? ((void*)0) : VAR_31);
}
