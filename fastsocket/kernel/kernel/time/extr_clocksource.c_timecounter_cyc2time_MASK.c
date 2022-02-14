
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timecounter {int cycle_last; int nsec; TYPE_1__* cc; } ;
typedef int cycle_t ;
struct TYPE_2__ {int mask; } ;


 int FUNC_0 (TYPE_1__*,int) ;

u64 FUNC_1(struct timecounter *VAR_0,
    cycle_t VAR_1)
{
 u64 VAR_2 = (VAR_1 - VAR_0->cycle_last) & VAR_0->cc->mask;
 u64 VAR_3;






 if (VAR_2 > VAR_0->cc->mask / 2) {
  VAR_2 = (VAR_0->cycle_last - VAR_1) & VAR_0->cc->mask;
  VAR_3 = VAR_0->nsec - FUNC_0(VAR_0->cc, VAR_2);
 } else {
  VAR_3 = FUNC_0(VAR_0->cc, VAR_2) + VAR_0->nsec;
 }

 return VAR_3;
}
