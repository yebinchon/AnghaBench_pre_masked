
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int urd_maxlen; int urd_data; int urd_startentry; } ;
struct ugen20_urd_state {scalar_t__* ptr; scalar_t__* buf; scalar_t__* dummy_zero; scalar_t__ nparsed; void* src; void* dst; TYPE_1__ urd; int f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(struct ugen20_urd_state *VAR_3)
{
 ;
repeat:
 if (VAR_3->ptr == ((void*)0)) {
  VAR_3->urd.urd_startentry += VAR_3->nparsed;
  VAR_3->urd.urd_data = FUNC_2(VAR_3->buf);
  VAR_3->urd.urd_maxlen = sizeof(VAR_3->buf);
  VAR_3->nparsed = 0;

  if (FUNC_1(VAR_3->f, FUNC_0(VAR_2), &VAR_3->urd)) {
   return (VAR_0);
  }
  VAR_3->ptr = VAR_3->buf;
 }
 if (VAR_3->ptr[0] == 0) {
  if (VAR_3->nparsed) {
   VAR_3->ptr = ((void*)0);
   goto repeat;
  } else {
   return (VAR_1);
  }
 }
 VAR_3->src = (void *)(VAR_3->ptr + 1);
 VAR_3->dst = VAR_3->src + FUNC_3(VAR_3->src) + 1;
 VAR_3->ptr = VAR_3->ptr + VAR_3->ptr[0];
 VAR_3->nparsed++;

 if ((VAR_3->ptr < VAR_3->buf) ||
     (VAR_3->ptr > VAR_3->dummy_zero)) {

  return (VAR_0);
 }
 return (0);
}
