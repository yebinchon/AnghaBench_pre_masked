
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ u_int32_t ;
struct bios_smap {int type; int length; int base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int *,int*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int ) ;

void
FUNC_2(struct bios_smap *VAR_3, u_int32_t VAR_4,
                      vm_paddr_t *VAR_5, int *VAR_6)
{
 struct bios_smap *VAR_7, *VAR_8;

 VAR_8 = (struct bios_smap *)((uintptr_t)VAR_3 + VAR_4);

 for (VAR_7 = VAR_3; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_2 & VAR_0)
   FUNC_1("SMAP type=%02x base=%016lx len=%016lx\n",
       VAR_7->type, VAR_7->base, VAR_7->length);

  if (VAR_7->type != VAR_1)
   continue;

  if (!FUNC_0(VAR_7->base, VAR_7->length, VAR_5,
      VAR_6))
   break;
 }
}
