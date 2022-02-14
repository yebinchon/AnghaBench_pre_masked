
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; struct addrinfo* ai_next; int ai_socktype; int ai_family; } ;
struct server {struct server* next_server; scalar_t__ event_time; struct addrinfo srcadr; } ;
typedef struct addrinfo sockaddr_u ;
typedef int service ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct addrinfo) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct server* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (struct addrinfo*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_8 (struct addrinfo*) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (int ,char*,char*,...) ;
 int FUNC_11 (char*,char*,char*) ;
 int VAR_6 ;
 char* FUNC_12 (struct addrinfo*) ;
 int FUNC_13 (char*,char*,int) ;
 scalar_t__ VAR_7 ;
 struct server* VAR_8 ;

__attribute__((used)) static void
FUNC_14(
 char *VAR_9
 )
{
 register struct server *VAR_10;

 struct addrinfo *VAR_11, *VAR_12;

 struct addrinfo VAR_13;

 int VAR_14;

 char VAR_15[5];
 sockaddr_u VAR_16;

 FUNC_13(VAR_15, "ntp", sizeof(VAR_15));


 FUNC_1(VAR_13);
 VAR_13.ai_family = VAR_4;
 VAR_13.ai_socktype = VAR_3;






 VAR_14 = FUNC_7(VAR_9, VAR_15, &VAR_13, &VAR_11);
 if (VAR_14 != 0) {

  if (VAR_14 == VAR_1 || VAR_14 == VAR_0){



   FUNC_4(VAR_6, "Exiting, name server cannot be used: %s (%d)",
    FUNC_6(VAR_14), VAR_14);
   FUNC_10(VAR_2, "name server cannot be used: %s (%d)",
    FUNC_6(VAR_14), VAR_14);
   FUNC_3(1);
  }
  FUNC_4(VAR_6, "Error resolving %s: %s (%d)\n", VAR_9,
   FUNC_6(VAR_14), VAR_14);
  FUNC_10(VAR_2, "Can't find host %s: %s (%d)", VAR_9,
   FUNC_6(VAR_14), VAR_14);
  return;
 }
 for (VAR_12 = VAR_11; VAR_12 != ((void*)0); VAR_12 = VAR_12->ai_next) {
  FUNC_1(VAR_16);
  FUNC_0(VAR_12->ai_addrlen <= sizeof(VAR_16));
  FUNC_9(&VAR_16, VAR_12->ai_addr, VAR_12->ai_addrlen);
  if (FUNC_8(&VAR_16)) {
   VAR_10 = FUNC_2(sizeof(*VAR_10));
   FUNC_9(&VAR_10->srcadr, VAR_12->ai_addr, VAR_12->ai_addrlen);
   VAR_10->event_time = ++VAR_7;
   if (VAR_8 == ((void*)0))
    VAR_8 = VAR_10;
   else {
    struct server *VAR_17;

    for (VAR_17 = VAR_8; VAR_17->next_server != ((void*)0);
         VAR_17 = VAR_17->next_server)
                ;
    VAR_17->next_server = VAR_10;
   }
  }
 }

 FUNC_5(VAR_11);
}
