
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct bios_smap {int type; int length; int base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int *,int*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bios_smap *VAR_3, vm_paddr_t *VAR_4, int *VAR_5)
{
 if (VAR_2 & VAR_0)
  FUNC_1("SMAP type=%02x base=%016llx len=%016llx\n",
      VAR_3->type, VAR_3->base, VAR_3->length);

 if (VAR_3->type != VAR_1)
  return (1);

 return (FUNC_0(VAR_3->base, VAR_3->length, VAR_4,
     VAR_5));
}
