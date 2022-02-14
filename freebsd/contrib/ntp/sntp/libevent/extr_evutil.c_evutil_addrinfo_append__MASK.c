
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {struct evutil_addrinfo* ai_next; } ;



struct evutil_addrinfo *
FUNC_0(struct evutil_addrinfo *VAR_0,
    struct evutil_addrinfo *VAR_1)
{
 struct evutil_addrinfo *VAR_2 = VAR_0;
 if (!VAR_2)
  return VAR_1;
 while (VAR_2->ai_next)
  VAR_2 = VAR_2->ai_next;
 VAR_2->ai_next = VAR_1;

 return VAR_0;
}
