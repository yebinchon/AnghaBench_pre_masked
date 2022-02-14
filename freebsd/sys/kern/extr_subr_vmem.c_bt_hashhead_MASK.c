
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int vm_hashsize; struct vmem_hashlist* vm_hashlist; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_addr_t ;
struct vmem_hashlist {int dummy; } ;
typedef int addr ;


 unsigned int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static struct vmem_hashlist *
FUNC_1(vmem_t *VAR_0, vmem_addr_t VAR_1)
{
 struct vmem_hashlist *VAR_2;
 unsigned int VAR_3;

 VAR_3 = FUNC_0(&VAR_1, sizeof(VAR_1), 0);
 VAR_2 = &VAR_0->vm_hashlist[VAR_3 % VAR_0->vm_hashsize];

 return VAR_2;
}
