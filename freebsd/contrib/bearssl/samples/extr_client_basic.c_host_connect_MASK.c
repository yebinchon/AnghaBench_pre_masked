
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct addrinfo {int ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct addrinfo*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int ,void*,char*,int) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_11(const char *VAR_6, const char *VAR_7)
{
 struct addrinfo VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_7(&VAR_8, 0, sizeof VAR_8);
 VAR_8.ai_family = VAR_3;
 VAR_8.ai_socktype = VAR_4;
 VAR_12 = FUNC_5(VAR_6, VAR_7, &VAR_8, &VAR_9);
 if (VAR_12 != 0) {
  FUNC_2(VAR_5, "ERROR: getaddrinfo(): %s\n",
   FUNC_4(VAR_12));
  return -1;
 }
 VAR_11 = -1;
 for (VAR_10 = VAR_9; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next) {
  struct sockaddr *VAR_13;
  void *VAR_14;
  char VAR_15[VAR_2 + 50];

  VAR_13 = (struct sockaddr *)VAR_10->ai_addr;
  if (VAR_13->sa_family == VAR_0) {
   VAR_14 = &((struct sockaddr_in *)VAR_13)->sin_addr;
  } else if (VAR_13->sa_family == VAR_1) {
   VAR_14 = &((struct sockaddr_in6 *)VAR_13)->sin6_addr;
  } else {
   VAR_14 = ((void*)0);
  }
  if (VAR_14 != ((void*)0)) {
   FUNC_6(VAR_10->ai_family, VAR_14, VAR_15, sizeof VAR_15);
  } else {
   FUNC_10(VAR_15, "<unknown family: %d>",
    (int)VAR_13->sa_family);
  }
  FUNC_2(VAR_5, "connecting to: %s\n", VAR_15);
  VAR_11 = FUNC_9(VAR_10->ai_family, VAR_10->ai_socktype, VAR_10->ai_protocol);
  if (VAR_11 < 0) {
   FUNC_8("socket()");
   continue;
  }
  if (FUNC_1(VAR_11, VAR_10->ai_addr, VAR_10->ai_addrlen) < 0) {
   FUNC_8("connect()");
   FUNC_0(VAR_11);
   continue;
  }
  break;
 }
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_9);
  FUNC_2(VAR_5, "ERROR: failed to connect\n");
  return -1;
 }
 FUNC_3(VAR_9);
 FUNC_2(VAR_5, "connected.\n");
 return VAR_11;
}
