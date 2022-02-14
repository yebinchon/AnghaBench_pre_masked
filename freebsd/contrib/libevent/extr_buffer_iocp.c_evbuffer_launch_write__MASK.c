
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct event_overlapped {int overlapped; } ;
struct evbuffer_overlapped {int write_in_progress; int n_buffers; TYPE_1__* buffers; int fd; struct evbuffer_chain* first_pinned; int read_in_progress; } ;
struct evbuffer_chain {size_t off; scalar_t__ misalign; scalar_t__ buffer; struct evbuffer_chain* next; } ;
struct evbuffer {size_t total_len; struct evbuffer_chain* first; scalar_t__ freeze_start; } ;
typedef size_t ev_ssize_t ;
struct TYPE_4__ {char* buf; unsigned long len; } ;
typedef TYPE_1__ WSABUF ;
typedef int DWORD ;


 int FUNC_0 (struct evbuffer*) ;
 int VAR_0 ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int,int *,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct evbuffer_chain*,int ) ;
 int FUNC_6 (struct evbuffer*) ;
 int FUNC_7 (struct evbuffer*,int) ;
 int FUNC_8 (struct evbuffer*) ;
 int FUNC_9 (struct evbuffer*,int) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (struct evbuffer_overlapped*,int ) ;
 struct evbuffer_overlapped* FUNC_12 (struct evbuffer*) ;

int
FUNC_13(struct evbuffer *VAR_3, ev_ssize_t VAR_4,
  struct event_overlapped *VAR_5)
{
 struct evbuffer_overlapped *VAR_6 = FUNC_12(VAR_3);
 int VAR_7 = -1;
 int VAR_8;
 struct evbuffer_chain *VAR_9;
 DWORD VAR_10;

 if (!VAR_3) {

  return -1;
 }

 FUNC_0(VAR_3);
 FUNC_2(!VAR_6->read_in_progress);
 if (VAR_3->freeze_start || VAR_6->write_in_progress)
  goto done;
 if (!VAR_3->total_len) {

  VAR_7 = 0;
  goto done;
 } else if (VAR_4 < 0 || (size_t)VAR_4 > VAR_3->total_len) {
  VAR_4 = VAR_3->total_len;
 }
 FUNC_7(VAR_3, 1);

 VAR_6->first_pinned = ((void*)0);
 VAR_6->n_buffers = 0;
 FUNC_10(VAR_6->buffers, 0, sizeof(VAR_6->buffers));

 VAR_9 = VAR_6->first_pinned = VAR_3->first;

 for (VAR_8=0; VAR_8 < VAR_1 && VAR_9; ++VAR_8, VAR_9=VAR_9->next) {
  WSABUF *VAR_11 = &VAR_6->buffers[VAR_8];
  VAR_11->buf = (char*)( VAR_9->buffer + VAR_9->misalign );
  FUNC_5(VAR_9, VAR_0);

  if ((size_t)VAR_4 > VAR_9->off) {




   VAR_11->len = (unsigned long)VAR_9->off;
   VAR_4 -= VAR_9->off;
  } else {
   VAR_11->len = (unsigned long)VAR_4;
   ++VAR_8;
   break;
  }
 }

 VAR_6->n_buffers = VAR_8;
 FUNC_8(VAR_3);
 if (FUNC_4(VAR_6->fd, VAR_6->buffers, VAR_8, &VAR_10, 0,
  &VAR_5->overlapped, ((void*)0))) {
  int VAR_12 = FUNC_3();
  if (VAR_12 != VAR_2) {

   FUNC_11(VAR_6, VAR_0);
   FUNC_9(VAR_3, 1);
   FUNC_6(VAR_3);
   goto done;
  }
 }

 VAR_6->write_in_progress = 1;
 VAR_7 = 0;
done:
 FUNC_1(VAR_3);
 return VAR_7;
}
