
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ u_int32_t ;
struct bios_smap {int dummy; } ;


 int FUNC_0 (struct bios_smap*,int *,int*) ;

__attribute__((used)) static void
FUNC_1(struct bios_smap *VAR_0, vm_paddr_t *VAR_1,
    int *VAR_2)
{
 struct bios_smap *VAR_3, *VAR_4;
 u_int32_t VAR_5;







 VAR_5 = *((u_int32_t *)VAR_0 - 1);
 VAR_4 = (struct bios_smap *)((uintptr_t)VAR_0 + VAR_5);

 for (VAR_3 = VAR_0; VAR_3 < VAR_4; VAR_3++)
  if (!FUNC_0(VAR_3, VAR_1, VAR_2))
   break;
}
