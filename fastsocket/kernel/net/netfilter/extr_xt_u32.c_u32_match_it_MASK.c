
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct xt_u32_test {unsigned int nnums; unsigned int nvalues; TYPE_2__* value; TYPE_1__* location; } ;
struct xt_u32 {unsigned int ntests; struct xt_u32_test* tests; } ;
struct sk_buff {int len; } ;
typedef int n ;
typedef int __be32 ;
struct TYPE_4__ {int min; int max; } ;
struct TYPE_3__ {int number; int nextop; } ;


 int FUNC_0 () ;




 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff const*,int,int *,int) ;

__attribute__((used)) static bool FUNC_3(const struct xt_u32 *VAR_0,
    const struct sk_buff *VAR_1)
{
 const struct xt_u32_test *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 __be32 VAR_7;
 u_int32_t VAR_8;
 u_int32_t VAR_9;
 u_int32_t VAR_10;





 for (VAR_3 = 0; VAR_3 < VAR_0->ntests; ++VAR_3) {
  VAR_2 = &VAR_0->tests[VAR_3];
  VAR_10 = 0;
  VAR_8 = VAR_2->location[0].number;

  if (VAR_1->len < 4 || VAR_8 > VAR_1->len - 4)
   return 0;

  if (FUNC_2(VAR_1, VAR_8, &VAR_7, sizeof(VAR_7)) < 0)
   FUNC_0();
  VAR_9 = FUNC_1(VAR_7);
  VAR_4 = VAR_2->nnums;


  for (VAR_6 = 1; VAR_6 < VAR_4; ++VAR_6) {
   u_int32_t VAR_11 = VAR_2->location[VAR_6].number;
   switch (VAR_2->location[VAR_6].nextop) {
   case 131:
    VAR_9 &= VAR_11;
    break;
   case 129:
    VAR_9 <<= VAR_11;
    break;
   case 128:
    VAR_9 >>= VAR_11;
    break;
   case 130:
    if (VAR_10 + VAR_9 < VAR_10)
     return 0;
    VAR_10 += VAR_9;
    VAR_8 = VAR_11;
    if (VAR_10 + 4 < VAR_10 || VAR_1->len < VAR_10 + 4 ||
        VAR_8 > VAR_1->len - VAR_10 - 4)
     return 0;

    if (FUNC_2(VAR_1, VAR_10 + VAR_8, &VAR_7,
          sizeof(VAR_7)) < 0)
     FUNC_0();
    VAR_9 = FUNC_1(VAR_7);
    break;
   }
  }


  VAR_5 = VAR_2->nvalues;
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
   if (VAR_2->value[VAR_6].min <= VAR_9 && VAR_9 <= VAR_2->value[VAR_6].max)
    break;

  if (VAR_6 >= VAR_2->nvalues)
   return 0;
 }

 return 1;
}
