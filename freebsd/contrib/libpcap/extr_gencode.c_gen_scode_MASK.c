
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_24__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct qual {int proto; int dir; int addr; } ;
struct in6_addr {int dummy; } ;
struct block {int dummy; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_family; struct addrinfo* ai_next; } ;
typedef int mask128 ;
struct TYPE_23__ {int constant_part; } ;
struct TYPE_25__ {struct addrinfo* ai; TYPE_1__ off_linktype; int linktype; } ;
typedef TYPE_3__ compiler_state_t ;
typedef int bpf_u_int32 ;
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

 int FUNC_0 (char const*,unsigned short*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (struct block*,struct block*) ;
 struct block* FUNC_6 (TYPE_3__*,int *,int) ;
 struct block* FUNC_7 (TYPE_3__*,int *,int) ;
 struct block* FUNC_8 (TYPE_3__*,int *,struct addrinfo*,int,int) ;
 struct block* FUNC_9 (TYPE_3__*,unsigned short,int,int,int,int) ;
 struct block* FUNC_10 (TYPE_3__*,int *,struct in6_addr*,int,int,int) ;
 struct block* FUNC_11 (TYPE_3__*,int *,int) ;
 int FUNC_12 (struct block*,struct block*) ;
 struct block* FUNC_13 (TYPE_3__*,int,int,int) ;
 struct block* FUNC_14 (TYPE_3__*,int,int,int) ;
 struct block* FUNC_15 (TYPE_3__*,int,int,int,int) ;
 struct block* FUNC_16 (TYPE_3__*,int,int,int,int) ;
 struct block* FUNC_17 (TYPE_3__*) ;
 struct block* FUNC_18 (TYPE_3__*,int,int,int) ;
 struct block* FUNC_19 (TYPE_3__*,int,int,int) ;
 struct block* FUNC_20 (TYPE_3__*,int *,int) ;
 struct block* FUNC_21 (TYPE_3__*,int *,int) ;
 int FUNC_22 (TYPE_3__*,char const*,int) ;
 int FUNC_23 (struct in6_addr*,int,int) ;
 unsigned short FUNC_24 (int ) ;
 int * FUNC_25 (char const*) ;
 struct addrinfo* FUNC_26 (char const*) ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (char const*,int*,int*) ;
 int FUNC_29 (char const*,int*,int*,int*) ;
 int FUNC_30 (TYPE_3__*) ;

struct block *
FUNC_31(compiler_state_t *VAR_11, const char *VAR_12, struct qual VAR_13)
{
 int VAR_14 = VAR_13.proto;
 int VAR_15 = VAR_13.dir;
 int VAR_16;
 u_char *VAR_17;
 bpf_u_int32 VAR_18, VAR_19;
 struct addrinfo *VAR_20, *VAR_21;
 struct sockaddr_in *VAR_22;





 struct block *VAR_23, *VAR_24;
 int VAR_25, VAR_26;
 int VAR_27, VAR_28;

 switch (VAR_13.addr) {

 case 133:
  VAR_19 = FUNC_27(VAR_12);
  if (VAR_19 == 0)
   FUNC_2(VAR_11, "unknown network '%s'", VAR_12);

  VAR_18 = 0xffffffff;
  while (VAR_19 && (VAR_19 & 0xff000000) == 0) {
   VAR_19 <<= 8;
   VAR_18 <<= 8;
  }
  return FUNC_9(VAR_11, VAR_19, VAR_18, VAR_14, VAR_15, VAR_13.addr);

 case 136:
 case 134:
  if (VAR_14 == VAR_7) {
   switch (VAR_11->linktype) {

   case 147:
   case 140:
   case 139:
    VAR_17 = FUNC_25(VAR_12);
    if (VAR_17 == ((void*)0))
     FUNC_2(VAR_11,
         "unknown ether host '%s'", VAR_12);
    VAR_24 = FUNC_17(VAR_11);
    VAR_23 = FUNC_6(VAR_11, VAR_17, VAR_15);
    if (VAR_24 != ((void*)0))
     FUNC_5(VAR_24, VAR_23);
    FUNC_3(VAR_17);
    return VAR_23;

   case 146:
    VAR_17 = FUNC_25(VAR_12);
    if (VAR_17 == ((void*)0))
     FUNC_2(VAR_11,
         "unknown FDDI host '%s'", VAR_12);
    VAR_23 = FUNC_7(VAR_11, VAR_17, VAR_15);
    FUNC_3(VAR_17);
    return VAR_23;

   case 145:
    VAR_17 = FUNC_25(VAR_12);
    if (VAR_17 == ((void*)0))
     FUNC_2(VAR_11,
         "unknown token ring host '%s'", VAR_12);
    VAR_23 = FUNC_20(VAR_11, VAR_17, VAR_15);
    FUNC_3(VAR_17);
    return VAR_23;

   case 144:
   case 137:
   case 142:
   case 143:
   case 138:
    VAR_17 = FUNC_25(VAR_12);
    if (VAR_17 == ((void*)0))
     FUNC_2(VAR_11,
         "unknown 802.11 host '%s'", VAR_12);
    VAR_23 = FUNC_21(VAR_11, VAR_17, VAR_15);
    FUNC_3(VAR_17);
    return VAR_23;

   case 141:
    VAR_17 = FUNC_25(VAR_12);
    if (VAR_17 == ((void*)0))
     FUNC_2(VAR_11,
         "unknown Fibre Channel host '%s'", VAR_12);
    VAR_23 = FUNC_11(VAR_11, VAR_17, VAR_15);
    FUNC_3(VAR_17);
    return VAR_23;
   }

   FUNC_2(VAR_11, "only ethernet/FDDI/token ring/802.11/ATM LANE/Fibre Channel supports link-level host name");
  } else if (VAR_14 == VAR_4) {
   unsigned short VAR_29;

   if (!FUNC_0(VAR_12, &VAR_29)) {



    FUNC_2(VAR_11, "decnet name support not included, '%s' cannot be translated\n",
     VAR_12);

   }




   return (FUNC_9(VAR_11, VAR_29, 0, VAR_14, VAR_15, VAR_13.addr));
  } else {



   VAR_21 = VAR_20 = FUNC_26(VAR_12);
   if (VAR_20 == ((void*)0))
    FUNC_2(VAR_11, "unknown host '%s'", VAR_12);
   VAR_11->ai = VAR_20;
   VAR_23 = VAR_24 = ((void*)0);
   VAR_16 = VAR_14;



   if (VAR_11->off_linktype.constant_part == VAR_3 &&
       VAR_16 == 136) {
    VAR_16 = VAR_5;



   }
   for (VAR_20 = VAR_21; VAR_20; VAR_20 = VAR_20->ai_next) {
    switch (VAR_20->ai_family) {
    case 149:





     VAR_22 = (struct sockaddr_in *)
      VAR_20->ai_addr;
     VAR_24 = FUNC_9(VAR_11, FUNC_24(VAR_22->sin_addr.s_addr),
      0xffffffff, VAR_16, VAR_15, VAR_13.addr);
     break;
    default:
     continue;
    }
    if (VAR_23)
     FUNC_12(VAR_23, VAR_24);
    VAR_23 = VAR_24;
   }
   VAR_11->ai = ((void*)0);
   FUNC_4(VAR_21);
   if (VAR_23 == ((void*)0)) {
    FUNC_2(VAR_11, "unknown host '%s'%s", VAR_12,
        (VAR_14 == 136)
     ? ""
     : " for specified address family");
   }
   return VAR_23;
  }

 case 132:
  if (VAR_14 != 136 &&
      VAR_14 != VAR_10 && VAR_14 != VAR_9 && VAR_14 != VAR_8)
   FUNC_2(VAR_11, "illegal qualifier of 'port'");
  if (FUNC_28(VAR_12, &VAR_25, &VAR_26) == 0)
   FUNC_2(VAR_11, "unknown port '%s'", VAR_12);
  if (VAR_14 == VAR_10) {
   if (VAR_26 == VAR_1)
    FUNC_2(VAR_11, "port '%s' is tcp", VAR_12);
   else if (VAR_26 == VAR_0)
    FUNC_2(VAR_11, "port '%s' is sctp", VAR_12);
   else

    VAR_26 = VAR_2;
  }
  if (VAR_14 == VAR_9) {
   if (VAR_26 == VAR_2)
    FUNC_2(VAR_11, "port '%s' is udp", VAR_12);

   else if (VAR_26 == VAR_0)
    FUNC_2(VAR_11, "port '%s' is sctp", VAR_12);
   else

    VAR_26 = VAR_1;
  }
  if (VAR_14 == VAR_8) {
   if (VAR_26 == VAR_2)
    FUNC_2(VAR_11, "port '%s' is udp", VAR_12);

   else if (VAR_26 == VAR_1)
    FUNC_2(VAR_11, "port '%s' is tcp", VAR_12);
   else

    VAR_26 = VAR_0;
  }
  if (VAR_25 < 0)
   FUNC_2(VAR_11, "illegal port number %d < 0", VAR_25);
  if (VAR_25 > 65535)
   FUNC_2(VAR_11, "illegal port number %d > 65535", VAR_25);
  VAR_23 = FUNC_13(VAR_11, VAR_25, VAR_26, VAR_15);
  FUNC_12(FUNC_14(VAR_11, VAR_25, VAR_26, VAR_15), VAR_23);
  return VAR_23;

 case 131:
  if (VAR_14 != 136 &&
      VAR_14 != VAR_10 && VAR_14 != VAR_9 && VAR_14 != VAR_8)
   FUNC_2(VAR_11, "illegal qualifier of 'portrange'");
  if (FUNC_29(VAR_12, &VAR_27, &VAR_28, &VAR_26) == 0)
   FUNC_2(VAR_11, "unknown port in range '%s'", VAR_12);
  if (VAR_14 == VAR_10) {
   if (VAR_26 == VAR_1)
    FUNC_2(VAR_11, "port in range '%s' is tcp", VAR_12);
   else if (VAR_26 == VAR_0)
    FUNC_2(VAR_11, "port in range '%s' is sctp", VAR_12);
   else

    VAR_26 = VAR_2;
  }
  if (VAR_14 == VAR_9) {
   if (VAR_26 == VAR_2)
    FUNC_2(VAR_11, "port in range '%s' is udp", VAR_12);
   else if (VAR_26 == VAR_0)
    FUNC_2(VAR_11, "port in range '%s' is sctp", VAR_12);
   else

    VAR_26 = VAR_1;
  }
  if (VAR_14 == VAR_8) {
   if (VAR_26 == VAR_2)
    FUNC_2(VAR_11, "port in range '%s' is udp", VAR_12);
   else if (VAR_26 == VAR_1)
    FUNC_2(VAR_11, "port in range '%s' is tcp", VAR_12);
   else

    VAR_26 = VAR_0;
  }
  if (VAR_27 < 0)
   FUNC_2(VAR_11, "illegal port number %d < 0", VAR_27);
  if (VAR_27 > 65535)
   FUNC_2(VAR_11, "illegal port number %d > 65535", VAR_27);
  if (VAR_28 < 0)
   FUNC_2(VAR_11, "illegal port number %d < 0", VAR_28);
  if (VAR_28 > 65535)
   FUNC_2(VAR_11, "illegal port number %d > 65535", VAR_28);

  VAR_23 = FUNC_15(VAR_11, VAR_27, VAR_28, VAR_26, VAR_15);
  FUNC_12(FUNC_16(VAR_11, VAR_27, VAR_28, VAR_26, VAR_15), VAR_23);
  return VAR_23;

 case 135:

  VAR_17 = FUNC_25(VAR_12);
  if (VAR_17 == ((void*)0))
   FUNC_2(VAR_11, "unknown ether host: %s", VAR_12);

  VAR_20 = FUNC_26(VAR_12);
  VAR_11->ai = VAR_20;
  if (VAR_20 == ((void*)0))
   FUNC_2(VAR_11, "unknown host '%s'", VAR_12);
  VAR_23 = FUNC_8(VAR_11, VAR_17, VAR_20, VAR_14, VAR_15);
  VAR_11->ai = ((void*)0);
  FUNC_4(VAR_20);
  if (VAR_23 == ((void*)0))
   FUNC_2(VAR_11, "unknown host '%s'", VAR_12);
  return VAR_23;




 case 130:
  VAR_26 = FUNC_22(VAR_11, VAR_12, VAR_14);
  if (VAR_26 >= 0)
   return FUNC_18(VAR_11, VAR_26, VAR_14, VAR_15);
  else
   FUNC_2(VAR_11, "unknown protocol: %s", VAR_12);

 case 129:
  VAR_26 = FUNC_22(VAR_11, VAR_12, VAR_14);
  if (VAR_26 >= 0)
   return FUNC_19(VAR_11, VAR_26, VAR_14, VAR_15);
  else
   FUNC_2(VAR_11, "unknown protocol: %s", VAR_12);

 case 128:
  FUNC_30(VAR_11);

 }
 FUNC_1();

}
