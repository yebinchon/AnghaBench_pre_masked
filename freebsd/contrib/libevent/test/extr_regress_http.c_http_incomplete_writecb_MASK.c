
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct bufferevent *VAR_3, void *VAR_4)
{
 if (VAR_4 != ((void*)0)) {
  evutil_socket_t VAR_5 = *(evutil_socket_t *)VAR_4;

  FUNC_3(VAR_5, VAR_0);
 }
 if (FUNC_2(FUNC_1(VAR_3)) == 0) {

  FUNC_0(VAR_3, VAR_1);
  VAR_2++;
 }
}
