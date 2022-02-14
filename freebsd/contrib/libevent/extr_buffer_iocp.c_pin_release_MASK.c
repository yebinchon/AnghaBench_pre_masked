
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_overlapped {int n_buffers; struct evbuffer_chain* first_pinned; } ;
struct evbuffer_chain {struct evbuffer_chain* next; } ;


 int FUNC_0 (struct evbuffer_chain*) ;
 int FUNC_1 (struct evbuffer_chain*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct evbuffer_overlapped *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 struct evbuffer_chain *VAR_3, *VAR_4 = VAR_0->first_pinned;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_buffers; ++VAR_2) {
  FUNC_0(VAR_4);
  VAR_3 = VAR_4->next;
  FUNC_1(VAR_4, VAR_1);
  VAR_4 = VAR_3;
 }
}
