
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_6__ {int spa_domain; int spa_memattr; int spa_efi_mem_flags; scalar_t__ spa_len; scalar_t__ spa_phys_base; } ;
struct SPA_mapping {int spa_type; int spa_nfit_idx; TYPE_3__ dev; } ;
typedef enum SPA_mapping_type { ____Placeholder_SPA_mapping_type } SPA_mapping_type ;
struct TYPE_7__ {int u_usr_acc; int u_name; } ;
struct TYPE_5__ {int RangeIndex; int Flags; int ProximityDomain; int MemoryMapping; scalar_t__ Length; scalar_t__ Address; } ;
typedef TYPE_1__ ACPI_NFIT_SYSTEM_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int ,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ,int ,int ,int ) ;

int
FUNC_5(struct SPA_mapping *VAR_4, ACPI_NFIT_SYSTEM_ADDRESS *VAR_5,
    enum SPA_mapping_type VAR_6)
{
 char *VAR_7;
 int VAR_8;

 VAR_4->spa_type = VAR_6;
 VAR_4->spa_nfit_idx = VAR_5->RangeIndex;
 VAR_4->dev.spa_domain =
     ((VAR_5->Flags & VAR_0) != 0) ?
     VAR_5->ProximityDomain : -1;
 VAR_4->dev.spa_phys_base = VAR_5->Address;
 VAR_4->dev.spa_len = VAR_5->Length;
 VAR_4->dev.spa_efi_mem_flags = VAR_5->MemoryMapping;
 if (VAR_2) {
  FUNC_4("NVDIMM SPA%d base %#016jx len %#016jx %s fl %#jx\n",
      VAR_4->spa_nfit_idx,
      (uintmax_t)VAR_4->dev.spa_phys_base,
      (uintmax_t)VAR_4->dev.spa_len,
      VAR_3[VAR_6].u_name,
      VAR_4->dev.spa_efi_mem_flags);
 }
 VAR_4->dev.spa_memattr = FUNC_3(VAR_5->MemoryMapping);
 if (!VAR_3[VAR_6].u_usr_acc)
  return (0);

 FUNC_0(&VAR_7, VAR_1, "spa%d", VAR_4->spa_nfit_idx);
 VAR_8 = FUNC_2(&VAR_4->dev, VAR_7, VAR_4->spa_nfit_idx);
 FUNC_1(VAR_7, VAR_1);
 return (VAR_8);
}
