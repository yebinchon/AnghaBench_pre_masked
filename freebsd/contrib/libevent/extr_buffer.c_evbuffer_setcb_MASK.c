
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cb_obsolete; } ;
struct evbuffer_cb_entry {int flags; TYPE_1__ cb; } ;
struct evbuffer {int callbacks; } ;
typedef scalar_t__ evbuffer_cb ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int *) ;
 struct evbuffer_cb_entry* FUNC_3 (struct evbuffer*,int *,void*) ;
 int FUNC_4 (struct evbuffer*) ;

void
FUNC_5(struct evbuffer *VAR_1, evbuffer_cb VAR_2, void *VAR_3)
{
 FUNC_0(VAR_1);

 if (!FUNC_2(&VAR_1->callbacks))
  FUNC_4(VAR_1);

 if (VAR_2) {
  struct evbuffer_cb_entry *VAR_4 =
      FUNC_3(VAR_1, ((void*)0), VAR_3);
  VAR_4->cb.cb_obsolete = VAR_2;
  VAR_4->flags |= VAR_0;
 }
 FUNC_1(VAR_1);
}
