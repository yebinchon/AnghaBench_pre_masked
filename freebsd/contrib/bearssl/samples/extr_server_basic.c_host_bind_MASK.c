
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct addrinfo {size_t ai_addrlen; int ai_protocol; int ai_socktype; int ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct addrinfo*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int VAR_10 ;
 int FUNC_6 (int ,void*,char*,int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int ,int ,int*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*,char*,int) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_13(const char *VAR_12, const char *VAR_13)
{
 struct addrinfo VAR_14, *VAR_15, *VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_8(&VAR_14, 0, sizeof VAR_14);
 VAR_14.ai_family = VAR_6;
 VAR_14.ai_socktype = VAR_7;
 VAR_18 = FUNC_5(VAR_12, VAR_13, &VAR_14, &VAR_15);
 if (VAR_18 != 0) {
  FUNC_2(VAR_11, "ERROR: getaddrinfo(): %s\n",
   FUNC_4(VAR_18));
  return -1;
 }
 VAR_17 = -1;
 for (VAR_16 = VAR_15; VAR_16 != ((void*)0); VAR_16 = VAR_16->ai_next) {
  struct sockaddr *VAR_19;
  struct sockaddr_in VAR_20;
  struct sockaddr_in6 VAR_21;
  size_t VAR_22;
  void *VAR_23;
  char VAR_24[VAR_3 + 50];
  int VAR_25;

  VAR_19 = (struct sockaddr *)VAR_16->ai_addr;
  if (VAR_19->sa_family == VAR_0) {
   VAR_20 = *(struct sockaddr_in *)VAR_19;
   VAR_19 = (struct sockaddr *)&VAR_20;
   VAR_22 = sizeof VAR_20;
   VAR_23 = &VAR_20;
   if (VAR_12 == ((void*)0)) {
    VAR_20 = VAR_2;
   }
  } else if (VAR_19->sa_family == VAR_1) {
   VAR_21 = *(struct sockaddr_in6 *)VAR_19;
   VAR_19 = (struct sockaddr *)&VAR_21;
   VAR_22 = sizeof VAR_21;
   VAR_23 = &VAR_21;
   if (VAR_12 == ((void*)0)) {
    VAR_21 = VAR_10;
   }
  } else {
   VAR_23 = ((void*)0);
   VAR_22 = VAR_16->ai_addrlen;
  }
  if (VAR_23 != ((void*)0)) {
   FUNC_6(VAR_16->ai_family, VAR_23, VAR_24, sizeof VAR_24);
  } else {
   FUNC_12(VAR_24, "<unknown family: %d>",
    (int)VAR_19->sa_family);
  }
  FUNC_2(VAR_11, "binding to: %s\n", VAR_24);
  VAR_17 = FUNC_11(VAR_16->ai_family, VAR_16->ai_socktype, VAR_16->ai_protocol);
  if (VAR_17 < 0) {
   FUNC_9("socket()");
   continue;
  }
  VAR_25 = 1;
  FUNC_10(VAR_17, VAR_8, VAR_9, &VAR_25, sizeof VAR_25);
  VAR_25 = 0;
  FUNC_10(VAR_17, VAR_4, VAR_5, &VAR_25, sizeof VAR_25);
  if (FUNC_0(VAR_17, VAR_19, VAR_22) < 0) {
   FUNC_9("bind()");
   FUNC_1(VAR_17);
   continue;
  }
  break;
 }
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_15);
  FUNC_2(VAR_11, "ERROR: failed to bind\n");
  return -1;
 }
 FUNC_3(VAR_15);
 if (FUNC_7(VAR_17, 5) < 0) {
  FUNC_9("listen()");
  FUNC_1(VAR_17);
  return -1;
 }
 FUNC_2(VAR_11, "bound.\n");
 return VAR_17;
}
