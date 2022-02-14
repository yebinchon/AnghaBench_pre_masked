
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct scsi_attrib_table_entry {size_t id; } ;



struct scsi_attrib_table_entry *
FUNC_0(struct scsi_attrib_table_entry *VAR_0,
         size_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].id == VAR_2)
   return (&VAR_0[VAR_3]);
 }

 return (((void*)0));
}
