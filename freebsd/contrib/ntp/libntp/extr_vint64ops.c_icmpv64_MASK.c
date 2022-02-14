
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lo; } ;
struct TYPE_6__ {scalar_t__ hi; } ;
struct TYPE_8__ {scalar_t__ q_s; TYPE_2__ D_s; TYPE_1__ d_s; } ;
typedef TYPE_3__ vint64 ;



int
FUNC_0(
 const vint64 * VAR_0,
 const vint64 * VAR_1
 )
{
 int VAR_2;





 VAR_2 = (VAR_0->d_s.hi > VAR_1->d_s.hi)
     - (VAR_0->d_s.hi < VAR_1->d_s.hi);
 if ( ! VAR_2 )
  VAR_2 = (VAR_0->D_s.lo > VAR_1->D_s.lo)
      - (VAR_0->D_s.lo < VAR_1->D_s.lo);


 return VAR_2;
}
