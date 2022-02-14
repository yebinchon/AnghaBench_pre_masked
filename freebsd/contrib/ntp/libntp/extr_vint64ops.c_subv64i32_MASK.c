
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lo; int hi; } ;
struct TYPE_6__ {TYPE_1__ D_s; int q_s; } ;
typedef TYPE_2__ vint64 ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int ,int ,int,scalar_t__) ;

vint64
FUNC_1(
 const vint64 * VAR_0,
 int32_t VAR_1
 )
{
 vint64 VAR_2;

 VAR_2 = *VAR_0;



 FUNC_0(VAR_2.D_s.hi, VAR_2.D_s.lo, -(VAR_1 < 0), VAR_1);

 return VAR_2;
}
