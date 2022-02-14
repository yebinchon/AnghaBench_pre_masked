
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iovec {scalar_t__ iov_len; } ;
struct TYPE_3__ {int iovOrigCount; int iovCurCount; scalar_t__ ioDone; struct iovec* iovOrig; struct iovec* iovCur; scalar_t__ ioTotal; } ;
typedef TYPE_1__ evStream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(evStream *VAR_2, const struct iovec *VAR_3, int VAR_4) {
 int VAR_5;

 VAR_2->iovOrig = (struct iovec *)FUNC_0(sizeof(struct iovec) * VAR_4);
 if (VAR_2->iovOrig == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 VAR_2->ioTotal = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_2->iovOrig[VAR_5] = VAR_3[VAR_5];
  VAR_2->ioTotal += VAR_3[VAR_5].iov_len;
 }
 VAR_2->iovOrigCount = VAR_4;
 VAR_2->iovCur = VAR_2->iovOrig;
 VAR_2->iovCurCount = VAR_2->iovOrigCount;
 VAR_2->ioDone = 0;
 return (0);
}
