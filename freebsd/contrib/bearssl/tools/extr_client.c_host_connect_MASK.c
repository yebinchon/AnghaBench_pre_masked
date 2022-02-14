
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct addrinfo {int ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int SOCKET ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct addrinfo*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_8 (int ,void*,char*,int) ;
 int FUNC_9 (int,int ,int*) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char*,char*,int) ;
 int VAR_9 ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_10, const char *VAR_11, int VAR_12)
{
 struct addrinfo VAR_13, *VAR_14, *VAR_15;
 SOCKET VAR_16;
 int VAR_17;

 FUNC_10(&VAR_13, 0, sizeof VAR_13);
 VAR_13.ai_family = VAR_7;
 VAR_13.ai_socktype = VAR_8;
 VAR_17 = FUNC_7(VAR_10, VAR_11, &VAR_13, &VAR_14);
 if (VAR_17 != 0) {
  FUNC_4(VAR_9, "ERROR: getaddrinfo(): %s\n",
   FUNC_6(VAR_17));
  return VAR_5;
 }
 VAR_16 = VAR_5;
 for (VAR_15 = VAR_14; VAR_15 != ((void*)0); VAR_15 = VAR_15->ai_next) {
  if (VAR_12) {
   struct sockaddr *VAR_18;
   void *VAR_19;
   char VAR_20[VAR_4 + 50];

   VAR_18 = (struct sockaddr *)VAR_15->ai_addr;
   if (VAR_18->sa_family == VAR_0) {
    VAR_19 = &((struct sockaddr_in *)
     (void *)VAR_18)->sin_addr;
   } else if (VAR_18->sa_family == VAR_1) {
    VAR_19 = &((struct sockaddr_in6 *)
     (void *)VAR_18)->sin6_addr;
   } else {
    VAR_19 = ((void*)0);
   }
   if (VAR_19 != ((void*)0)) {
    if (!FUNC_8(VAR_15->ai_family, VAR_19,
     VAR_20, sizeof VAR_20))
    {
     FUNC_14(VAR_20, "<invalid>");
    }
   } else {
    FUNC_13(VAR_20, "<unknown family: %d>",
     (int)VAR_18->sa_family);
   }
   FUNC_4(VAR_9, "connecting to: %s\n", VAR_20);
  }
  VAR_16 = FUNC_12(VAR_15->ai_family, VAR_15->ai_socktype, VAR_15->ai_protocol);
  if (VAR_16 == VAR_5) {
   if (VAR_12) {
    FUNC_11("socket()");
   }
   continue;
  }
  if (FUNC_2(VAR_16, VAR_15->ai_addr, VAR_15->ai_addrlen) == VAR_5) {
   if (VAR_12) {
    FUNC_11("connect()");
   }



   FUNC_0(VAR_16);

   continue;
  }
  break;
 }
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_14);
  FUNC_4(VAR_9, "ERROR: failed to connect\n");
  return VAR_5;
 }
 FUNC_5(VAR_14);
 if (VAR_12) {
  FUNC_4(VAR_9, "connected.\n");
 }
 FUNC_3(VAR_16, VAR_3, VAR_6);

 return VAR_16;
}
