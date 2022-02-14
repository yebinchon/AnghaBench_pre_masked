
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int32_t ;
struct TYPE_7__ {int * s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int sa_family; } ;
struct servent {char* s_name; } ;
struct hostent {char* h_name; } ;
struct afd {int a_off; int a_af; int a_addrlen; } ;
typedef int socklen_t ;
typedef int numserv ;
typedef int numaddr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct hostent*) ;
 struct hostent* FUNC_8 (char const*,int ,int ,int*) ;
 struct servent* FUNC_9 (int ,char*) ;
 int * FUNC_10 (int ,char const*,char*,size_t) ;
 int FUNC_11 (struct sockaddr const*,char const*,char*,size_t,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int,char*,int) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,char*,size_t) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int
FUNC_18(const struct afd *VAR_8,
    const struct sockaddr *VAR_9, socklen_t VAR_10,
    char *VAR_11, size_t VAR_12, char *VAR_13, size_t VAR_14,
    int VAR_15)
{
 struct servent *VAR_16;
 struct hostent *VAR_17;
 u_short VAR_18;
 const char *VAR_19;
 u_int32_t VAR_20;
 int VAR_21;
 char VAR_22[512];
 char VAR_23[512];


 VAR_18 = ((const struct sockaddr_in *)VAR_9)->sin_port;
 VAR_19 = (const char *)VAR_9 + VAR_8->a_off;

 if (VAR_13 == ((void*)0) || VAR_14 == 0) {






 } else {
  if (VAR_15 & VAR_7)
   VAR_16 = ((void*)0);
  else {
   VAR_16 = FUNC_9(VAR_18,
    (VAR_15 & VAR_3) ? "udp" : "tcp");
  }
  if (VAR_16) {
   if (FUNC_17(VAR_16->s_name) + 1 > VAR_14)
    return VAR_0;
   FUNC_16(VAR_13, VAR_16->s_name, VAR_14);
  } else {
   FUNC_14(VAR_22, sizeof(VAR_22), "%u", FUNC_13(VAR_18));
   if (FUNC_17(VAR_22) + 1 > VAR_14)
    return VAR_0;
   FUNC_16(VAR_13, VAR_22, VAR_14);
  }
 }

 switch (VAR_9->sa_family) {
 case 129:
  VAR_20 = (u_int32_t)
      FUNC_12(((const struct sockaddr_in *)VAR_9)->sin_addr.s_addr);
  if (FUNC_5(VAR_20) || FUNC_4(VAR_20) ||
      FUNC_6(VAR_20))
   VAR_15 |= VAR_6;
  break;
 }
 if (VAR_11 == ((void*)0) || VAR_12 == 0) {






 } else if (VAR_15 & VAR_6) {
  size_t VAR_24;


  if (VAR_15 & VAR_4)
   return VAR_1;

  switch(VAR_8->a_af) {
  default:
   if (FUNC_10(VAR_8->a_af, VAR_19, VAR_23, sizeof(VAR_23))
       == ((void*)0))
    return VAR_2;
   VAR_24 = FUNC_17(VAR_23);
   if (VAR_24 + 1 > VAR_12)
    return VAR_0;
   FUNC_16(VAR_11, VAR_23, VAR_12);
   break;
  }
 } else {
  VAR_17 = FUNC_8(VAR_19, VAR_8->a_addrlen, VAR_8->a_af, &VAR_21);

  if (VAR_17) {
   if (FUNC_17(VAR_17->h_name) + 1 > VAR_12) {
    FUNC_7(VAR_17);
    return VAR_0;
   }
   FUNC_16(VAR_11, VAR_17->h_name, VAR_12);
   FUNC_7(VAR_17);
  } else {
   if (VAR_15 & VAR_4)
    return VAR_1;
   switch(VAR_8->a_af) {
   default:
    if (FUNC_10(VAR_8->a_af, VAR_19, VAR_11,
        VAR_12) == ((void*)0))
     return VAR_2;
    break;
   }
  }
 }
 return(0);
}
