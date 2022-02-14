
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,scalar_t__,int) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3(video_adapter_t *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = -1;


 for (VAR_7 = 0, VAR_8 = VAR_3; VAR_7 < VAR_4; VAR_7++)
  VAR_2[VAR_7 + (VAR_8 * VAR_1)] = FUNC_2() % 160 + 96;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   VAR_2[VAR_7 + (VAR_8 * VAR_4)] =
       (VAR_2[(VAR_7 + 0) + ((VAR_8 + 0) * VAR_4)] +
        VAR_2[(VAR_7 - 1) + ((VAR_8 + 1) * VAR_4)] +
        VAR_2[(VAR_7 + 0) + ((VAR_8 + 1) * VAR_4)] +
        VAR_2[(VAR_7 + 1) + ((VAR_8 + 1) * VAR_4)]) / 4;
   if (VAR_2[VAR_7 + (VAR_8 * VAR_4)] > 0)
    VAR_2[VAR_7 + (VAR_8 * VAR_4)]--;
  }
 }


 for (VAR_8 = 0, VAR_10 = 0, VAR_9 = 0; VAR_8 < VAR_3; VAR_8++, VAR_10 += VAR_1) {
  while (VAR_10 > VAR_0) {
   VAR_10 -= VAR_0;
   VAR_9 += VAR_0;
  }
  FUNC_0(VAR_6, VAR_9);
  if (VAR_10 + VAR_4 < VAR_0) {
   FUNC_1(VAR_2 + VAR_8 * VAR_4, VAR_5 + VAR_10, VAR_4);
  } else {
   FUNC_1(VAR_2 + VAR_8 * VAR_4, VAR_5 + VAR_10, VAR_0 - VAR_10);
   FUNC_0(VAR_6, VAR_9 + VAR_0);
   FUNC_1(VAR_2 + VAR_8 * VAR_4 + (VAR_0 - VAR_10), VAR_5,
         VAR_4 - (VAR_0 - VAR_10));
   VAR_10 -= VAR_0;
   VAR_9 += VAR_0;
  }
 }

}
