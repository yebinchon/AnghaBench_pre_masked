
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_iovec {size_t iov_len; void* iov_base; } ;
struct evbuffer_chain {int dummy; } ;
struct evbuffer {scalar_t__ freeze_end; } ;
typedef scalar_t__ ev_ssize_t ;


 scalar_t__ FUNC_0 (struct evbuffer_chain*) ;
 scalar_t__ FUNC_1 (struct evbuffer_chain*) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct evbuffer*,scalar_t__,int) ;
 struct evbuffer_chain* FUNC_6 (struct evbuffer*,scalar_t__) ;
 int FUNC_7 (struct evbuffer*,scalar_t__,struct evbuffer_iovec*,int,struct evbuffer_chain***,int ) ;

int
FUNC_8(struct evbuffer *VAR_0, ev_ssize_t VAR_1,
    struct evbuffer_iovec *VAR_2, int VAR_3)
{
 struct evbuffer_chain *VAR_4, **VAR_5;
 int VAR_6 = -1;

 FUNC_2(VAR_0);
 if (VAR_0->freeze_end)
  goto done;
 if (VAR_3 < 1)
  goto done;
 if (VAR_3 == 1) {
  if ((VAR_4 = FUNC_6(VAR_0, VAR_1)) == ((void*)0))
   goto done;

  VAR_2[0].iov_base = (void *)FUNC_1(VAR_4);
  VAR_2[0].iov_len = (size_t)FUNC_0(VAR_4);
  FUNC_4(VAR_1<0 || (size_t)VAR_2[0].iov_len >= (size_t)VAR_1);
  VAR_6 = 1;
 } else {
  if (FUNC_5(VAR_0, VAR_1, VAR_3)<0)
   goto done;
  VAR_6 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3,
    &VAR_5, 0);
 }

done:
 FUNC_3(VAR_0);
 return VAR_6;

}
