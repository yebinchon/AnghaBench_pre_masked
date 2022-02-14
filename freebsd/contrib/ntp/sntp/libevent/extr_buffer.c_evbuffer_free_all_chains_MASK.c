
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {struct evbuffer_chain* next; } ;


 int FUNC_0 (struct evbuffer_chain*) ;

__attribute__((used)) static void
FUNC_1(struct evbuffer_chain *VAR_0)
{
 struct evbuffer_chain *VAR_1;
 for (; VAR_0; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
 }
}
