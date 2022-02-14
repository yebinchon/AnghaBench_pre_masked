
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {scalar_t__ state; scalar_t__ underlying; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_2 (struct bufferevent_openssl*) ;
 int FUNC_3 (struct bufferevent_openssl*) ;
 struct bufferevent_openssl* FUNC_4 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_5(struct bufferevent *VAR_3, short VAR_4)
{
 struct bufferevent_openssl *VAR_5 = FUNC_4(VAR_3);
 if (VAR_5->state != VAR_0)
  return 0;

 if (VAR_4 & VAR_1)
  FUNC_2(VAR_5);
 if (VAR_4 & VAR_2)
  FUNC_3(VAR_5);

 if (VAR_5->underlying) {
  if (VAR_4 & VAR_1)
   FUNC_0(VAR_3);
  if (VAR_4 & VAR_2)
   FUNC_1(VAR_3);
 }
 return 0;
}
