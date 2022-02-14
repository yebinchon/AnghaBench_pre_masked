
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {scalar_t__ parent; int deferred; int cb_queue; scalar_t__ deferred_cbs; scalar_t__ n_del_for_cb; scalar_t__ n_add_for_cb; int callbacks; } ;


 int FUNC_0 (struct evbuffer*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void
FUNC_6(struct evbuffer *VAR_0)
{
 if (FUNC_1(&VAR_0->callbacks)) {
  VAR_0->n_add_for_cb = VAR_0->n_del_for_cb = 0;
  return;
 }

 if (VAR_0->deferred_cbs) {
  if (FUNC_5(VAR_0->cb_queue, &VAR_0->deferred)) {
   FUNC_3(VAR_0);
   if (VAR_0->parent)
    FUNC_2(VAR_0->parent);
  }
  FUNC_0(VAR_0);
 }

 FUNC_4(VAR_0, 0);
}
