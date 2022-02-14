
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_atc {TYPE_1__* vm; } ;
struct TYPE_2__ {unsigned long (* get_ptp_phys ) (TYPE_1__*,int) ;} ;


 unsigned long FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct ct_atc *VAR_0, int VAR_1)
{
 return VAR_0->vm->get_ptp_phys(VAR_0->vm, VAR_1);
}
