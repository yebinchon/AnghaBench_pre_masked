
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_flags; int ai_socktype; } ;
typedef int hints ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (char**,char*,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct addrinfo **VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 const char *VAR_8;
 char *VAR_9;
 struct addrinfo VAR_10;
 int VAR_11;

 switch (VAR_5) {
 case 129:
  VAR_8 = "127.0.0.1";
  break;
 case 128:
  VAR_8 = "::1";
  break;
 default:
  FUNC_3("unhandled domain: %d", VAR_5);
 }

 FUNC_1(FUNC_2(&VAR_9, "%d", VAR_7) >= 0,
     "asprintf failed: %s", FUNC_8(VAR_3));

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ai_family = VAR_5;
 VAR_10.ai_flags = VAR_0|VAR_2|VAR_1;
 VAR_10.ai_socktype = VAR_6;

 VAR_11 = FUNC_6(VAR_8, VAR_9, &VAR_10, VAR_4);
 FUNC_0(VAR_11, 0,
     "getaddrinfo failed: %s", FUNC_5(VAR_11));
 FUNC_4(VAR_9);
}
