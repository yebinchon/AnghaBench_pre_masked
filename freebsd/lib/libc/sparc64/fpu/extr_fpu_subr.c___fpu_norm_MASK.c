
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int fp_exp; int* fp_mant; int fp_class; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct fpn *VAR_2)
{
 u_int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = VAR_2->fp_exp;
 VAR_3 = VAR_2->fp_mant[0];
 VAR_4 = VAR_2->fp_mant[1];
 VAR_5 = VAR_2->fp_mant[2];
 VAR_6 = VAR_2->fp_mant[3];


 if (VAR_3 == 0) {
  if (VAR_4)
   VAR_3 = VAR_4, VAR_4 = VAR_5, VAR_5 = VAR_6, VAR_6 = 0, VAR_12 -= 32;
  else if (VAR_5)
   VAR_3 = VAR_5, VAR_4 = VAR_6, VAR_5 = 0, VAR_6 = 0, VAR_12 -= 2 * 32;
  else if (VAR_6)
   VAR_3 = VAR_6, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_12 -= 3 * 32;
  else {
   VAR_2->fp_class = VAR_0;
   return;
  }
 }


 VAR_9 = VAR_1;
 VAR_8 = VAR_9 << 1;
 if (VAR_3 >= VAR_8) {




  for (VAR_11 = 1, VAR_7 = VAR_3 >> 1; VAR_7 >= VAR_8; VAR_11++)
   VAR_7 >>= 1;
  VAR_12 += VAR_11;
  VAR_10 = 32 - VAR_11;
  VAR_6 = VAR_5 << VAR_10;
  VAR_5 = (VAR_5 >> VAR_11) | (VAR_4 << VAR_10);
  VAR_4 = (VAR_4 >> VAR_11) | (VAR_3 << VAR_10);
  VAR_3 = VAR_7;
 } else if (VAR_3 < VAR_9) {




  for (VAR_10 = 1, VAR_7 = VAR_3 << 1; VAR_7 < VAR_9; VAR_10++)
   VAR_7 <<= 1;
  VAR_12 -= VAR_10;
  VAR_11 = 32 - VAR_10;
  VAR_3 = VAR_7 | (VAR_4 >> VAR_11);
  VAR_4 = (VAR_4 << VAR_10) | (VAR_5 >> VAR_11);
  VAR_5 = (VAR_5 << VAR_10) | (VAR_6 >> VAR_11);
  VAR_6 <<= VAR_10;
 }

 VAR_2->fp_exp = VAR_12;
 VAR_2->fp_mant[0] = VAR_3;
 VAR_2->fp_mant[1] = VAR_4;
 VAR_2->fp_mant[2] = VAR_5;
 VAR_2->fp_mant[3] = VAR_6;
}
