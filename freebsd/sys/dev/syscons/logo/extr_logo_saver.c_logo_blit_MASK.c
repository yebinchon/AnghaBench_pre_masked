
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_2(video_adapter_t *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = -1;

 for (VAR_11 = 0, VAR_12 = VAR_8 * VAR_1 + VAR_7; VAR_12 > VAR_0; VAR_12 -= VAR_0)
  VAR_11 += VAR_0;
 FUNC_0(VAR_6, VAR_11);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9 += VAR_4) {
  if (VAR_12 + VAR_4 < VAR_0) {
   FUNC_1(VAR_2 + VAR_9, VAR_5 + VAR_12, VAR_4);
   VAR_12 += VAR_1;
  } else if (VAR_12 < VAR_0) {
   VAR_10 = VAR_0 - VAR_12;
   FUNC_1(VAR_2 + VAR_9, VAR_5 + VAR_12, VAR_10);
   FUNC_0(VAR_6, (VAR_11 += VAR_0));
   FUNC_1(VAR_2 + VAR_9 + VAR_10, VAR_5, VAR_4 - VAR_10);
   VAR_12 += VAR_1 - VAR_0;
  } else {
   VAR_12 -= VAR_0;
   FUNC_0(VAR_6, (VAR_11 += VAR_0));
   FUNC_1(VAR_2 + VAR_9, VAR_5 + VAR_12, VAR_4);
   VAR_12 += VAR_1;
  }
 }
}
