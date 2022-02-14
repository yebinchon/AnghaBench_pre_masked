
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct servent {char* s_name; } ;
struct option {char* member_0; int member_3; int * member_2; int member_1; } ;
struct addrinfo {int ai_flags; void* ai_protocol; void* ai_socktype; scalar_t__ ai_family; } ;
typedef int socklen_t ;
typedef int cliaddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int VAR_23 ;
 int FUNC_5 (int,char*) ;
 int VAR_24 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_25 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int,char**,char*,struct option*,int *) ;
 struct servent* FUNC_11 (int ,char*) ;
 int FUNC_12 () ;
 void* VAR_26 ;
 char** VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_13 (char*,char*,struct addrinfo) ;
 int FUNC_14 (char*,int*) ;
 int FUNC_15 (struct addrinfo*,int ,int) ;
 int * FUNC_16 (char*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_17 (int ) ;
 char* VAR_32 ;
 scalar_t__ VAR_33 ;
 char* VAR_34 ;
 char** VAR_35 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_20 (char*,char*,struct addrinfo) ;
 int FUNC_21 (struct sockaddr*,int) ;
 int VAR_36 ;
 int VAR_37 ;
 char* VAR_38 ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (char*,char*,struct addrinfo,char const*,char const*,struct addrinfo,int,char*) ;
 int VAR_39 ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char const*,char*) ;
 char* FUNC_26 (char*) ;
 int FUNC_27 (char*,char*,int) ;
 int FUNC_28 (char*) ;
 char* FUNC_29 (char**,char*) ;
 scalar_t__ FUNC_30 (char*,int *,int) ;
 void* FUNC_31 (char*,int,int,char const**) ;
 int FUNC_32 (char*,int*,size_t*,int *,int ) ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_33 (int) ;
 int VAR_42 ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*) ;
 char* VAR_43 ;
 int FUNC_36 (char*) ;
 int FUNC_37 (char*) ;
 int FUNC_38 (int) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;

