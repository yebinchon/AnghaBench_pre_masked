
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* hi; void* lo; } ;
struct TYPE_5__ {int q_s; TYPE_1__ D_s; } ;
typedef TYPE_2__ vint64 ;
typedef void* uint32_t ;
typedef int time_t ;


 int FUNC_0 (void*,void*) ;

vint64
FUNC_1(
 const time_t * VAR_0
 )
{
 vint64 VAR_1;
 time_t VAR_2;

 VAR_2 = *VAR_0;



 VAR_1.D_s.hi = 0;
 if (VAR_2 < 0) {
  VAR_1.D_s.lo = (uint32_t)-VAR_2;
  FUNC_0(VAR_1.D_s.hi, VAR_1.D_s.lo);
 } else {
  VAR_1.D_s.lo = (uint32_t)VAR_2;
 }
 return VAR_1;
}
