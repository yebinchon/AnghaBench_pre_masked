
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lo; } ;
struct TYPE_5__ {scalar_t__ hi; } ;
struct TYPE_7__ {TYPE_2__ D_s; TYPE_1__ d_s; scalar_t__ q_s; } ;
typedef TYPE_3__ vint64 ;
typedef int time_t ;



time_t
FUNC_0(
 const vint64 *VAR_0
 )
{
 time_t VAR_1;



 VAR_1 = (time_t)VAR_0->D_s.lo;
 return VAR_1;
}
