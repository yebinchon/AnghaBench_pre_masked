
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lo; int hi; } ;
struct TYPE_6__ {int Q_s; TYPE_1__ D_s; int q_s; } ;
typedef TYPE_2__ vint64 ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int time_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int const FUNC_2 () ;
 TYPE_2__ FUNC_3 (int *) ;

vint64
FUNC_4(
 uint32_t VAR_1,
 const time_t *VAR_2
 )
{
 vint64 VAR_3;
 time_t VAR_4;

 VAR_4 = (VAR_2)
    ? *VAR_2
    : FUNC_2();
 VAR_3 = FUNC_3(&VAR_4);
 FUNC_1(VAR_3.D_s.hi, VAR_3.D_s.lo, 0, 0x80000000u);
 FUNC_0(VAR_3.D_s.hi, VAR_3.D_s.lo, 0, (uint32_t)VAR_0);
 VAR_1 -= VAR_3.D_s.lo;
 FUNC_0(VAR_3.D_s.hi, VAR_3.D_s.lo, 0, VAR_1);



 return VAR_3;
}
