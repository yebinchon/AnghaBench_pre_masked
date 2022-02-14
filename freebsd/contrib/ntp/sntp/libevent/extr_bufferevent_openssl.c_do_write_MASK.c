
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer_iovec {scalar_t__ iov_len; int iov_base; } ;
struct evbuffer {int dummy; } ;
struct bufferevent {struct evbuffer* output; } ;
struct TYPE_2__ {scalar_t__ write_suspended; struct bufferevent bev; } ;
struct bufferevent_openssl {int last_write; scalar_t__ underlying; scalar_t__ write_blocked_on_read; int ssl; TYPE_1__ bev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct bufferevent*,int ,int ) ;
 scalar_t__ FUNC_5 (struct bufferevent_openssl*) ;
 int FUNC_6 (struct bufferevent_openssl*,int ,int,int) ;
 int FUNC_7 (struct bufferevent_openssl*) ;
 int FUNC_8 (struct evbuffer*,int) ;
 int FUNC_9 (struct evbuffer*,int,int *,struct evbuffer_iovec*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_12(struct bufferevent_openssl *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 struct bufferevent *VAR_11 = &VAR_5->bev.bev;
 struct evbuffer *VAR_12 = VAR_11->output;
 struct evbuffer_iovec VAR_13[8];
 int VAR_14 = 0;

 if (VAR_5->last_write > 0)
  VAR_6 = VAR_5->last_write;
 else
  VAR_6 = FUNC_3(&VAR_5->bev);

 VAR_9 = FUNC_9(VAR_12, VAR_6, ((void*)0), VAR_13, 8);
 if (VAR_9 < 0)
  return VAR_3 | VAR_14;

 if (VAR_9 > 8)
  VAR_9 = 8;
 for (VAR_7=0; VAR_7 < VAR_9; ++VAR_7) {
  if (VAR_5->bev.write_suspended)
   break;




  if (VAR_13[VAR_7].iov_len == 0)
   continue;

  VAR_8 = FUNC_2(VAR_5->ssl, VAR_13[VAR_7].iov_base,
      VAR_13[VAR_7].iov_len);
  if (VAR_8 > 0) {
   VAR_14 |= VAR_4;
   if (VAR_5->write_blocked_on_read)
    if (FUNC_5(VAR_5) < 0)
     return VAR_3 | VAR_14;
   VAR_10 += VAR_8;
   VAR_5->last_write = -1;
   FUNC_7(VAR_5);
  } else {
   int VAR_15 = FUNC_1(VAR_5->ssl, VAR_8);
   FUNC_10(VAR_15);
   switch (VAR_15) {
   case 128:

    if (VAR_5->write_blocked_on_read)
     if (FUNC_5(VAR_5) < 0)
      return VAR_3 | VAR_14;
    VAR_5->last_write = VAR_13[VAR_7].iov_len;
    break;
   case 129:


    if (!VAR_5->write_blocked_on_read)
     if (FUNC_11(VAR_5) < 0)
      return VAR_3 | VAR_14;
    VAR_5->last_write = VAR_13[VAR_7].iov_len;
    break;
   default:
    FUNC_6(VAR_5, VAR_0, VAR_15, VAR_8);
    VAR_5->last_write = -1;
    break;
   }
   VAR_14 |= VAR_2;
   break;
  }
 }
 if (VAR_10) {
  FUNC_8(VAR_12, VAR_10);
  if (VAR_5->underlying)
   FUNC_0(VAR_11);

  FUNC_4(VAR_11, VAR_1, 0);
 }
 return VAR_14;
}
