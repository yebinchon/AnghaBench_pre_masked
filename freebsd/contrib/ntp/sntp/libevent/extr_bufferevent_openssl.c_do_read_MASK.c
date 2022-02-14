
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer_iovec {int iov_len; int iov_base; } ;
struct evbuffer {int dummy; } ;
struct bufferevent {struct evbuffer* input; } ;
struct TYPE_2__ {scalar_t__ read_suspended; struct bufferevent bev; } ;
struct bufferevent_openssl {scalar_t__ underlying; scalar_t__ read_blocked_on_write; int ssl; TYPE_1__ bev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct bufferevent_openssl*) ;
 int FUNC_5 (struct bufferevent_openssl*,int ,int,int) ;
 int FUNC_6 (struct bufferevent_openssl*) ;
 int FUNC_7 (struct evbuffer*,struct evbuffer_iovec*,int) ;
 int FUNC_8 (struct evbuffer*,int,struct evbuffer_iovec*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_11(struct bufferevent_openssl *VAR_4, int VAR_5) {

 struct bufferevent *VAR_6 = &VAR_4->bev.bev;
 struct evbuffer *VAR_7 = VAR_6->input;
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12;
 struct evbuffer_iovec VAR_13[2];
 int VAR_14 = 0;

 if (VAR_4->bev.read_suspended)
  return 0;

 VAR_12 = FUNC_3(&VAR_4->bev);
 if (VAR_5 > VAR_12)
  VAR_5 = VAR_12;

 VAR_9 = FUNC_8(VAR_7, VAR_5, VAR_13, 2);
 if (VAR_9 < 0)
  return VAR_2;

 for (VAR_10=0; VAR_10<VAR_9; ++VAR_10) {
  if (VAR_4->bev.read_suspended)
   break;
  VAR_8 = FUNC_2(VAR_4->ssl, VAR_13[VAR_10].iov_base, VAR_13[VAR_10].iov_len);
  if (VAR_8>0) {
   VAR_14 |= VAR_3;
   if (VAR_4->read_blocked_on_write)
    if (FUNC_4(VAR_4) < 0)
     return VAR_2 | VAR_14;
   ++VAR_11;
   VAR_13[VAR_10].iov_len = VAR_8;
   FUNC_6(VAR_4);
  } else {
   int VAR_15 = FUNC_1(VAR_4->ssl, VAR_8);
   FUNC_9(VAR_15);
   switch (VAR_15) {
   case 129:

    if (VAR_4->read_blocked_on_write)
     if (FUNC_4(VAR_4) < 0)
      return VAR_2 | VAR_14;
    break;
   case 128:


    if (!VAR_4->read_blocked_on_write)
     if (FUNC_10(VAR_4) < 0)
      return VAR_2 | VAR_14;
    break;
   default:
    FUNC_5(VAR_4, VAR_0, VAR_15, VAR_8);
    break;
   }
   VAR_14 |= VAR_1;
   break;
  }
 }

 if (VAR_11) {
  FUNC_7(VAR_7, VAR_13, VAR_11);
  if (VAR_4->underlying)
   FUNC_0(VAR_6);
 }

 return VAR_14;
}
