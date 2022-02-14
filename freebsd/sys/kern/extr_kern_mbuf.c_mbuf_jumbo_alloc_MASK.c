
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int uma_zone_t ;
typedef int uint8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int ,int,int ,int ) ;

__attribute__((used)) static void *
FUNC_2(uma_zone_t VAR_2, vm_size_t VAR_3, int VAR_4, uint8_t *VAR_5,
    int VAR_6)
{


 *VAR_5 = VAR_0;
 return ((void *)FUNC_1(FUNC_0(VAR_4),
     VAR_3, VAR_6, (vm_paddr_t)0, ~(vm_paddr_t)0, 1, 0,
     VAR_1));
}
