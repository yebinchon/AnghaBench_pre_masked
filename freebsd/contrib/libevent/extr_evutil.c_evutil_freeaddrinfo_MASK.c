
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int ai_flags; struct evutil_addrinfo* ai_canonname; struct evutil_addrinfo* ai_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct evutil_addrinfo*) ;
 int FUNC_1 (struct evutil_addrinfo*) ;

void
FUNC_2(struct evutil_addrinfo *VAR_1)
{






 while (VAR_1) {
  struct evutil_addrinfo *VAR_2 = VAR_1->ai_next;
  if (VAR_1->ai_canonname)
   FUNC_1(VAR_1->ai_canonname);
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
}
