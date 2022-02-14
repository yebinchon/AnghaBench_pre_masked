
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u64 ;
struct hrtimer {TYPE_2__* base; } ;
typedef int s64 ;
struct TYPE_13__ {scalar_t__ tv64; } ;
typedef TYPE_3__ ktime_t ;
struct TYPE_11__ {scalar_t__ tv64; } ;
struct TYPE_12__ {TYPE_1__ resolution; } ;


 int FUNC_0 (struct hrtimer*,TYPE_3__) ;
 int FUNC_1 (struct hrtimer*,int) ;
 int FUNC_2 (struct hrtimer*) ;
 scalar_t__ FUNC_3 (struct hrtimer*) ;
 int FUNC_4 (TYPE_3__,int) ;
 TYPE_3__ FUNC_5 (TYPE_3__,int ) ;
 int FUNC_6 (TYPE_3__) ;
 scalar_t__ FUNC_7 (int) ;

u64 FUNC_8(struct hrtimer *VAR_0, ktime_t VAR_1, ktime_t VAR_2)
{
 u64 VAR_3 = 1;
 ktime_t VAR_4;

 VAR_4 = FUNC_5(VAR_1, FUNC_2(VAR_0));

 if (VAR_4.tv64 < 0)
  return 0;

 if (VAR_2.tv64 < VAR_0->base->resolution.tv64)
  VAR_2.tv64 = VAR_0->base->resolution.tv64;

 if (FUNC_7(VAR_4.tv64 >= VAR_2.tv64)) {
  s64 VAR_5 = FUNC_6(VAR_2);

  VAR_3 = FUNC_4(VAR_4, VAR_5);
  FUNC_1(VAR_0, VAR_5 * VAR_3);
  if (FUNC_3(VAR_0) > VAR_1.tv64)
   return VAR_3;




  VAR_3++;
 }
 FUNC_0(VAR_0, VAR_2);

 return VAR_3;
}
