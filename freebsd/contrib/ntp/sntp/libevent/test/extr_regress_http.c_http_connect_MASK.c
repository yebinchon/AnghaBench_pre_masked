
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct sockaddr {int dummy; } ;
struct evutil_addrinfo {int ai_addrlen; struct sockaddr* ai_addr; int ai_socktype; int ai_family; } ;
typedef int strport ;
typedef int evutil_socket_t ;
typedef int ai ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct evutil_addrinfo*) ;
 scalar_t__ FUNC_5 (char const*,char*,struct evutil_addrinfo*,struct evutil_addrinfo**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,int ) ;
 int FUNC_8 (struct evutil_addrinfo*,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static evutil_socket_t
FUNC_10(const char *VAR_8, u_short VAR_9)
{

 struct evutil_addrinfo VAR_10, *VAR_11;
 char VAR_12[VAR_2];

 struct sockaddr *VAR_13;
 int VAR_14;
 evutil_socket_t VAR_15;

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ai_family = VAR_0;
 VAR_10.ai_socktype = VAR_3;
 FUNC_7(VAR_12, sizeof(VAR_12), "%d", VAR_9);
 if (FUNC_5(VAR_8, VAR_12, &VAR_10, &VAR_11) != 0) {
  FUNC_3("getaddrinfo");
  return (-1);
 }
 VAR_13 = VAR_11->ai_addr;
 VAR_14 = VAR_11->ai_addrlen;

 VAR_15 = FUNC_9(VAR_0, VAR_3, 0);
 if (VAR_15 == -1)
  FUNC_2(1, "socket failed");

 FUNC_6(VAR_15);
 if (FUNC_1(VAR_15, VAR_13, VAR_14) == -1) {






  if (VAR_7 != VAR_1)
   FUNC_2(1, "connect failed");

 }

 FUNC_4(VAR_11);

 return (VAR_15);
}
