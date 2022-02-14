
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vcpu_info {int time; } ;
struct pvclock_vcpu_time_info {int dummy; } ;


 int FUNC_0 (struct pvclock_vcpu_time_info*) ;

__attribute__((used)) static uint64_t
FUNC_1(struct vcpu_info *VAR_0)
{
 struct pvclock_vcpu_time_info *VAR_1;

 VAR_1 = (struct pvclock_vcpu_time_info *) &VAR_0->time;

 return (FUNC_0(VAR_1));
}
