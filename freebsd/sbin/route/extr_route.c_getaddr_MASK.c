
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr_dl {int sa_family; int sa_len; int sdl_len; } ;
struct sockaddr {int sa_family; int sa_len; int sdl_len; } ;
struct netent {int n_net; } ;
struct ifaddrs {char* ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct hostent {scalar_t__ h_length; int h_addr; int h_addrtype; } ;
struct addrinfo {int ai_family; int ai_addrlen; struct sockaddr_dl* ai_addr; int ai_socktype; } ;
typedef int hints ;
struct TYPE_4__ {int sa_family; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (size_t,int) ;




 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (struct ifaddrs*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 struct hostent* FUNC_7 (char*) ;
 int FUNC_8 (struct ifaddrs**) ;
 struct netent* FUNC_9 (char*) ;
 int FUNC_10 (struct sockaddr_in6*,char*) ;
 scalar_t__ FUNC_11 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__) ;
 int FUNC_13 (int ,struct sockaddr_in*,struct sockaddr_in*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,struct sockaddr_dl*) ;
 int FUNC_16 (struct sockaddr_dl*,struct sockaddr_dl*,int) ;
 int FUNC_17 (char*,int ,int ) ;
 int FUNC_18 (struct addrinfo*,int ,int) ;
 int FUNC_19 (int ) ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_20 (char*,struct sockaddr_dl*,int) ;
 char* FUNC_21 (char*,char) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (char*,int ,int ) ;
 int FUNC_24 (char*) ;

__attribute__((used)) static int
FUNC_25(int VAR_15, char *VAR_16, struct hostent **VAR_17, int VAR_18)
{
 struct sockaddr *VAR_19;
 if (VAR_15 < 0 || VAR_15 >= VAR_8)
  FUNC_24("internal error");
 if (VAR_11 == 0) {







  VAR_11 = 132;
  VAR_12 = sizeof(struct sockaddr_dl);

 }

 VAR_17 = ((void*)0);

 VAR_13 |= (1 << VAR_15);
 VAR_19 = (struct sockaddr *)&VAR_14[VAR_15];
 VAR_19->sa_family = VAR_11;
 VAR_19->sa_len = VAR_12;

 switch (VAR_15) {
 case 129:
  if (VAR_18 & VAR_5) {
   struct ifaddrs *VAR_20, *VAR_21;
   struct sockaddr_dl *VAR_22 = (struct sockaddr_dl *)(void *)VAR_19;
   struct sockaddr_dl *VAR_23 = ((void*)0);

   if (FUNC_8(&VAR_20))
    FUNC_1(VAR_2, "getifaddrs");

   for (VAR_21 = VAR_20; VAR_21 != ((void*)0); VAR_21 = VAR_21->ifa_next) {
    if (VAR_21->ifa_addr->sa_family != 132)
     continue;

    if (FUNC_22(VAR_16, VAR_21->ifa_name) != 0)
     continue;

    VAR_23 = (struct sockaddr_dl *)(void *)VAR_21->ifa_addr;
   }

   if (VAR_23 != ((void*)0)) {




    FUNC_16(VAR_22, VAR_23, VAR_23->sdl_len);
   }
   FUNC_4(VAR_20);
   if (VAR_23 != ((void*)0))
    return(1);
   else
    FUNC_2(VAR_0,
        "interface '%s' does not exist", VAR_16);
  }
  break;
 case 128:
  VAR_19->sa_family = 132;
  break;
 }
 if (FUNC_22(VAR_16, "default") == 0) {



  switch (VAR_15) {
  case 130:
   VAR_18 |= VAR_4;
   FUNC_25(VAR_9, VAR_16, 0, VAR_18);
   break;
  }
  return (0);
 }
 switch (VAR_19->sa_family) {
 case 132:
  FUNC_15(VAR_16, (struct sockaddr_dl *)(void *)VAR_19);
  return (1);

 case 131:
  FUNC_20(VAR_16, VAR_19, sizeof(struct sockaddr_storage));
  return (1);



 default:
  break;
 }
 FUNC_2(VAR_1, "bad address: %s", VAR_16);
}
