
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int32_t ;
struct agp_amd_gatt {int ag_entries; scalar_t__ ag_virtual; scalar_t__ ag_vdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct agp_amd_gatt*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct agp_amd_gatt *VAR_2)
{
 FUNC_1((vm_offset_t)VAR_2->ag_vdir, VAR_0);
 FUNC_1((vm_offset_t)VAR_2->ag_virtual, VAR_2->ag_entries *
     sizeof(u_int32_t));
 FUNC_0(VAR_2, VAR_1);
}
