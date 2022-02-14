
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct hrtimer {int dummy; } ;
struct TYPE_4__ {scalar_t__ tv64; } ;
typedef TYPE_1__ ktime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hrtimer*) ;
 TYPE_1__ FUNC_1 (struct hrtimer*) ;
 struct timeval FUNC_2 (TYPE_1__) ;

__attribute__((used)) static struct timeval FUNC_3(struct hrtimer *VAR_1)
{
 ktime_t VAR_2 = FUNC_1(VAR_1);






 if (FUNC_0(VAR_1)) {
  if (VAR_2.tv64 <= 0)
   VAR_2.tv64 = VAR_0;
 } else
  VAR_2.tv64 = 0;

 return FUNC_2(VAR_2);
}
