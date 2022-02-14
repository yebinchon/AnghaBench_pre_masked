
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int sockaddr_u ;


 struct addrinfo FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void) {
 const char* VAR_0 = "192.0.2.10";

 sockaddr_u VAR_1 = FUNC_1(VAR_0);
 struct addrinfo VAR_2 = FUNC_0(&VAR_1);

 FUNC_2(VAR_0, FUNC_4(&VAR_1));
 FUNC_2(VAR_0, FUNC_3(&VAR_2));
}
