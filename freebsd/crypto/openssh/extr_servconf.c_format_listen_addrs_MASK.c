
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listenaddr {char* rdomain; struct addrinfo* addrs; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int ai_addr; struct addrinfo* ai_next; } ;
typedef int port ;
typedef int addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char**,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(struct listenaddr *VAR_5)
{
 int VAR_6;
 struct addrinfo *VAR_7;
 char VAR_8[VAR_1], VAR_9[VAR_2];
 char *VAR_10 = FUNC_5(""), *VAR_11 = ((void*)0);






 for (VAR_7 = VAR_5->addrs; VAR_7; VAR_7 = VAR_7->ai_next) {
  if ((VAR_6 = FUNC_2(VAR_7->ai_addr, VAR_7->ai_addrlen, VAR_8,
      sizeof(VAR_8), VAR_9, sizeof(VAR_9),
      VAR_3|VAR_4)) != 0) {
   FUNC_0("getnameinfo: %.100s", FUNC_3(VAR_6));
   continue;
  }
  VAR_11 = VAR_10;
  if (VAR_7->ai_family == VAR_0) {
   FUNC_4(&VAR_10, "listenaddress [%s]:%s%s%s\n%s",
       VAR_8, VAR_9,
       VAR_5->rdomain == ((void*)0) ? "" : " rdomain ",
       VAR_5->rdomain == ((void*)0) ? "" : VAR_5->rdomain,
       VAR_11);
  } else {
   FUNC_4(&VAR_10, "listenaddress %s:%s%s%s\n%s",
       VAR_8, VAR_9,
       VAR_5->rdomain == ((void*)0) ? "" : " rdomain ",
       VAR_5->rdomain == ((void*)0) ? "" : VAR_5->rdomain,
       VAR_11);
  }
  FUNC_1(VAR_11);
 }
 return VAR_10;
}
