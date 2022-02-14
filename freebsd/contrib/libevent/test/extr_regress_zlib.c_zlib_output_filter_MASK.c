
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct evbuffer_iovec {int iov_len; scalar_t__ iov_base; } ;
struct evbuffer {int dummy; } ;
typedef int ev_ssize_t ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;
struct TYPE_3__ {int avail_in; unsigned char* next_in; unsigned char* next_out; int avail_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct evbuffer*,struct evbuffer_iovec*,int) ;
 int FUNC_3 (struct evbuffer*,int) ;
 scalar_t__ FUNC_4 (struct evbuffer*) ;
 int FUNC_5 (struct evbuffer*,int,int *,struct evbuffer_iovec*,int) ;
 int FUNC_6 (struct evbuffer*,int,struct evbuffer_iovec*,int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;

__attribute__((used)) static enum bufferevent_filter_result
FUNC_8(struct evbuffer *VAR_6, struct evbuffer *VAR_7,
    ev_ssize_t VAR_8, enum bufferevent_flush_mode VAR_9, void *VAR_10)
{
 struct evbuffer_iovec VAR_11[1];
 struct evbuffer_iovec VAR_12[1];
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 z_streamp VAR_17 = VAR_10;

 do {

  VAR_16 = FUNC_5(VAR_6, -1, ((void*)0), VAR_11, 1);
  if (VAR_16) {
   VAR_17->avail_in = VAR_11[0].iov_len;
   VAR_17->next_in = (unsigned char *)VAR_11[0].iov_base;
  } else {
   VAR_17->avail_in = 0;
   VAR_17->next_in = 0;
  }

  FUNC_6(VAR_7, 4096, VAR_12, 1);
  VAR_17->next_out = (unsigned char *)VAR_12[0].iov_base;
  VAR_17->avail_out = VAR_12[0].iov_len;


  VAR_15 = FUNC_1(VAR_17, FUNC_7(VAR_9));


  VAR_13 = VAR_11[0].iov_len - VAR_17->avail_in;
  VAR_14 = VAR_12[0].iov_len - VAR_17->avail_out;

  FUNC_3(VAR_6, VAR_13);
  VAR_12[0].iov_len = VAR_14;
  FUNC_2(VAR_7, VAR_12, 1);

  if (VAR_15==VAR_2) {



   if (VAR_14 == 0)
    return VAR_0;
  } else {
   FUNC_0(VAR_15 == VAR_3 || VAR_15 == VAR_4);
  }

 } while (FUNC_4(VAR_6) > 0);

 ++VAR_5;

 return (VAR_1);
}
