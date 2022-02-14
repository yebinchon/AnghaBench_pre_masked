
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t n; scalar_t__ p; } ;
typedef TYPE_1__ ZIO ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,scalar_t__,size_t) ;

size_t FUNC_2 (ZIO *VAR_1, void *VAR_2, size_t VAR_3) {
  while (VAR_3) {
    size_t VAR_4;
    if (VAR_1->n == 0) {
      if (FUNC_0(VAR_1) == VAR_0)
        return VAR_3;
      else {
        VAR_1->n++;
        VAR_1->p--;
      }
    }
    VAR_4 = (VAR_3 <= VAR_1->n) ? VAR_3 : VAR_1->n;
    FUNC_1(VAR_2, VAR_1->p, VAR_4);
    VAR_1->n -= VAR_4;
    VAR_1->p += VAR_4;
    VAR_2 = (char *)VAR_2 + VAR_4;
    VAR_3 -= VAR_4;
  }
  return 0;
}
