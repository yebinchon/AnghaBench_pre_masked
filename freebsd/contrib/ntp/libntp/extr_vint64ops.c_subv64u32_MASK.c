
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lo; int hi; } ;
struct TYPE_6__ {TYPE_1__ D_s; int Q_s; } ;
typedef TYPE_2__ vint64 ;
typedef int uint32_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

vint64
FUNC_1(
 const vint64 * VAR_0,
 uint32_t VAR_1
 )
{
 vint64 VAR_2;

 VAR_2 = *VAR_0;



 FUNC_0(VAR_2.D_s.hi, VAR_2.D_s.lo, 0, VAR_1);

 return VAR_2;
}
