
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lo; int hi; } ;
struct TYPE_5__ {int q_s; TYPE_1__ D_s; } ;
typedef TYPE_2__ vint64 ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;

vint64
FUNC_2(
 int32_t VAR_1,
 int32_t VAR_2
 )
{
 vint64 VAR_3;
 uint32_t VAR_4, VAR_5;
 int VAR_6;





 VAR_6 = (VAR_1 < 0);
 if (VAR_6)
  VAR_1 = -VAR_1;


 VAR_3.D_s.lo = (VAR_1 & 0xFFFF) * 675u;
 VAR_3.D_s.hi = 0;
 VAR_4 = (VAR_1 >> 16) * 675u;
 VAR_5 = VAR_4 >> 16;
 VAR_4 = VAR_4 << 16;
 FUNC_0(VAR_3.D_s.hi, VAR_3.D_s.lo, VAR_5, VAR_4);


 VAR_3.D_s.hi = (VAR_3.D_s.hi << 7) | (VAR_3.D_s.lo >> 25);
 VAR_3.D_s.lo = (VAR_3.D_s.lo << 7);


 if (VAR_6)
  FUNC_1(VAR_3.D_s.hi, VAR_3.D_s.lo);


 VAR_5 = 0;
 if (VAR_2 < 0) {
  VAR_4 = (uint32_t)-VAR_2;
  FUNC_1(VAR_5, VAR_4);
 } else {
  VAR_4 = (uint32_t)VAR_2;
 }
 FUNC_0(VAR_3.D_s.hi, VAR_3.D_s.lo, VAR_5, VAR_4);



 return VAR_3;
}
