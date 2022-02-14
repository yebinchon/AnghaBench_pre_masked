
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hi; int lo; } ;
struct TYPE_7__ {int hi; } ;
struct TYPE_9__ {scalar_t__ q_s; int Q_s; TYPE_2__ D_s; TYPE_1__ d_s; } ;
typedef TYPE_3__ vint64 ;
typedef int uint32_t ;
struct TYPE_10__ {int lo; int hi; } ;
typedef TYPE_4__ ntpcal_split ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

ntpcal_split
FUNC_2(
 const vint64 *VAR_1
 )
{
 ntpcal_split VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;




 VAR_6 = FUNC_0(VAR_1->d_s.hi);
 VAR_4 = VAR_6 ^ VAR_1->D_s.hi;
 VAR_5 = VAR_6 ^ VAR_1->D_s.lo;
 VAR_7 = VAR_4 >> 19;
 if (VAR_7 >= 675)
  VAR_7 = (VAR_7 % 675u);






 VAR_7 = (VAR_7 << 19) | (VAR_4 & 0x0007FFFFu);
 VAR_7 = (VAR_7 << 3) | (VAR_5 >> 29);
 VAR_3 = VAR_7 / 675u;
 VAR_7 = VAR_7 % 675u;




 VAR_7 = (VAR_7 << 22) | ((VAR_5 >> 7) & 0x003FFFFFu);
 VAR_3 = (VAR_3 << 22) | (VAR_7 / 675u);
 VAR_3 ^= VAR_6;



 VAR_2.hi = FUNC_1(VAR_3);
 VAR_2.lo = VAR_1->D_s.lo - VAR_3 * VAR_0;

 return VAR_2;
}
