
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {scalar_t__ off; struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain** last_with_datap; } ;


 scalar_t__ FUNC_0 (struct evbuffer_chain*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evbuffer_chain*) ;
 int FUNC_3 (struct evbuffer_chain*) ;

__attribute__((used)) static struct evbuffer_chain **
FUNC_4(struct evbuffer *VAR_0)
{
 struct evbuffer_chain **VAR_1 = VAR_0->last_with_datap;

 while ((*VAR_1) && ((*VAR_1)->off != 0 || FUNC_0(*VAR_1)))
  VAR_1 = &(*VAR_1)->next;
 if (*VAR_1) {
  FUNC_1(FUNC_2(*VAR_1));
  FUNC_3(*VAR_1);
  *VAR_1 = ((void*)0);
 }
 return VAR_1;
}
