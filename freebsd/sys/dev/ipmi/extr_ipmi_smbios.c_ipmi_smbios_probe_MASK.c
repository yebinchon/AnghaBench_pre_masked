
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ u_int32_t ;
struct smbios_eps {int length; scalar_t__ structure_table_address; int structure_table_length; int number_structures; } ;
struct ipmi_get_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ipmi_get_info*,int) ;
 void* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct smbios_eps*) ;
 int VAR_5 ;
 int FUNC_5 (void*,int ,int ,struct ipmi_get_info*) ;

__attribute__((used)) static void
FUNC_6(struct ipmi_get_info *VAR_6)
{
 struct smbios_eps *VAR_7;
 void *VAR_8;
 u_int32_t VAR_9;

 FUNC_1(VAR_6, sizeof(struct ipmi_get_info));


 VAR_9 = FUNC_0(VAR_3, VAR_2, VAR_0,
         VAR_4, VAR_1);
 if (VAR_9 == 0)
  return;






 VAR_7 = FUNC_2(VAR_9, sizeof(struct smbios_eps));
 VAR_8 = FUNC_2(VAR_9, VAR_7->length);
 FUNC_3((vm_offset_t)VAR_7, sizeof(struct smbios_eps));
 VAR_7 = VAR_8;
 if (FUNC_4(VAR_7) != 0) {
  FUNC_3((vm_offset_t)VAR_7, VAR_7->length);
  return;
 }


 VAR_8 = FUNC_2(VAR_7->structure_table_address,
     VAR_7->structure_table_length);
 FUNC_5(VAR_8, VAR_7->number_structures, VAR_5,
     VAR_6);


 FUNC_3((vm_offset_t)VAR_8, VAR_7->structure_table_length);
 FUNC_3((vm_offset_t)VAR_7, VAR_7->length);
}
