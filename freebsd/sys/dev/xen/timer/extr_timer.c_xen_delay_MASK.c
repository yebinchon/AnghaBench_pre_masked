
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vcpu_info {int dummy; } ;
struct TYPE_2__ {struct vcpu_info* vcpu_info; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vcpu_info*) ;

void
FUNC_1(int VAR_2)
{
 struct vcpu_info *VAR_3 = &VAR_0->vcpu_info[0];
 uint64_t VAR_4;
 uint64_t VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 VAR_4 += VAR_2 * VAR_1;

 for (;;) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 >= VAR_4)
   break;
 }
}
