
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,char const*,...) ;

__attribute__((used)) static int
FUNC_8(void)
{
 struct addrinfo VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 const char *VAR_12;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_family = VAR_0;
 VAR_8.ai_socktype = VAR_3;

 VAR_11 = FUNC_4(VAR_5, VAR_6, &VAR_8, &VAR_10);
 if (VAR_11) {
  FUNC_7(VAR_2, "%s(%s): %s", VAR_5, VAR_6,
      FUNC_3(VAR_11));
  return (-1);
 }

 VAR_7 = -1;
 VAR_12 = "no address";
 VAR_4 = VAR_1;
 for (VAR_9 = VAR_10; VAR_9 != ((void*)0); VAR_9 = VAR_9->ai_next) {
  VAR_7 = FUNC_6(VAR_9->ai_family, VAR_9->ai_socktype,
      VAR_9->ai_protocol);
  if (VAR_7 == -1) {
   VAR_12 = "socket";
   continue;
  }
  if (FUNC_1(VAR_7, VAR_9->ai_addr, VAR_9->ai_addrlen) == -1) {
   VAR_12 = "connect";
   (void)FUNC_0(VAR_7);
   VAR_7 = -1;
   continue;
  }
  break;
 }
 if (VAR_7 == -1) {
  FUNC_7(VAR_2, "%s: %m", VAR_12);
  return (-1);
 }
 FUNC_2(VAR_10);
 return (0);
}
