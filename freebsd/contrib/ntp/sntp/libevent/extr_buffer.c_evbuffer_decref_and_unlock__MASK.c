
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {struct evbuffer_chain* next; } ;
struct evbuffer {scalar_t__ refcnt; int lock; scalar_t__ own_lock; int deferred; int cb_queue; scalar_t__ deferred_cbs; struct evbuffer_chain* first; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct evbuffer_chain*) ;
 int FUNC_5 (struct evbuffer*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct evbuffer*) ;

void
FUNC_8(struct evbuffer *VAR_1)
{
 struct evbuffer_chain *VAR_2, *VAR_3;
 FUNC_0(VAR_1);

 FUNC_3(VAR_1->refcnt > 0);

 if (--VAR_1->refcnt > 0) {
  FUNC_1(VAR_1);
  return;
 }

 for (VAR_2 = VAR_1->first; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_4(VAR_2);
 }
 FUNC_5(VAR_1);
 if (VAR_1->deferred_cbs)
  FUNC_6(VAR_1->cb_queue, &VAR_1->deferred);

 FUNC_1(VAR_1);
 if (VAR_1->own_lock)
  FUNC_2(VAR_1->lock, VAR_0);
 FUNC_7(VAR_1);
}
