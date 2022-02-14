
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {scalar_t__ underlying; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_openssl* FUNC_2 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_3(struct bufferevent *VAR_0)
{
 struct bufferevent_openssl *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->underlying) {
  return FUNC_1(VAR_0);
 } else {
  return FUNC_0(VAR_0);
 }
}
