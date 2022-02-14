
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int maxcpus; struct vcpu* vcpu; } ;
struct vcpu {int exitintinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu*) ;

int
FUNC_1(struct vm *VAR_1, int VAR_2, uint64_t *VAR_3, uint64_t *VAR_4)
{
 struct vcpu *VAR_5;

 if (VAR_2 < 0 || VAR_2 >= VAR_1->maxcpus)
  return (VAR_0);

 VAR_5 = &VAR_1->vcpu[VAR_2];
 *VAR_3 = VAR_5->exitintinfo;
 *VAR_4 = FUNC_0(VAR_5);
 return (0);
}