int
FUNC_39(int VAR_47, char *VAR_48[])
{
 int VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
 int VAR_54;
 size_t VAR_55 = sizeof(int);
 char *VAR_56, *VAR_57;
 struct addrinfo VAR_58;
 struct servent *VAR_59;
 socklen_t VAR_60;
 struct sockaddr_storage VAR_61;
 char *VAR_62;
 const char *VAR_63, *VAR_64 = "", *VAR_65 = ((void*)0);
 struct addrinfo VAR_66;
 char VAR_67[VAR_22];
 struct option VAR_68[] = {
  { "no-tcpopt", VAR_31, &VAR_6, 1 },
  { ((void*)0), 0, ((void*)0), 0 }
 };

 VAR_51 = 1;
 VAR_53 = 0;
 VAR_50 = 0;
 VAR_52 = 5;
 VAR_56 = ((void*)0);
 VAR_57 = ((void*)0);
 VAR_59 = ((void*)0);

 FUNC_22(VAR_15, VAR_16);

 while ((VAR_49 = FUNC_10(VAR_47, VAR_48,
     "46DdEe:FhI:i:klNnoO:P:p:rSs:tT:UuV:vw:X:x:z",
     VAR_68, ((void*)0))) != -1) {
  switch (VAR_49) {
  case '4':
   VAR_25 = VAR_0;
   break;
  case '6':
   VAR_25 = VAR_1;
   break;
  case 'U':
   VAR_25 = VAR_2;
   break;
  case 'X':
   if (FUNC_24(VAR_32, "connect") == 0)
    VAR_52 = -1;
   else if (FUNC_25(VAR_32, "4") == 0)
    VAR_52 = 4;
   else if (FUNC_25(VAR_32, "5") == 0)
    VAR_52 = 5;
   else
    FUNC_6(1, "unsupported proxy protocol");
   break;
  case 'd':
   VAR_23 = 1;
   break;
  case 'e':



   FUNC_6(1, "IPsec support unavailable.");

   break;
  case 'E':




   FUNC_6(1, "IPsec support unavailable.");

   break;
  case 'F':
   VAR_5 = 1;
   break;
  case 'h':
   FUNC_12();
   break;
  case 'i':
   VAR_26 = FUNC_31(VAR_32, 0, VAR_21, &VAR_63);
   if (VAR_63)
    FUNC_6(1, "interval %s: %s", VAR_63, VAR_32);
   break;
  case 'k':
   VAR_28 = 1;
   break;
  case 'l':
   VAR_29 = 1;
   break;
  case 'N':
   VAR_12 = 1;
   break;
  case 'n':
   VAR_30 = 1;
   break;
  case 'o':
   FUNC_9(VAR_39, "option -o is deprecated.\n");
   break;
  case 'P':
   VAR_14 = VAR_32;
   break;
  case 'p':
   VAR_34 = VAR_32;
   break;
  case 'r':
   VAR_36 = 1;
   break;
  case 's':
   VAR_38 = VAR_32;
   break;
  case 't':
   VAR_40 = 1;
   break;
  case 'u':
   VAR_42 = 1;
   break;
  case 'V':
   if (FUNC_32("net.fibs", &VAR_54, &VAR_55, ((void*)0), 0) == -1)
    FUNC_6(1, "Multiple FIBS not supported");
   VAR_37 = (int)FUNC_31(VAR_32, 0,
       VAR_54 - 1, &VAR_63);
   if (VAR_63)
    FUNC_6(1, "rtable %s: %s", VAR_63, VAR_32);
   break;
  case 'v':
   VAR_44 = 1;
   break;
  case 'w':
   VAR_41 = FUNC_31(VAR_32, 0, VAR_7 / 1000, &VAR_63);
   if (VAR_63)
    FUNC_6(1, "timeout %s: %s", VAR_63, VAR_32);
   VAR_41 *= 1000;
   break;
  case 'x':
   VAR_45 = 1;
   if ((VAR_62 = FUNC_26(VAR_32)) == ((void*)0))
    FUNC_5(1, ((void*)0));
   break;
  case 'z':
   VAR_46 = 1;
   break;
  case 'D':
   VAR_4 = 1;
   break;
  case 'I':
   VAR_10 = FUNC_31(VAR_32, 1, 65536 << 14, &VAR_63);
   if (VAR_63 != ((void*)0))
    FUNC_6(1, "TCP receive window %s: %s",
        VAR_63, VAR_32);
   break;
  case 'O':
   VAR_13 = FUNC_31(VAR_32, 1, 65536 << 14, &VAR_63);
   if (VAR_63 != ((void*)0)) {
       if (FUNC_25(VAR_63, "invalid") != 0)
    FUNC_6(1, "TCP send window %s: %s",
        VAR_63, VAR_32);
   }
   break;
  case 'S':
   VAR_19 = 1;
   break;
  case 'T':
   VAR_63 = ((void*)0);
   VAR_24 = 0;
   if (FUNC_14(VAR_32, &VAR_20))
    break;
   if (FUNC_28(VAR_32) > 1 && VAR_32[0] == '0' &&
       VAR_32[1] == 'x')
    VAR_20 = (int)FUNC_30(VAR_32, ((void*)0), 16);
   else
    VAR_20 = (int)FUNC_31(VAR_32, 0, 255,
        &VAR_63);
   if (VAR_20 < 0 || VAR_20 > 255 || VAR_63 || VAR_24)
    FUNC_6(1, "illegal tos value %s", VAR_32);
   break;
  default:
   FUNC_38(1);
  }
 }
 VAR_47 -= VAR_33;
 VAR_48 += VAR_33;


 if (VAR_48[0] && !VAR_48[1] && VAR_25 == VAR_2) {
  VAR_56 = VAR_48[0];
  VAR_57 = ((void*)0);
 } else if (VAR_48[0] && !VAR_48[1]) {
  if (!VAR_29)
   FUNC_38(1);
  VAR_57 = VAR_48[0];
  VAR_56 = ((void*)0);
 } else if (VAR_48[0] && VAR_48[1]) {
  VAR_56 = VAR_48[0];
  VAR_57 = VAR_48[1];
 } else
  FUNC_38(1);

 if (VAR_29 && VAR_38)
  FUNC_6(1, "cannot use -s and -l");
 if (VAR_29 && VAR_34)
  FUNC_6(1, "cannot use -p and -l");
 if (VAR_29 && VAR_46)
  FUNC_6(1, "cannot use -z and -l");
 if (!VAR_29 && VAR_28)
  FUNC_6(1, "must use -l with -k");


 if ((VAR_25 == VAR_2) && VAR_42 && !VAR_29) {
  if (VAR_38) {
   VAR_43 = VAR_38;
  } else {
   FUNC_27(VAR_67, "/tmp/nc.XXXXXXXXXX",
    VAR_22);
   if (FUNC_16(VAR_67) == ((void*)0))
    FUNC_5(1, "mktemp");
   VAR_43 = VAR_67;
  }
 }


 if (VAR_25 != VAR_2) {
  FUNC_15(&VAR_58, 0, sizeof(struct addrinfo));
  VAR_58.ai_family = VAR_25;
  VAR_58.ai_socktype = VAR_42 ? VAR_17 : VAR_18;
  VAR_58.ai_protocol = VAR_42 ? VAR_9 : VAR_8;
  if (VAR_30)
   VAR_58.ai_flags |= VAR_3;
 }

 if (VAR_45) {
  if (VAR_42)
   FUNC_6(1, "no proxy support for UDP mode");

  if (VAR_29)
   FUNC_6(1, "no proxy support for listen");

  if (VAR_25 == VAR_2)
   FUNC_6(1, "no proxy support for unix sockets");


  if (VAR_25 == VAR_1)
   FUNC_6(1, "no proxy support for IPv6");

  if (VAR_38)
   FUNC_6(1, "no proxy support for local source address");

  VAR_64 = FUNC_29(&VAR_62, ":");
  VAR_65 = VAR_62;

  FUNC_15(&VAR_66, 0, sizeof(struct addrinfo));
  VAR_66.ai_family = VAR_25;
  VAR_66.ai_socktype = VAR_18;
  VAR_66.ai_protocol = VAR_8;
  if (VAR_30)
   VAR_66.ai_flags |= VAR_3;
 }

 if (VAR_29) {
  int VAR_69;
  VAR_51 = 0;

  if (VAR_25 == VAR_2) {
   if (VAR_42)
    VAR_50 = FUNC_34(VAR_56);
   else
    VAR_50 = FUNC_36(VAR_56);
  }


  for (;;) {
   if (VAR_25 != VAR_2)
    VAR_50 = FUNC_13(VAR_56, VAR_57, VAR_58);
   if (VAR_50 < 0)
    FUNC_5(1, ((void*)0));




   if (VAR_42 && VAR_28)
    FUNC_18(VAR_50);





   else if (VAR_42 && !VAR_28) {
    int VAR_70, VAR_71;
    char VAR_72[16384];
    struct sockaddr_storage VAR_73;

    VAR_60 = sizeof(VAR_73);
    VAR_71 = 2048;
    VAR_70 = FUNC_19(VAR_50, VAR_72, VAR_71, VAR_11,
        (struct sockaddr *)&VAR_73, &VAR_60);
    if (VAR_70 < 0)
     FUNC_5(1, "recvfrom");

    VAR_70 = FUNC_4(VAR_50, (struct sockaddr *)&VAR_73, VAR_60);
    if (VAR_70 < 0)
     FUNC_5(1, "connect");

    if (VAR_44)
     FUNC_21((struct sockaddr *)&VAR_73, VAR_60);

    FUNC_18(VAR_50);
   } else {
    VAR_60 = sizeof(VAR_61);
    VAR_69 = FUNC_0(VAR_50, (struct sockaddr *)&VAR_61,
        &VAR_60);
    if (VAR_69 == -1) {

     FUNC_5(1, "accept");
    }
    if (VAR_44)
     FUNC_21((struct sockaddr *)&VAR_61, VAR_60);

    FUNC_18(VAR_69);
    FUNC_3(VAR_69);
   }

   if (VAR_25 != VAR_2)
    FUNC_3(VAR_50);
   else if (VAR_42) {
    if (FUNC_4(VAR_50, ((void*)0), 0) < 0)
     FUNC_5(1, "connect");
   }

   if (!VAR_28)
    break;
  }
 } else if (VAR_25 == VAR_2) {
  VAR_51 = 0;

  if ((VAR_50 = FUNC_35(VAR_56)) > 0 && !VAR_46) {
   FUNC_18(VAR_50);
   FUNC_3(VAR_50);
  } else
   VAR_51 = 1;

  if (VAR_42)
   FUNC_37(VAR_43);
  FUNC_7(VAR_51);

 } else {
  int VAR_74 = 0;


  FUNC_2(VAR_57);


  for (VAR_74 = 0; VAR_35[VAR_74] != ((void*)0); VAR_74++) {
   if (VAR_50)
    FUNC_3(VAR_50);

   if (VAR_45)
    VAR_50 = FUNC_23(VAR_56, VAR_35[VAR_74], VAR_58,
        VAR_64, VAR_65, VAR_66, VAR_52,
        VAR_14);
   else
    VAR_50 = FUNC_20(VAR_56, VAR_35[VAR_74], VAR_58);

   if (VAR_50 < 0)
    continue;

   VAR_51 = 0;
   if (VAR_44 || VAR_46) {

    if (VAR_42) {
     if (FUNC_33(VAR_50) == -1) {
      VAR_51 = 1;
      continue;
     }
    }


    if (VAR_30)
     VAR_59 = ((void*)0);
    else {
     VAR_59 = FUNC_11(
         FUNC_17(FUNC_1(VAR_35[VAR_74])),
         VAR_42 ? "udp" : "tcp");
    }

    FUNC_9(VAR_39,
        "Connection to %s %s port [%s/%s] "
        "succeeded!\n", VAR_56, VAR_35[VAR_74],
        VAR_42 ? "udp" : "tcp",
        VAR_59 ? VAR_59->s_name : "*");
   }
   if (VAR_5)
    FUNC_8(VAR_50);
   else if (!VAR_46)
    FUNC_18(VAR_50);
  }
 }

 if (VAR_50)
  FUNC_3(VAR_50);

 FUNC_7(VAR_51);
}
