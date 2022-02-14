
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ n; scalar_t__ head; scalar_t__ tail; int data; } ;
typedef TYPE_1__ msnd_fifo ;


 int FUNC_0 (int,char const*,int) ;

int FUNC_1(msnd_fifo *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;

 while ((VAR_3 < VAR_2) && (VAR_0->len != VAR_0->n)) {

  int VAR_4;

  if (VAR_0->head <= VAR_0->tail) {
   VAR_4 = VAR_2 - VAR_3;
   if (VAR_4 > VAR_0->n - VAR_0->tail)
    VAR_4 = VAR_0->n - VAR_0->tail;
  }
  else {
   VAR_4 = VAR_0->head - VAR_0->tail;
   if (VAR_4 > VAR_2 - VAR_3)
    VAR_4 = VAR_2 - VAR_3;
  }

  FUNC_0(VAR_0->data + VAR_0->tail, VAR_1, VAR_4);

  VAR_3 += VAR_4;
  VAR_1 += VAR_4;
  VAR_0->len += VAR_4;
  VAR_0->tail += VAR_4;
  VAR_0->tail %= VAR_0->n;
 }

 return VAR_3;
}
