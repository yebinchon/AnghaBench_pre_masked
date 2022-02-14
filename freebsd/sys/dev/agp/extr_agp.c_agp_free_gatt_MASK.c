
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int32_t ;
struct agp_gatt {int ag_entries; scalar_t__ ag_virtual; } ;


 int VAR_0 ;
 int FUNC_0 (struct agp_gatt*,int ) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct agp_gatt *VAR_1)
{
 FUNC_1((vm_offset_t)VAR_1->ag_virtual, VAR_1->ag_entries *
     sizeof(u_int32_t));
 FUNC_0(VAR_1, VAR_0);
}
