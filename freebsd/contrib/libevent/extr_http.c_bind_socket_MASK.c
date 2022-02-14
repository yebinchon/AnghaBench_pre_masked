
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int dummy; } ;
typedef int evutil_socket_t ;
typedef scalar_t__ ev_uint16_t ;


 int FUNC_0 (struct evutil_addrinfo*,int) ;
 int FUNC_1 (struct evutil_addrinfo*) ;
 struct evutil_addrinfo* FUNC_2 (char const*,scalar_t__) ;

__attribute__((used)) static evutil_socket_t
FUNC_3(const char *VAR_0, ev_uint16_t VAR_1, int VAR_2)
{
 evutil_socket_t VAR_3;
 struct evutil_addrinfo *VAR_4 = ((void*)0);


 if (VAR_0 == ((void*)0) && VAR_1 == 0)
  return FUNC_0(((void*)0), 0);

 VAR_4 = FUNC_2(VAR_0, VAR_1);

 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_3 = FUNC_0(VAR_4, VAR_2);

 FUNC_1(VAR_4);

 return (VAR_3);
}
