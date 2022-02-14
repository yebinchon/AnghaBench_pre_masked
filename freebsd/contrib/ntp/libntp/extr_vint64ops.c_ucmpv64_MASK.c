
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hi; scalar_t__ lo; } ;
struct TYPE_6__ {scalar_t__ Q_s; TYPE_1__ D_s; } ;
typedef TYPE_2__ vint64 ;



int
FUNC_0(
 const vint64 * VAR_0,
 const vint64 * VAR_1
 )
{
 int VAR_2;





 VAR_2 = (VAR_0->D_s.hi > VAR_1->D_s.hi)
     - (VAR_0->D_s.hi < VAR_1->D_s.hi);
 if ( ! VAR_2 )
  VAR_2 = (VAR_0->D_s.lo > VAR_1->D_s.lo)
      - (VAR_0->D_s.lo < VAR_1->D_s.lo);

 return VAR_2;
}
