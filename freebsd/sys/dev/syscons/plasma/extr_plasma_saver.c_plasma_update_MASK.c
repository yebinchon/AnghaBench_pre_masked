
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
typedef int fp16_t ;
struct TYPE_2__ {unsigned int x; unsigned int y; unsigned int vx; unsigned int vy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int * VAR_5 ;
 int FUNC_8 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_9(video_adapter_t *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 signed int VAR_9, VAR_10;
 fp16_t VAR_11, VAR_12;
 fp16_t VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16;


 FUNC_8(VAR_6, 0);

 for (VAR_8 = VAR_14 = VAR_15 = 0; VAR_8 < VAR_3; ++VAR_8) {

  for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7, ++VAR_15) {

   for (VAR_16 = VAR_13 = 0; VAR_16 < VAR_0; ++VAR_16) {
    VAR_9 = VAR_7 - VAR_2[VAR_16].x;
    VAR_10 = VAR_8 - VAR_2[VAR_16].y;
    VAR_11 = FUNC_1(VAR_9 * VAR_9 + VAR_10 * VAR_10);
    VAR_12 = FUNC_6(VAR_11);

    VAR_13 = FUNC_7(VAR_13, FUNC_3(VAR_12 / 4));
   }






   VAR_13 = FUNC_5(VAR_13, FUNC_1(127));
   VAR_13 = FUNC_4(VAR_13, FUNC_1(VAR_0));
   VAR_13 = FUNC_2(VAR_13, FUNC_1(127));

   if (VAR_15 > VAR_1) {
    VAR_15 -= VAR_1;
    VAR_14 += VAR_1;
    FUNC_8(VAR_6, VAR_14);
   }

   VAR_5[VAR_15] = FUNC_0(VAR_13);
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_0; ++VAR_16) {
  VAR_2[VAR_16].x += VAR_2[VAR_16].vx;
  if (VAR_2[VAR_16].x < 0) {

   VAR_2[VAR_16].vx = -VAR_2[VAR_16].vx;
   VAR_2[VAR_16].x = -VAR_2[VAR_16].x;
  } else if (VAR_2[VAR_16].x >= VAR_4) {

   VAR_2[VAR_16].vx = -VAR_2[VAR_16].vx;
   VAR_2[VAR_16].x = VAR_4 - (VAR_2[VAR_16].x - VAR_4);
  }
  VAR_2[VAR_16].y += VAR_2[VAR_16].vy;
  if (VAR_2[VAR_16].y < 0) {

   VAR_2[VAR_16].vy = -VAR_2[VAR_16].vy;
   VAR_2[VAR_16].y = -VAR_2[VAR_16].y;
  } else if (VAR_2[VAR_16].y >= VAR_3) {

   VAR_2[VAR_16].vy = -VAR_2[VAR_16].vy;
   VAR_2[VAR_16].y = VAR_3 - (VAR_2[VAR_16].y - VAR_3);
  }
 }
}
