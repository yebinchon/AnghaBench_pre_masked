
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int refcnt; int first; int * last_with_datap; int callbacks; } ;


 int FUNC_0 (int *) ;
 struct evbuffer* FUNC_1 (int,int) ;

struct evbuffer *
FUNC_2(void)
{
 struct evbuffer *VAR_0;

 VAR_0 = FUNC_1(1, sizeof(struct evbuffer));
 if (VAR_0 == ((void*)0))
  return (((void*)0));

 FUNC_0(&VAR_0->callbacks);
 VAR_0->refcnt = 1;
 VAR_0->last_with_datap = &VAR_0->first;

 return (VAR_0);
}
