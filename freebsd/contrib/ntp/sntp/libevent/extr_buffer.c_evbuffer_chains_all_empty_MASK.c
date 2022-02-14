
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {scalar_t__ off; struct evbuffer_chain* next; } ;



__attribute__((used)) static int
FUNC_0(struct evbuffer_chain *VAR_0)
{
 for (; VAR_0; VAR_0 = VAR_0->next) {
  if (VAR_0->off)
   return 0;
 }
 return 1;
}
