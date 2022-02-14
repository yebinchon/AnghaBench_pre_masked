
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct servent {char* s_name; } ;
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
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int VAR_21 ;
 int FUNC_5 (int,char*) ;
 int VAR_22 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_23 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,char*,char*,char*,char*) ;
 int FUNC_10 (int,char**,char*) ;
 struct servent* FUNC_11 (int ,char*) ;
 int FUNC_12 () ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (char*,char*,struct addrinfo) ;
 int FUNC_14 (char*,int*) ;
 int FUNC_15 (struct addrinfo*,int ,int) ;
 int * FUNC_16 (char*) ;
 int VAR_27 ;
 int FUNC_17 (int ) ;
 char* VAR_28 ;
 scalar_t__ VAR_29 ;
 char* VAR_30 ;
 char** VAR_31 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_20 (char*,char*,struct addrinfo) ;
 int FUNC_21 (struct sockaddr*,int) ;
 int VAR_32 ;
 int VAR_33 ;
 char* VAR_34 ;
 int FUNC_22 (char*,char*,struct addrinfo,char const*,char const*,struct addrinfo,int,char*) ;
 int VAR_35 ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (char*,char*) ;
 char* FUNC_25 (char*) ;
 int FUNC_26 (char*,char*,int) ;
 int FUNC_27 (char*) ;
 char* FUNC_28 (char**,char*) ;
 scalar_t__ FUNC_29 (char*,int *,int) ;
 void* FUNC_30 (char*,int,int,char const**) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_31 (int) ;
 int VAR_38 ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*) ;
 char* VAR_39 ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

