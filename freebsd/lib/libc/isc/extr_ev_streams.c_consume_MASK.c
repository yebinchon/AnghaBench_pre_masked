
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {size_t ioDone; int iovCurCount; TYPE_1__* iovCur; } ;
typedef TYPE_2__ evStream ;
struct TYPE_4__ {scalar_t__ iov_len; void* iov_base; } ;



__attribute__((used)) static void
FUNC_0(evStream *VAR_0, size_t VAR_1) {
 while (VAR_1 > 0U) {
  if (VAR_1 < (size_t)VAR_0->iovCur->iov_len) {
   VAR_0->iovCur->iov_len -= VAR_1;
   VAR_0->iovCur->iov_base = (void *)
    ((u_char *)VAR_0->iovCur->iov_base + VAR_1);
   VAR_0->ioDone += VAR_1;
   VAR_1 = 0;
  } else {
   VAR_1 -= VAR_0->iovCur->iov_len;
   VAR_0->ioDone += VAR_0->iovCur->iov_len;
   VAR_0->iovCur++;
   VAR_0->iovCurCount--;
  }
 }
}
