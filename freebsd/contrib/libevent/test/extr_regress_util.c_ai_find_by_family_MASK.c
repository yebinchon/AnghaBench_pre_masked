
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int ai_family; struct evutil_addrinfo* ai_next; } ;



struct evutil_addrinfo *
FUNC_0(struct evutil_addrinfo *VAR_0, int VAR_1)
{
 while (VAR_0) {
  if (VAR_0->ai_family == VAR_1)
   return VAR_0;
  VAR_0 = VAR_0->ai_next;
 }
 return ((void*)0);
}
