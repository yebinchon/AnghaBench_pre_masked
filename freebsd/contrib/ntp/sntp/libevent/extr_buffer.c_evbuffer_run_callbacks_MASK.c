
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer_cb_info {scalar_t__ orig_size; scalar_t__ n_added; scalar_t__ n_deleted; } ;
struct TYPE_2__ {int (* cb_func ) (struct evbuffer*,struct evbuffer_cb_info*,int ) ;int (* cb_obsolete ) (struct evbuffer*,scalar_t__,size_t,int ) ;} ;
struct evbuffer_cb_entry {int flags; int cbarg; TYPE_1__ cb; } ;
struct evbuffer {scalar_t__ n_add_for_cb; scalar_t__ n_del_for_cb; size_t total_len; int callbacks; scalar_t__ deferred_cbs; } ;
typedef int ev_uint32_t ;


 int FUNC_0 (struct evbuffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 struct evbuffer_cb_entry* FUNC_2 (int *) ;
 struct evbuffer_cb_entry* FUNC_3 (int *) ;
 struct evbuffer_cb_entry* FUNC_4 (struct evbuffer_cb_entry*,struct evbuffer_cb_entry*) ;
 int FUNC_5 (struct evbuffer*,scalar_t__,size_t,int ) ;
 int FUNC_6 (struct evbuffer*,struct evbuffer_cb_info*,int ) ;

__attribute__((used)) static void
FUNC_7(struct evbuffer *VAR_3, int VAR_4)
{
 struct evbuffer_cb_entry *VAR_5, *VAR_6;
 struct evbuffer_cb_info VAR_7;
 size_t VAR_8;
 ev_uint32_t VAR_9, VAR_10;
 int VAR_11 = 1;

 if (VAR_4) {
  VAR_9 = VAR_1|VAR_0;
  VAR_10 = VAR_0;
 } else if (VAR_3->deferred_cbs) {
  VAR_9 = VAR_1|VAR_0;
  VAR_10 = VAR_1|VAR_0;


  VAR_11 = 0;
 } else {
  VAR_9 = VAR_0;
  VAR_10 = VAR_0;
 }

 FUNC_0(VAR_3);

 if (FUNC_1(&VAR_3->callbacks)) {
  VAR_3->n_add_for_cb = VAR_3->n_del_for_cb = 0;
  return;
 }
 if (VAR_3->n_add_for_cb == 0 && VAR_3->n_del_for_cb == 0)
  return;

 VAR_8 = VAR_3->total_len;
 VAR_7.orig_size = VAR_8 + VAR_3->n_del_for_cb - VAR_3->n_add_for_cb;
 VAR_7.n_added = VAR_3->n_add_for_cb;
 VAR_7.n_deleted = VAR_3->n_del_for_cb;
 if (VAR_11) {
  VAR_3->n_add_for_cb = 0;
  VAR_3->n_del_for_cb = 0;
 }
 for (VAR_5 = FUNC_3(&VAR_3->callbacks);
      VAR_5 != FUNC_2(&VAR_3->callbacks);
      VAR_5 = VAR_6) {


  VAR_6 = FUNC_4(VAR_5, VAR_6);

  if ((VAR_5->flags & VAR_9) != VAR_10)
   continue;

  if ((VAR_5->flags & VAR_2))
   VAR_5->cb.cb_obsolete(VAR_3,
       VAR_7.orig_size, VAR_8, VAR_5->cbarg);
  else
   VAR_5->cb.cb_func(VAR_3, &VAR_7, VAR_5->cbarg);
 }
}
