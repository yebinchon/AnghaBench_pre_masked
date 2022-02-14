
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timecompare {int last_update; int offset; int skew; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct timecompare*,int*,int*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct timecompare *VAR_2,
     u64 VAR_3)
{
 s64 VAR_4;
 u64 VAR_5;

 if (!FUNC_1(VAR_2, &VAR_4, &VAR_5))
  return;

 if (!VAR_2->last_update) {
  VAR_2->last_update = VAR_5;
  VAR_2->offset = VAR_4;
  VAR_2->skew = 0;
 } else {
  s64 VAR_6 = VAR_5 - VAR_2->last_update;


  if (VAR_6 >= 10000) {
   s64 VAR_7 = VAR_4 - VAR_2->offset;
   s64 VAR_8;


   u64 VAR_9;


   VAR_8 = VAR_7 * VAR_1;
   VAR_9 = VAR_6;
   while (FUNC_2(VAR_9 >= ((s64)1) << 32)) {




    VAR_8 = FUNC_0(VAR_8, 2);
    VAR_9 >>= 1;
   }
   VAR_8 = FUNC_0(VAR_8, VAR_9);
   VAR_2->skew =
    FUNC_0((16 - 12) *
     VAR_2->skew +
     12 * VAR_8,
     16);
   VAR_2->last_update = VAR_5;
   VAR_2->offset = VAR_4;
  }
 }
}
