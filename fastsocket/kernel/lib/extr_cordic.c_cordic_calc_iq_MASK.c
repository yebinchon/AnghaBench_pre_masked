
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cordic_iq {unsigned int i; unsigned int q; } ;
typedef int s32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_2 ;

struct cordic_iq FUNC_2(s32 VAR_3)
{
 struct cordic_iq VAR_4;
 s32 VAR_5, VAR_6;
 unsigned VAR_7;
 int VAR_8 = 1;
 int VAR_9;

 VAR_4.i = VAR_0;
 VAR_4.q = 0;
 VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_3);
 VAR_9 = (VAR_3 < 0) ? -1 : 1;
 VAR_3 = ((VAR_3 + FUNC_0(180) * VAR_9) % FUNC_0(360)) -
  FUNC_0(180) * VAR_9;

 if (FUNC_1(VAR_3) > 90) {
  VAR_3 -= FUNC_0(180);
  VAR_8 = -1;
 } else if (FUNC_1(VAR_3) < -90) {
  VAR_3 += FUNC_0(180);
  VAR_8 = -1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_3 > VAR_5) {
   VAR_6 = VAR_4.i - (VAR_4.q >> VAR_7);
   VAR_4.q += (VAR_4.i >> VAR_7);
   VAR_5 += VAR_2[VAR_7];
  } else {
   VAR_6 = VAR_4.i + (VAR_4.q >> VAR_7);
   VAR_4.q -= (VAR_4.i >> VAR_7);
   VAR_5 -= VAR_2[VAR_7];
  }
  VAR_4.i = VAR_6;
 }

 VAR_4.i *= VAR_8;
 VAR_4.q *= VAR_8;
 return VAR_4;
}
