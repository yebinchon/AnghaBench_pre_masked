
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
struct TYPE_2__ {int num_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int *) ;
 scalar_t__ FUNC_1 (char**,char*,int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct addrinfo*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int,int) ;
 int FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_15(int VAR_7)
{
 struct addrinfo *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14 = -1, VAR_15;
 struct addrinfo VAR_16 = {
  .ai_flags = VAR_1,
  .ai_family = VAR_0,
  .ai_socktype = VAR_2
 };

 if (FUNC_1(&VAR_10, "%d", VAR_7) < 0)
  return 1;

 VAR_11 = FUNC_9(((void*)0), VAR_10, &VAR_16, &VAR_8);
 if (VAR_11 < 0) {
  FUNC_5(VAR_6, "%s for port %d\n", FUNC_8(VAR_11), VAR_7);
  FUNC_6(VAR_10);
  return 1;
 }

 for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->ai_next) {
  VAR_14 = FUNC_14(VAR_9->ai_family, VAR_9->ai_socktype, VAR_9->ai_protocol);
  if (VAR_14 >= 0) {
   VAR_13 = 1;
   FUNC_13(VAR_14, VAR_3, VAR_4, &VAR_13, sizeof VAR_13);
   if (!FUNC_2(VAR_14, VAR_9->ai_addr, VAR_9->ai_addrlen))
    break;
   FUNC_3(VAR_14);
   VAR_14 = -1;
  }
 }

 FUNC_7(VAR_8);
 FUNC_6(VAR_10);

 if (VAR_14 < 0) {
  FUNC_5(VAR_6, "Couldn't listen to port %d\n", VAR_7);
  return 1;
 }

 FUNC_10(VAR_14, VAR_5.num_clients);

 for (VAR_12 = 0; VAR_12 < VAR_5.num_clients; VAR_12++) {
  VAR_15 = FUNC_0(VAR_14, ((void*)0), ((void*)0));
  if (VAR_15 < 0) {
   FUNC_5(VAR_6, "accept() failed for client %d\n", VAR_12);
   return 1;
  }

  if (FUNC_11(VAR_15, VAR_12))
   return 1;

  if (FUNC_12(VAR_15, VAR_12))
   return 1;

  if (FUNC_4(VAR_12))
   return 1;
 }

 FUNC_3(VAR_14);
 return 0;
}
