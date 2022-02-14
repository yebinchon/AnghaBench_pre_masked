
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*,int ) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*,int,int ) ;

__attribute__((used)) static void
FUNC_4(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 struct bufferevent *VAR_6 = VAR_5;
 FUNC_2(VAR_6);
 FUNC_1(VAR_6, VAR_2);
 FUNC_3(VAR_6, VAR_1|VAR_0, 0);
 FUNC_0(VAR_6);
}
