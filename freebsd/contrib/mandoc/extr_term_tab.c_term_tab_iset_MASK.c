
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n; scalar_t__ s; size_t* t; } ;
struct TYPE_4__ {TYPE_1__ a; } ;


 size_t* FUNC_0 (size_t*,scalar_t__,int) ;
 TYPE_2__ VAR_0 ;

void
FUNC_1(size_t VAR_1)
{
 if (VAR_0.a.n >= VAR_0.a.s) {
  VAR_0.a.s += 8;
  VAR_0.a.t = FUNC_0(VAR_0.a.t, VAR_0.a.s,
      sizeof(*VAR_0.a.t));
 }
 VAR_0.a.t[VAR_0.a.n++] = VAR_1;
}
