
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int anchorname ;


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
 char* VAR_34 ;
 char* FUNC_0 (int,int) ;
 int* VAR_35 ;
 int VAR_36 ;
 int* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_40 ;
 int VAR_41 ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int) ;
 char* VAR_42 ;
 int VAR_43 ;
 int* VAR_44 ;
 int VAR_45 ;
 char* VAR_46 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int,char*) ;
 int FUNC_11 (int,int,char*) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,char**,char*,int*,char*,char*,int) ;
 int FUNC_18 (int,int ,int) ;
 scalar_t__ FUNC_19 (int,int) ;
 scalar_t__ FUNC_20 (int,int) ;
 scalar_t__ FUNC_21 (int,int,int ) ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 (int,char*,int) ;
 int FUNC_24 (int,char*,int) ;
 int FUNC_25 (int,char*,int) ;
 int FUNC_26 (int,int) ;
 void* FUNC_27 (char*,int ) ;
 int FUNC_28 (int,char*,int) ;
 scalar_t__ FUNC_29 (int,char*,int,int,char*,int *) ;
 int FUNC_30 (int,char*,int,int) ;
 int FUNC_31 (int,int,char*) ;
 int FUNC_32 (int) ;
 int FUNC_33 (char*,int) ;
 int FUNC_34 (int,int) ;
 int FUNC_35 (int,int,char*) ;
 int FUNC_36 (int,char*,int,int,char*,int ) ;
 int FUNC_37 (int) ;
 int FUNC_38 (int,int) ;
 int FUNC_39 (int,char*,int) ;
 int FUNC_40 (int,int) ;
 int FUNC_41 (char*,int) ;
 int FUNC_42 (int,int) ;
 int FUNC_43 (int,int) ;
 char* VAR_47 ;
 int* VAR_48 ;
 int VAR_49 ;
 char** VAR_50 ;
 int VAR_51 ;
 char** VAR_52 ;
 int VAR_53 ;
 scalar_t__ FUNC_44 (char*,int) ;
 int FUNC_45 (char*,char*) ;
 int FUNC_46 (char*,char*,int) ;
 int FUNC_47 (char*) ;
 int * FUNC_48 (char*,char*) ;
 char* VAR_54 ;
 int* VAR_55 ;
 int VAR_56 ;
 int FUNC_49 () ;
 int FUNC_50 (int *) ;
 int FUNC_51 (char*,...) ;

