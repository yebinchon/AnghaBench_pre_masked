
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 int VAR_5, VAR_6 = VAR_1;
 int64_t VAR_7 = (int64_t)VAR_3;

 if (VAR_7 < 0) {
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_7 <= FUNC_1(VAR_5)) {
    VAR_2[VAR_5] += VAR_4;
    return;
   }
  }
 } else {
  for (VAR_5 = VAR_6 + 1; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_7 < FUNC_1(VAR_5)) {
    VAR_2[VAR_5 - 1] += VAR_4;
    return;
   }
  }

  VAR_2[VAR_0 - 1] += VAR_4;
  return;
 }

 FUNC_0(0);
}