int
FUNC_37(int VAR_43, char *VAR_44[])
{
 int VAR_45, VAR_46, VAR_47, VAR_48;
 char *VAR_49, *VAR_50;
 struct addrinfo VAR_51;
 struct servent *VAR_52;
 socklen_t VAR_53;
 struct sockaddr_storage VAR_54;
 char *VAR_55 = ((void*)0);
 const char *VAR_56, *VAR_57 = "", *VAR_58 = ((void*)0);
 struct addrinfo VAR_59;
 char VAR_60[VAR_20];

 VAR_47 = 1;
 VAR_46 = 0;
 VAR_48 = 5;
 VAR_49 = ((void*)0);
 VAR_50 = ((void*)0);
 VAR_52 = ((void*)0);

 while ((VAR_45 = FUNC_10(VAR_43, VAR_44,
     "46DdFhI:i:klNnO:P:p:rSs:tT:UuV:vw:X:x:z")) != -1) {
  switch (VAR_45) {
  case '4':
   VAR_23 = VAR_0;
   break;
  case '6':
   VAR_23 = VAR_1;
   break;
  case 'U':
   VAR_23 = VAR_2;
   break;
  case 'X':
   if (FUNC_23(VAR_28, "connect") == 0)
    VAR_48 = -1;
   else if (FUNC_24(VAR_28, "4") == 0)
    VAR_48 = 4;
   else if (FUNC_24(VAR_28, "5") == 0)
    VAR_48 = 5;
   else
    FUNC_6(1, "unsupported proxy protocol");
   break;
  case 'd':
   VAR_21 = 1;
   break;
  case 'F':
   VAR_5 = 1;
   break;
  case 'h':
   FUNC_12();
   break;
  case 'i':
   VAR_24 = FUNC_30(VAR_28, 0, VAR_19, &VAR_56);
   if (VAR_56)
    FUNC_6(1, "interval %s: %s", VAR_56, VAR_28);
   break;
  case 'k':
   VAR_25 = 1;
   break;
  case 'l':
   VAR_26 = 1;
   break;
  case 'N':
   VAR_11 = 1;
   break;
  case 'n':
   VAR_27 = 1;
   break;
  case 'P':
   VAR_13 = VAR_28;
   break;
  case 'p':
   VAR_30 = VAR_28;
   break;
  case 'r':
   VAR_32 = 1;
   break;
  case 's':
   VAR_34 = VAR_28;
   break;
  case 't':
   VAR_36 = 1;
   break;
  case 'u':
   VAR_38 = 1;
   break;
  case 'v':
   VAR_40 = 1;
   break;
  case 'w':
   VAR_37 = FUNC_30(VAR_28, 0, VAR_6 / 1000, &VAR_56);
   if (VAR_56)
    FUNC_6(1, "timeout %s: %s", VAR_56, VAR_28);
   VAR_37 *= 1000;
   break;
  case 'x':
   VAR_41 = 1;
   if ((VAR_55 = FUNC_25(VAR_28)) == ((void*)0))
    FUNC_6(1, "strdup");
   break;
  case 'z':
   VAR_42 = 1;
   break;
  case 'D':
   VAR_4 = 1;
   break;
  case 'I':
   VAR_9 = FUNC_30(VAR_28, 1, 65536 << 14, &VAR_56);
   if (VAR_56 != ((void*)0))
    FUNC_6(1, "TCP receive window %s: %s",
        VAR_56, VAR_28);
   break;
  case 'O':
   VAR_12 = FUNC_30(VAR_28, 1, 65536 << 14, &VAR_56);
   if (VAR_56 != ((void*)0))
    FUNC_6(1, "TCP send window %s: %s",
        VAR_56, VAR_28);
   break;
  case 'S':
   VAR_17 = 1;
   break;
  case 'T':
   VAR_56 = ((void*)0);
   VAR_22 = 0;
   if (FUNC_14(VAR_28, &VAR_18))
    break;
   if (FUNC_27(VAR_28) > 1 && VAR_28[0] == '0' &&
       VAR_28[1] == 'x')
    VAR_18 = (int)FUNC_29(VAR_28, ((void*)0), 16);
   else
    VAR_18 = (int)FUNC_30(VAR_28, 0, 255,
        &VAR_56);
   if (VAR_18 < 0 || VAR_18 > 255 || VAR_56 || VAR_22)
    FUNC_6(1, "illegal tos value %s", VAR_28);
   break;
  default:
   FUNC_36(1);
  }
 }
 VAR_43 -= VAR_29;
 VAR_44 += VAR_29;


 if (VAR_44[0] && !VAR_44[1] && VAR_23 == VAR_2) {
  VAR_49 = VAR_44[0];
  VAR_50 = ((void*)0);
 } else if (VAR_44[0] && !VAR_44[1]) {
  if (!VAR_26)
   FUNC_36(1);
  VAR_50 = VAR_44[0];
  VAR_49 = ((void*)0);
 } else if (VAR_44[0] && VAR_44[1]) {
  VAR_49 = VAR_44[0];
  VAR_50 = VAR_44[1];
 } else
  FUNC_36(1);

 if (VAR_26 && VAR_34)
  FUNC_6(1, "cannot use -s and -l");
 if (VAR_26 && VAR_30)
  FUNC_6(1, "cannot use -p and -l");
 if (VAR_26 && VAR_42)
  FUNC_6(1, "cannot use -z and -l");
 if (!VAR_26 && VAR_25)
  FUNC_6(1, "must use -l with -k");


 if ((VAR_23 == VAR_2) && VAR_38 && !VAR_26) {
  if (VAR_34) {
   VAR_39 = VAR_34;
  } else {
   FUNC_26(VAR_60, "/tmp/nc.XXXXXXXXXX",
    VAR_20);
   if (FUNC_16(VAR_60) == ((void*)0))
    FUNC_5(1, "mktemp");
   VAR_39 = VAR_60;
  }
 }


 if (VAR_23 != VAR_2) {
  FUNC_15(&VAR_51, 0, sizeof(struct addrinfo));
  VAR_51.ai_family = VAR_23;
  VAR_51.ai_socktype = VAR_38 ? VAR_15 : VAR_16;
  VAR_51.ai_protocol = VAR_38 ? VAR_8 : VAR_7;
  if (VAR_27)
   VAR_51.ai_flags |= VAR_3;
 }

 if (VAR_41) {
  if (VAR_38)
   FUNC_6(1, "no proxy support for UDP mode");

  if (VAR_26)
   FUNC_6(1, "no proxy support for listen");

  if (VAR_23 == VAR_2)
   FUNC_6(1, "no proxy support for unix sockets");


  if (VAR_23 == VAR_1)
   FUNC_6(1, "no proxy support for IPv6");

  if (VAR_34)
   FUNC_6(1, "no proxy support for local source address");

  VAR_57 = FUNC_28(&VAR_55, ":");
  VAR_58 = VAR_55;

  FUNC_15(&VAR_59, 0, sizeof(struct addrinfo));
  VAR_59.ai_family = VAR_23;
  VAR_59.ai_socktype = VAR_16;
  VAR_59.ai_protocol = VAR_7;
  if (VAR_27)
   VAR_59.ai_flags |= VAR_3;
 }

 if (VAR_26) {
  int VAR_61;
  VAR_47 = 0;

  if (VAR_23 == VAR_2) {
   if (VAR_38)
    VAR_46 = FUNC_32(VAR_49);
   else
    VAR_46 = FUNC_34(VAR_49);
  }


  for (;;) {
   if (VAR_23 != VAR_2)
    VAR_46 = FUNC_13(VAR_49, VAR_50, VAR_51);
   if (VAR_46 < 0)
    FUNC_5(1, "local_listen");




   if (VAR_38 && VAR_25)
    FUNC_18(VAR_46);





   else if (VAR_38 && !VAR_25) {
    int VAR_62, VAR_63;
    char VAR_64[16384];
    struct sockaddr_storage VAR_65;

    VAR_53 = sizeof(VAR_65);
    VAR_63 = 2048;
    VAR_62 = FUNC_19(VAR_46, VAR_64, VAR_63, VAR_10,
        (struct sockaddr *)&VAR_65, &VAR_53);
    if (VAR_62 < 0)
     FUNC_5(1, "recvfrom");

    VAR_62 = FUNC_4(VAR_46, (struct sockaddr *)&VAR_65, VAR_53);
    if (VAR_62 < 0)
     FUNC_5(1, "connect");

    if (VAR_40)
     FUNC_21((struct sockaddr *)&VAR_65, VAR_53);

    FUNC_18(VAR_46);
   } else {
    VAR_53 = sizeof(VAR_54);
    VAR_61 = FUNC_0(VAR_46, (struct sockaddr *)&VAR_54,
        &VAR_53);
    if (VAR_61 == -1) {

     FUNC_5(1, "accept");
    }
    if (VAR_40)
     FUNC_21((struct sockaddr *)&VAR_54, VAR_53);

    FUNC_18(VAR_61);
    FUNC_3(VAR_61);
   }

   if (VAR_23 != VAR_2)
    FUNC_3(VAR_46);
   else if (VAR_38) {
    if (FUNC_4(VAR_46, ((void*)0), 0) < 0)
     FUNC_5(1, "connect");
   }

   if (!VAR_25)
    break;
  }
 } else if (VAR_23 == VAR_2) {
  VAR_47 = 0;

  if ((VAR_46 = FUNC_33(VAR_49)) > 0 && !VAR_42) {
   FUNC_18(VAR_46);
   FUNC_3(VAR_46);
  } else
   VAR_47 = 1;

  if (VAR_38)
   FUNC_35(VAR_39);
  FUNC_7(VAR_47);

 } else {
  int VAR_66 = 0;


  FUNC_2(VAR_50);


  for (VAR_66 = 0; VAR_31[VAR_66] != ((void*)0); VAR_66++) {
   if (VAR_46)
    FUNC_3(VAR_46);

   if (VAR_41)
    VAR_46 = FUNC_22(VAR_49, VAR_31[VAR_66], VAR_51,
        VAR_57, VAR_58, VAR_59, VAR_48,
        VAR_13);
   else
    VAR_46 = FUNC_20(VAR_49, VAR_31[VAR_66], VAR_51);

   if (VAR_46 < 0)
    continue;

   VAR_47 = 0;
   if (VAR_40 || VAR_42) {

    if (VAR_38) {
     if (FUNC_31(VAR_46) == -1) {
      VAR_47 = 1;
      continue;
     }
    }


    if (VAR_27)
     VAR_52 = ((void*)0);
    else {
     VAR_52 = FUNC_11(
         FUNC_17(FUNC_1(VAR_31[VAR_66])),
         VAR_38 ? "udp" : "tcp");
    }

    FUNC_9(VAR_35,
        "Connection to %s %s port [%s/%s] "
        "succeeded!\n", VAR_49, VAR_31[VAR_66],
        VAR_38 ? "udp" : "tcp",
        VAR_52 ? VAR_52->s_name : "*");
   }
   if (VAR_5)
    FUNC_8(VAR_46);
   else if (!VAR_42)
    FUNC_18(VAR_46);
  }
 }

 if (VAR_46)
  FUNC_3(VAR_46);

 FUNC_7(VAR_47);
}
