
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct ntb_child {unsigned int mwoff; } ;
typedef int device_t ;
typedef int caddr_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int ,unsigned int,int *,int *,size_t*,size_t*,size_t*,int *) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, unsigned VAR_1, vm_paddr_t *VAR_2,
    caddr_t *VAR_3, size_t *VAR_4, size_t *VAR_5, size_t *VAR_6,
    bus_addr_t *VAR_7)
{
 struct ntb_child *VAR_8 = FUNC_1(VAR_0);

 return (FUNC_0(FUNC_2(VAR_0), VAR_1 + VAR_8->mwoff,
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
