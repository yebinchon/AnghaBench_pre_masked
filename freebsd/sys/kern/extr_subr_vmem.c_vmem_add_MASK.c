
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vm_nfreetags; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
typedef int vmem_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;

int
FUNC_4(vmem_t *VAR_4, vmem_addr_t VAR_5, vmem_size_t VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = 0;
 VAR_7 &= VAR_3;
 FUNC_0(VAR_4);
 if (VAR_4->vm_nfreetags >= VAR_0 || FUNC_2(VAR_4, VAR_7) == 0)
  FUNC_3(VAR_4, VAR_5, VAR_6, VAR_1);
 else
  VAR_8 = VAR_2;
 FUNC_1(VAR_4);

 return (VAR_8);
}
