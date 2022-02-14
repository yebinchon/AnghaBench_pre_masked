
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t n; size_t s; size_t* t; } ;
struct TYPE_4__ {size_t n; size_t* t; } ;
struct TYPE_6__ {TYPE_2__ a; TYPE_1__ p; } ;


 size_t* FUNC_0 (size_t*,size_t,int) ;
 TYPE_3__ VAR_0 ;

size_t
FUNC_1(size_t VAR_1)
{
 size_t VAR_2, VAR_3;

 for (VAR_2 = 0;; VAR_2++) {
  if (VAR_2 == VAR_0.a.n) {
   if (VAR_0.p.n == 0)
    return VAR_1;
   VAR_0.a.n += VAR_0.p.n;
   if (VAR_0.a.s < VAR_0.a.n) {
    VAR_0.a.s = VAR_0.a.n;
    VAR_0.a.t = FUNC_0(VAR_0.a.t,
        VAR_0.a.s, sizeof(*VAR_0.a.t));
   }
   for (VAR_3 = 0; VAR_3 < VAR_0.p.n; VAR_3++)
    VAR_0.a.t[VAR_2 + VAR_3] = VAR_0.p.t[VAR_3] +
        (VAR_2 ? VAR_0.a.t[VAR_2 - 1] : 0);
  }
  if (VAR_1 < VAR_0.a.t[VAR_2])
   return VAR_0.a.t[VAR_2];
 }
}
