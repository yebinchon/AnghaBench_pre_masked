
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int va_window_size; int va_line_width; scalar_t__ va_window; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int* VAR_8 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_9(video_adapter_t *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u_char VAR_16;
 int VAR_17 = -1;

 if (VAR_10) {

  if (VAR_2 <= 0) {
   VAR_15 = FUNC_4();
   FUNC_8(VAR_9, VAR_6);
   FUNC_6(VAR_9, VAR_4);
   FUNC_7(VAR_9, 0);
   VAR_2++;
   VAR_8 = (u_char *)VAR_9->va_window;
   VAR_1 = VAR_9->va_window_size;
   VAR_3 = VAR_9->va_line_width;
   FUNC_5(VAR_15);
   for (VAR_11 = 0; VAR_11 < VAR_3*VAR_5; VAR_11 += VAR_1) {
    FUNC_0(VAR_9, VAR_11);
    if ((VAR_3 * VAR_5 - VAR_11) < VAR_1)
     FUNC_1(VAR_8, VAR_3 * VAR_5 - VAR_11);
    else
     FUNC_1(VAR_8, VAR_1);
   }
   FUNC_0(VAR_9, 0);
   for (VAR_11 = 0, VAR_13 = 0, VAR_14 = 0; VAR_11 < VAR_7; VAR_11 += 2, VAR_14 += 2) {
    if (VAR_14 > VAR_1) {
     VAR_14 -= VAR_1;
     VAR_13 += VAR_1;
     FUNC_0(VAR_9, VAR_13);
    }
    VAR_8[VAR_14] = 1 + (FUNC_3() % VAR_0);
   }
   VAR_13 = 0; VAR_14 = 0;
   for (VAR_12 = 1; VAR_12 < VAR_5; VAR_12++)
     for (VAR_11 = 0, VAR_14 = VAR_3 * (VAR_12 - 1) - VAR_13; VAR_11 < VAR_7; VAR_11 += 2, VAR_14+= 2) {
      while (VAR_14 > VAR_1) {
     VAR_14 -= VAR_1;
     VAR_13 += VAR_1;
    }
    FUNC_0(VAR_9, VAR_13);
    VAR_16 = (VAR_8[VAR_14] < VAR_0) ? 1 + VAR_8[VAR_14] : 1;
    if (VAR_14 + VAR_3 < VAR_1) {
     VAR_8[VAR_14 + VAR_3] = VAR_16;
    } else {
     FUNC_0(VAR_9, VAR_13 + VAR_1);
     VAR_8[VAR_14 + VAR_3 - VAR_1] = VAR_16;
    }
     }
  }


  FUNC_2(VAR_9);
 } else {
  VAR_2 = 0;
 }
 return (0);
}
