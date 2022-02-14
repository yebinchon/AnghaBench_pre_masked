
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_iovec {scalar_t__ iov_len; int iov_base; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 scalar_t__ FUNC_2 (struct evbuffer*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct evbuffer*,size_t,int) ;

size_t
FUNC_4(struct evbuffer * VAR_0, struct evbuffer_iovec * VAR_1, int VAR_2) {
 int VAR_3;
 size_t VAR_4;
 size_t VAR_5;

 FUNC_0(VAR_0);

 VAR_4 = VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_5 += VAR_1[VAR_3].iov_len;
 }

 if (FUNC_3(VAR_0, VAR_5, 2) < 0) {
  goto done;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {





  if (FUNC_2(VAR_0, VAR_1[VAR_3].iov_base, VAR_1[VAR_3].iov_len) < 0) {
   goto done;
  }

  VAR_4 += VAR_1[VAR_3].iov_len;
 }

done:
    FUNC_1(VAR_0);
    return VAR_4;
}
