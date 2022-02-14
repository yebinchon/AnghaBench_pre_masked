
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in6 {int sin6_addr; TYPE_1__ sin_addr; } ;
struct sockaddr_in {int sin6_addr; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct addrinfo {size_t ai_addrlen; int ai_protocol; int ai_socktype; int ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; } ;
typedef scalar_t__ SOCKET ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct addrinfo*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int VAR_11 ;
 int FUNC_7 (int ,void*,char*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (struct sockaddr_in6*,struct sockaddr*,int) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,int ,int ,void*,int) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (char*,char*,int) ;
 int VAR_12 ;
 int FUNC_15 (char*,char*) ;

__attribute__((used)) static SOCKET
FUNC_16(const char *VAR_13, const char *VAR_14, int VAR_15)
{
 struct addrinfo VAR_16, *VAR_17, *VAR_18;
 SOCKET VAR_19;
 int VAR_20;

 FUNC_10(&VAR_16, 0, sizeof VAR_16);
 VAR_16.ai_family = VAR_7;
 VAR_16.ai_socktype = VAR_8;
 VAR_20 = FUNC_6(VAR_13, VAR_14, &VAR_16, &VAR_17);
 if (VAR_20 != 0) {
  FUNC_3(VAR_12, "ERROR: getaddrinfo(): %s\n",
   FUNC_5(VAR_20));
  return VAR_4;
 }
 VAR_19 = VAR_4;
 for (VAR_18 = VAR_17; VAR_18 != ((void*)0); VAR_18 = VAR_18->ai_next) {
  struct sockaddr *VAR_21;
  struct sockaddr_in VAR_22;
  struct sockaddr_in6 VAR_23;
  size_t VAR_24;
  void *VAR_25;
  int VAR_26;

  VAR_21 = (struct sockaddr *)VAR_18->ai_addr;
  if (VAR_21->sa_family == VAR_0) {
   FUNC_9(&VAR_22, VAR_21, sizeof VAR_22);
   VAR_21 = (struct sockaddr *)&VAR_22;
   VAR_24 = sizeof VAR_22;
   VAR_25 = &VAR_22;
   if (VAR_13 == ((void*)0)) {
    VAR_22 = VAR_2;
   }
  } else if (VAR_21->sa_family == VAR_1) {
   FUNC_9(&VAR_23, VAR_21, sizeof VAR_23);
   VAR_21 = (struct sockaddr *)&VAR_23;
   VAR_24 = sizeof VAR_23;
   VAR_25 = &VAR_23;
   if (VAR_13 == ((void*)0)) {
    VAR_23 = VAR_11;
   }
  } else {
   VAR_25 = ((void*)0);
   VAR_24 = VAR_18->ai_addrlen;
  }
  if (VAR_15) {
   char VAR_27[VAR_3 + 50];

   if (VAR_25 != ((void*)0)) {
    if (!FUNC_7(VAR_18->ai_family, VAR_25,
     VAR_27, sizeof VAR_27))
    {
     FUNC_15(VAR_27, "<invalid>");
    }
   } else {
    FUNC_14(VAR_27, "<unknown family: %d>",
     (int)VAR_21->sa_family);
   }
   FUNC_3(VAR_12, "binding to: %s\n", VAR_27);
  }
  VAR_19 = FUNC_13(VAR_18->ai_family, VAR_18->ai_socktype, VAR_18->ai_protocol);
  if (VAR_19 == VAR_4) {
   if (VAR_15) {
    FUNC_11("socket()");
   }
   continue;
  }
  VAR_26 = 1;
  FUNC_12(VAR_19, VAR_9, VAR_10,
   (void *)&VAR_26, sizeof VAR_26);
  if (FUNC_0(VAR_19, VAR_21, VAR_24) < 0) {
   if (VAR_15) {
    FUNC_11("bind()");
   }



   FUNC_1(VAR_19);

   continue;
  }
  break;
 }
 if (VAR_18 == ((void*)0)) {
  FUNC_4(VAR_17);
  FUNC_3(VAR_12, "ERROR: failed to bind\n");
  return VAR_4;
 }
 FUNC_4(VAR_17);
 if (FUNC_8(VAR_19, 5) < 0) {
  if (VAR_15) {
   FUNC_11("listen()");
  }



  FUNC_1(VAR_19);

  return VAR_4;
 }
 if (VAR_15) {
  FUNC_3(VAR_12, "bound.\n");
 }
 return VAR_19;
}
