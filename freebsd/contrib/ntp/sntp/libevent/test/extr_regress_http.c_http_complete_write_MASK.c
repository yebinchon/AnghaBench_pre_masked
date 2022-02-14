
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct bufferevent*,char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct bufferevent *VAR_3 = VAR_2;
 const char *VAR_4 = "host\r\n"
     "Connection: close\r\n"
     "\r\n";
 FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_4));
}
