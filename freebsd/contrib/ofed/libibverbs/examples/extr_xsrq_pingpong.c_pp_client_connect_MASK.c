
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct addrinfo*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(const char *VAR_3, int VAR_4)
{
 struct addrinfo *VAR_5, *VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9 = -1;
 struct addrinfo VAR_10 = {
  .ai_family = VAR_0,
  .ai_socktype = VAR_1
 };

 if (FUNC_0(&VAR_7, "%d", VAR_4) < 0)
  return 1;

 VAR_8 = FUNC_8(VAR_3, VAR_7, &VAR_10, &VAR_5);
 if (VAR_8 < 0) {
  FUNC_4(VAR_2, "%s for %s:%d\n", FUNC_7(VAR_8), VAR_3, VAR_4);
  FUNC_5(VAR_7);
  return 1;
 }

 for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_6->ai_next) {
  VAR_9 = FUNC_11(VAR_6->ai_family, VAR_6->ai_socktype, VAR_6->ai_protocol);
  if (VAR_9 >= 0) {
   if (!FUNC_2(VAR_9, VAR_6->ai_addr, VAR_6->ai_addrlen))
    break;
   FUNC_1(VAR_9);
   VAR_9 = -1;
  }
 }

 FUNC_6(VAR_5);
 FUNC_5(VAR_7);

 if (VAR_9 < 0) {
  FUNC_4(VAR_2, "Couldn't connect to %s:%d\n", VAR_3, VAR_4);
  return 1;
 }

 if (FUNC_10(VAR_9, 0))
  return 1;

 if (FUNC_9(VAR_9, 0))
  return 1;

 if (FUNC_3(0))
  return 1;

 return 0;
}
