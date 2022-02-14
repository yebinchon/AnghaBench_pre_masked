
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct winsize {int ws_col; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

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
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* VAR_24 ;
 int FUNC_4 (int,char*,int *) ;
 int FUNC_5 (int ) ;
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
 int * VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_6 (int*,int*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,int ,struct winsize*) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int * VAR_64 ;
 scalar_t__ VAR_65 ;
 int FUNC_12 (char*) ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int ) ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int FUNC_16 (char*,int ,int ,char const**) ;
 int VAR_81 ;
 int FUNC_17 (char*,char*) ;
 void* FUNC_18 (char*,char**) ;
 int FUNC_19 (int,char**,int) ;
 int FUNC_20 () ;
 int FUNC_21 (char*) ;

int
FUNC_22(int VAR_82, char *VAR_83[])
{
 static char VAR_84[] = ".", *VAR_85[] = {VAR_84, ((void*)0)};
 struct winsize VAR_86;
 int VAR_87, VAR_88, VAR_89;
 char *VAR_90;
 const char *VAR_91 = ((void*)0);






 (void)FUNC_14(VAR_10, "");


 if (FUNC_11(VAR_13)) {
  VAR_81 = 80;
  if ((VAR_90 = FUNC_7("COLUMNS")) != ((void*)0) && *VAR_90 != '\0')
   VAR_81 = FUNC_16(VAR_90, 0, VAR_9, &VAR_91);
  else if (FUNC_10(VAR_13, VAR_14, &VAR_86) != -1 &&
      VAR_86.ws_col > 0)
   VAR_81 = VAR_86.ws_col;
  VAR_39 = 1;
 } else {
  VAR_49 = 1;

  VAR_90 = FUNC_7("COLUMNS");
  if (VAR_90)
   VAR_81 = FUNC_16(VAR_90, 0, VAR_9, &VAR_91);
 }

 if (VAR_91)
  VAR_81 = 80;

 VAR_88 = VAR_6;
 if (FUNC_7("LS_SAMESORT"))
  VAR_47 = 1;
 while ((VAR_87 = FUNC_8(VAR_82, VAR_83,
     "+1ABCD:FGHILPRSTUWXZabcdfghiklmnopqrstuwxy,", VAR_61,
     ((void*)0))) != -1) {
  switch (VAR_87) {




  case '1':
   VAR_49 = 1;
   VAR_36 = 0;
   VAR_55 = 0;
   break;
  case 'C':
   VAR_53 = VAR_36 = VAR_49 = 0;
   break;
  case 'l':
   VAR_36 = 1;
   VAR_49 = 0;
   VAR_55 = 0;
   break;
  case 'x':
   VAR_53 = 1;
   VAR_36 = 0;
   VAR_49 = 0;
   break;

  case 'c':
   VAR_54 = 1;
   VAR_26 = 0;
   VAR_27 = 0;
   break;
  case 'u':
   VAR_26 = 1;
   VAR_54 = 0;
   VAR_27 = 0;
   break;
  case 'U':
   VAR_27 = 1;
   VAR_26 = 0;
   VAR_54 = 0;
   break;
  case 'f':
   VAR_40 = 1;

  case 'a':
   VAR_88 |= VAR_7;

  case 'A':
   VAR_35 = 1;
   break;

  case 'S':
   VAR_51 = 1;
   VAR_58 = 0;
   break;
  case 't':
   VAR_58 = 1;
   VAR_51 = 0;
   break;

  case ',':
   VAR_56 = 1;
   break;
  case 'B':
   VAR_39 = 0;
   VAR_43 = 1;
   VAR_44 = 0;
   break;
  case 'D':
   VAR_57 = VAR_64;
   break;
  case 'F':
   VAR_59 = 1;
   VAR_52 = 0;
   break;
  case 'G':
   FUNC_13("CLICOLOR", "", 1);
   break;
  case 'H':
   VAR_88 |= VAR_3;
   VAR_38 = 0;
   break;
  case 'I':
   VAR_37 = 1;
   break;
  case 'L':
   VAR_88 &= ~VAR_6;
   VAR_88 |= VAR_4;
   VAR_38 = 0;
   break;
  case 'P':
   VAR_88 &= ~VAR_3;
   VAR_88 &= ~VAR_4;
   VAR_88 |= VAR_6;
   VAR_38 = 1;
   break;
  case 'R':
   VAR_45 = 1;
   break;
  case 'T':
   VAR_48 = 1;
   break;
  case 'W':
   VAR_60 = 1;
   break;
  case 'Z':
   VAR_33 = 1;
   break;
  case 'b':
   VAR_39 = 0;
   VAR_43 = 0;
   VAR_44 = 1;
   break;

  case 'd':
   VAR_34 = 1;
   VAR_45 = 0;
   break;
  case 'g':
   break;
  case 'h':
   VAR_30 = 1;
   break;
  case 'i':
   VAR_31 = 1;
   break;
  case 'k':
   VAR_30 = 0;
   VAR_32 = 1;
   break;
  case 'm':
   VAR_55 = 1;
   VAR_49 = 0;
   VAR_36 = 0;
   break;
  case 'n':
   VAR_42 = 1;
   break;
  case 'o':
   VAR_29 = 1;
   break;
  case 'p':
   VAR_52 = 1;
   VAR_59 = 1;
   break;
  case 'q':
   VAR_39 = 1;
   VAR_43 = 0;
   VAR_44 = 0;
   break;
  case 'r':
   VAR_46 = 1;
   break;
  case 's':
   VAR_50 = 1;
   break;
  case 'w':
   VAR_39 = 0;
   VAR_43 = 0;
   VAR_44 = 0;
   break;
  case 'y':
   VAR_47 = 1;
   break;
  default:
  case '?':
   FUNC_20();
  }
 }
 VAR_82 -= VAR_65;
 VAR_83 += VAR_65;


 if (!VAR_35 && FUNC_9() == (uid_t)0 && !VAR_37)
  VAR_35 = 1;





 if (FUNC_0()) {
  FUNC_21("color support not compiled in");

 }
 if (!VAR_31 && !VAR_36 && !VAR_50 && !VAR_58 &&
     !VAR_51 && !VAR_59



     )
  VAR_88 |= VAR_5;






 if (!VAR_38 && !VAR_36 && !VAR_34 && (!VAR_59 || VAR_52)



     )
  VAR_88 |= VAR_3;
 if (VAR_31 || VAR_36 || VAR_50) {
  if (VAR_32)
   VAR_21 = 2;
  else {
   (void)FUNC_6(&VAR_89, &VAR_21);
   VAR_21 /= 512;
  }
 }

 if (VAR_46) {
  if (!VAR_58 && !VAR_51)
   VAR_79 = VAR_74;
  else if (VAR_51)
   VAR_79 = VAR_75;
  else if (VAR_26)
   VAR_79 = VAR_71;
  else if (VAR_27)
   VAR_79 = VAR_72;
  else if (VAR_54)
   VAR_79 = VAR_76;
  else
   VAR_79 = VAR_73;
 } else {
  if (!VAR_58 && !VAR_51)
   VAR_79 = VAR_63;
  else if (VAR_51)
   VAR_79 = VAR_78;
  else if (VAR_26)
   VAR_79 = VAR_15;
  else if (VAR_27)
   VAR_79 = VAR_20;
  else if (VAR_54)
   VAR_79 = VAR_80;
  else
   VAR_79 = VAR_62;
 }


 if (VAR_49)
  VAR_67 = VAR_69;
 else if (VAR_36)
  VAR_67 = VAR_68;
 else if (VAR_55)
  VAR_67 = VAR_70;
 else
  VAR_67 = VAR_66;

 if (VAR_82)
  FUNC_19(VAR_82, VAR_83, VAR_88);
 else
  FUNC_19(1, VAR_85, VAR_88);
 FUNC_5(VAR_77);
}
