
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void
FUNC_1(video_adapter_t *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = -1;

 for (VAR_8 = 1, VAR_10 = 0, VAR_11 = VAR_0*8; VAR_8 < 5; VAR_8++, VAR_11 /= 2) {
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++, VAR_10++) {
   VAR_13 = (VAR_5[VAR_10] / VAR_4) * VAR_2 + (VAR_5[VAR_10] % VAR_4);
   VAR_12 = 0;
   while (VAR_13 > VAR_1) {
    VAR_13 -= VAR_1;
    VAR_12 += VAR_1;
   }
   FUNC_0(VAR_7, VAR_12);
   VAR_6[VAR_13] = 0;
   VAR_5[VAR_10] += VAR_8;
   if (VAR_5[VAR_10] > VAR_4*VAR_3)
    VAR_5[VAR_10] -= VAR_4*VAR_3;
   VAR_13 = (VAR_5[VAR_10] / VAR_4) * VAR_2 + (VAR_5[VAR_10] % VAR_4);
   VAR_12 = 0;
   while (VAR_13 > VAR_1) {
    VAR_13 -= VAR_1;
    VAR_12 += VAR_1;
   }
   FUNC_0(VAR_7, VAR_12);
   VAR_6[VAR_13] = VAR_8;
  }
 }
}