int
FUNC_52(int VAR_57, char *VAR_58[])
{
 int VAR_59 = 0;
 int VAR_60;
 int VAR_61 = VAR_1;
 int VAR_62 = 0;
 int VAR_63 = VAR_15;
 char VAR_64[VAR_0];
 char *VAR_65;

 if (VAR_57 < 2)
  FUNC_49();

 while ((VAR_60 = FUNC_4(VAR_57, VAR_58,
     "a:AdD:eqf:F:ghi:k:K:mnNOo:Pp:rRs:t:T:vx:z")) != -1) {
  switch (VAR_60) {
  case 'a':
   VAR_34 = VAR_42;
   break;
  case 'd':
   VAR_62 |= VAR_19;
   VAR_61 = VAR_2;
   break;
  case 'D':
   if (FUNC_16(VAR_42) < 0)
    FUNC_51("could not parse macro definition %s",
        VAR_42);
   break;
  case 'e':
   VAR_62 |= VAR_21;
   VAR_61 = VAR_2;
   break;
  case 'q':
   VAR_62 |= VAR_26;
   break;
  case 'F':
   VAR_35 = FUNC_27(VAR_42, VAR_36);
   if (VAR_35 == ((void*)0)) {
    FUNC_51("Unknown flush modifier '%s'", VAR_42);
    FUNC_49();
   }
   VAR_61 = VAR_2;
   break;
  case 'i':
   VAR_40 = VAR_42;
   break;
  case 'k':
   if (VAR_53 >= 2) {
    FUNC_51("can only specify -k twice");
    FUNC_49();

   }
   VAR_52[VAR_53++] = VAR_42;
   VAR_61 = VAR_2;
   break;
  case 'K':
   if (VAR_51 >= 2) {
    FUNC_51("can only specify -K twice");
    FUNC_49();

   }
   VAR_50[VAR_51++] = VAR_42;
   VAR_61 = VAR_2;
   break;
  case 'm':
   VAR_62 |= VAR_22;
   break;
  case 'n':
   VAR_62 |= VAR_23;
   break;
  case 'N':
   VAR_41 |= VAR_5;
   break;
  case 'r':
   VAR_62 |= VAR_29;
   break;
  case 'f':
   VAR_47 = VAR_42;
   VAR_61 = VAR_2;
   break;
  case 'g':
   VAR_62 |= VAR_18;
   break;
  case 'A':
   VAR_41 |= VAR_3;
   break;
  case 'R':
   VAR_41 |= VAR_4;
   break;
  case 'o':
   VAR_44 = FUNC_27(VAR_42, VAR_45);
   if (VAR_44 == ((void*)0)) {
    FUNC_51("Unknown optimization '%s'", VAR_42);
    FUNC_49();
   }
   VAR_62 |= VAR_25;
   break;
  case 'O':
   VAR_41 |= VAR_6;
   break;
  case 'p':
   VAR_46 = VAR_42;
   break;
  case 'P':
   VAR_62 |= VAR_24;
   break;
  case 's':
   VAR_48 = FUNC_27(VAR_42, VAR_49);
   if (VAR_48 == ((void*)0)) {
    FUNC_51("Unknown show modifier '%s'", VAR_42);
    FUNC_49();
   }
   break;
  case 't':
   VAR_54 = VAR_42;
   break;
  case 'T':
   VAR_55 = FUNC_27(VAR_42, VAR_56);
   if (VAR_55 == ((void*)0)) {
    FUNC_51("Unknown table command '%s'", VAR_42);
    FUNC_49();
   }
   break;
  case 'v':
   if (VAR_62 & VAR_30)
    VAR_62 |= VAR_31;
   VAR_62 |= VAR_30;
   break;
  case 'x':
   VAR_37 = FUNC_27(VAR_42, VAR_38);
   if (VAR_37 == ((void*)0)) {
    FUNC_51("Unknown debug level '%s'", VAR_42);
    FUNC_49();
   }
   VAR_61 = VAR_2;
   break;
  case 'z':
   VAR_62 |= VAR_17;
   VAR_61 = VAR_2;
   break;
  case 'h':

  default:
   FUNC_49();

  }
 }

 if (VAR_55 != ((void*)0)) {
  VAR_57 -= VAR_43;
  VAR_58 += VAR_43;
  VAR_60 = *VAR_55;
  if (VAR_60 == 'l') {
   VAR_41 |= VAR_7;
   VAR_55 = ((void*)0);
  } else
   VAR_61 = FUNC_44("acdefkrz", VAR_60) ? VAR_2 : VAR_1;
 } else if (VAR_57 != VAR_43) {
  FUNC_51("unknown command line argument: %s ...", VAR_58[VAR_43]);
  FUNC_49();

 }
 if (VAR_41 == 0)
  VAR_41 = ~0;

 if ((VAR_65 = FUNC_0(1, VAR_0)) == ((void*)0))
  FUNC_2(1, "pfctl: calloc");
 FUNC_5(VAR_64, 0, sizeof(VAR_64));
 if (VAR_34 != ((void*)0)) {
  int VAR_66 = FUNC_47(VAR_34);

  if (VAR_34[VAR_66 - 1] == '*') {
   if (VAR_66 >= 2 && VAR_34[VAR_66 - 2] == '/')
    VAR_34[VAR_66 - 2] = '\0';
   else
    VAR_34[VAR_66 - 1] = '\0';
   VAR_62 |= VAR_27;
  }
  if (FUNC_46(VAR_64, VAR_34,
      sizeof(VAR_64)) >= sizeof(VAR_64))
   FUNC_2(1, "anchor name '%s' too long",
       VAR_34);
  VAR_41 &= VAR_4|VAR_5|VAR_7;
 }

 if ((VAR_62 & VAR_23) == 0) {
  VAR_39 = FUNC_6(VAR_46, VAR_61);
  if (VAR_39 == -1)
   FUNC_1(1, "%s", VAR_46);
  VAR_33 = FUNC_43(VAR_39, VAR_62);
 } else {
  VAR_39 = FUNC_6(VAR_46, VAR_1);
  if (VAR_39 >= 0)
   VAR_62 |= VAR_20;

  VAR_62 &= ~ (VAR_19 | VAR_21);
  VAR_35 = VAR_48 = VAR_37 = ((void*)0);

  VAR_33 = 0;



 }

 if (VAR_62 & VAR_19)
  if (FUNC_19(VAR_39, VAR_62))
   VAR_59 = 1;

 if (VAR_48 != ((void*)0)) {
  switch (*VAR_48) {
  case 'A':
   FUNC_31(VAR_39, VAR_62, VAR_64);
   break;
  case 'r':
   FUNC_26(VAR_39, VAR_62);
   FUNC_36(VAR_39, VAR_65, VAR_62, VAR_10,
       VAR_64, 0);
   break;
  case 'l':
   FUNC_26(VAR_39, VAR_62);
   FUNC_36(VAR_39, VAR_65, VAR_62, VAR_8,
       VAR_64, 0);
   break;
  case 'n':
   FUNC_26(VAR_39, VAR_62);
   FUNC_35(VAR_39, VAR_62, VAR_64);
   break;
  case 'q':
   FUNC_30(VAR_39, VAR_40, VAR_62,
       VAR_62 & VAR_31);
   break;
  case 's':
   FUNC_39(VAR_39, VAR_40, VAR_62);
   break;
  case 'S':
   FUNC_38(VAR_39, VAR_62);
   break;
  case 'i':
   FUNC_40(VAR_39, VAR_62);
   break;
  case 'R':
   VAR_59 = FUNC_37(VAR_39);
   break;
  case 't':
   FUNC_42(VAR_39, VAR_62);
   break;
  case 'm':
   FUNC_34(VAR_39, VAR_62);
   break;
  case 'a':
   VAR_62 |= VAR_28;
   FUNC_26(VAR_39, VAR_62);

   FUNC_35(VAR_39, VAR_62, VAR_64);
   FUNC_36(VAR_39, VAR_65, VAR_62, 0, VAR_64, 0);
   FUNC_30(VAR_39, VAR_40, VAR_62, 0);
   FUNC_39(VAR_39, VAR_40, VAR_62);
   FUNC_38(VAR_39, VAR_62);
   FUNC_40(VAR_39, VAR_62);
   FUNC_36(VAR_39, VAR_65, VAR_62, 1, VAR_64, 0);
   FUNC_42(VAR_39, VAR_62);
   FUNC_34(VAR_39, VAR_62);
   FUNC_41(VAR_64, VAR_62);
   FUNC_32(VAR_62);
   break;
  case 'T':
   FUNC_41(VAR_64, VAR_62);
   break;
  case 'o':
   FUNC_26(VAR_39, VAR_62);
   FUNC_32(VAR_62);
   break;
  case 'I':
   FUNC_33(VAR_40, VAR_62);
   break;
  }
 }

 if ((VAR_62 & VAR_17) && VAR_48 == ((void*)0))
  FUNC_36(VAR_39, VAR_65, VAR_62, VAR_9,
      VAR_64, 0);

 if (VAR_35 != ((void*)0)) {
  if (VAR_64[0] == '_' || FUNC_48(VAR_64, "/_") != ((void*)0))
   FUNC_2(1, "anchor names beginning with '_' cannot "
       "be modified from the command line");

  switch (*VAR_35) {
  case 'r':
   FUNC_11(VAR_39, VAR_62, VAR_64);
   break;
  case 'n':
   FUNC_10(VAR_39, VAR_62, VAR_64);
   break;
  case 'q':
   FUNC_7(VAR_39, VAR_62);
   break;
  case 's':
   FUNC_13(VAR_39, VAR_40, VAR_62);
   break;
  case 'S':
   FUNC_12(VAR_39, VAR_62);
   break;
  case 'i':
   FUNC_14(VAR_39, VAR_62);
   break;
  case 'a':
   FUNC_11(VAR_39, VAR_62, VAR_64);
   FUNC_10(VAR_39, VAR_62, VAR_64);
   FUNC_15(VAR_64, VAR_62);
   if (!*VAR_64) {
    FUNC_7(VAR_39, VAR_62);
    FUNC_13(VAR_39, VAR_40, VAR_62);
    FUNC_12(VAR_39, VAR_62);
    FUNC_14(VAR_39, VAR_62);
    FUNC_8(VAR_39, VAR_62);
    FUNC_9(VAR_39, VAR_62);
   }
   break;
  case 'o':
   FUNC_8(VAR_39, VAR_62);
   break;
  case 'T':
   FUNC_15(VAR_64, VAR_62);
   break;
  }
 }
 if (VAR_53) {
  if (!FUNC_45(VAR_52[0], "label"))
   FUNC_25(VAR_39, VAR_40, VAR_62);
  else if (!FUNC_45(VAR_52[0], "id"))
   FUNC_23(VAR_39, VAR_40, VAR_62);
  else
   FUNC_28(VAR_39, VAR_40, VAR_62);
 }

 if (VAR_51)
  FUNC_24(VAR_39, VAR_40, VAR_62);

 if (VAR_55 != ((void*)0)) {
  VAR_59 = FUNC_17(VAR_57, VAR_58, VAR_54,
      VAR_55, VAR_47, VAR_64, VAR_62);
  VAR_47 = ((void*)0);
 }
 if (VAR_44 != ((void*)0)) {
  switch (*VAR_44) {
  case 'n':
   VAR_63 = 0;
   break;
  case 'b':
   VAR_63 |= VAR_15;
   break;
  case 'o':
  case 'p':
   VAR_63 |= VAR_16;
   break;
  }
 }

 if ((VAR_47 != ((void*)0)) && (VAR_41 & VAR_6) &&
     !VAR_64[0] && !(VAR_62 & VAR_23))
  if (FUNC_22())
   VAR_59 = 1;

 if (VAR_47 != ((void*)0) && !(VAR_62 & (VAR_22|VAR_23)) &&
     !VAR_64[0] && (VAR_41 & VAR_6))
  if (FUNC_21(VAR_39, VAR_62, VAR_32))
   VAR_59 = 1;

 if (VAR_47 != ((void*)0)) {
  if (VAR_64[0] == '_' || FUNC_48(VAR_64, "/_") != ((void*)0))
   FUNC_2(1, "anchor names beginning with '_' cannot "
       "be modified from the command line");
  if (FUNC_29(VAR_39, VAR_47, VAR_62, VAR_63,
      VAR_64, ((void*)0)))
   VAR_59 = 1;
  else if (!(VAR_62 & VAR_23) &&
      (VAR_41 & VAR_7))
   FUNC_50(((void*)0));
 }

 if (VAR_62 & VAR_21)
  if (FUNC_20(VAR_39, VAR_62))
   VAR_59 = 1;

 if (VAR_37 != ((void*)0)) {
  switch (*VAR_37) {
  case 'n':
   FUNC_18(VAR_39, VAR_13, VAR_62);
   break;
  case 'u':
   FUNC_18(VAR_39, VAR_14, VAR_62);
   break;
  case 'm':
   FUNC_18(VAR_39, VAR_11, VAR_62);
   break;
  case 'l':
   FUNC_18(VAR_39, VAR_12, VAR_62);
   break;
  }
 }

 FUNC_3(VAR_59);
}
