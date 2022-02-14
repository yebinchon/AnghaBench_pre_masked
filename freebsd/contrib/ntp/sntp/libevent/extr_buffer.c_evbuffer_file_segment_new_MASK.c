
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct evbuffer_file_segment {int refcnt; int fd; unsigned int flags; int file_offset; int length; int can_sendfile; int lock; int * cleanup_cb_arg; int * cleanup_cb; } ;
typedef int ev_uint64_t ;
typedef int ev_off_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct evbuffer_file_segment*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 struct evbuffer_file_segment* FUNC_3 (int,int) ;
 int FUNC_4 (struct evbuffer_file_segment*) ;

struct evbuffer_file_segment *
FUNC_5(
 int VAR_3, ev_off_t VAR_4, ev_off_t VAR_5, unsigned VAR_6)
{
 struct evbuffer_file_segment *VAR_7 =
     FUNC_3(sizeof(struct evbuffer_file_segment), 1);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->refcnt = 1;
 VAR_7->fd = VAR_3;
 VAR_7->flags = VAR_6;
 VAR_7->file_offset = VAR_4;
 VAR_7->cleanup_cb = ((void*)0);
 VAR_7->cleanup_cb_arg = ((void*)0);
 if (VAR_5 == -1) {
  struct stat VAR_8;
  if (FUNC_2(VAR_3, &VAR_8) < 0)
   goto err;
  VAR_5 = VAR_8.st_size;
 }
 VAR_7->length = VAR_5;

 if (VAR_4 < 0 || VAR_5 < 0 ||
     ((ev_uint64_t)VAR_5 > VAR_0) ||
     (ev_uint64_t)VAR_4 > (ev_uint64_t)(VAR_0 - VAR_5))
  goto err;
 if (FUNC_1(VAR_7)<0)
  goto err;




 if (!(VAR_6 & VAR_1)) {
  FUNC_0(VAR_7->lock, 0);
 }
 return VAR_7;
err:
 FUNC_4(VAR_7);
 return ((void*)0);
}
