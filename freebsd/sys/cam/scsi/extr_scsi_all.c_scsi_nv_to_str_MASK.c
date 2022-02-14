
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct scsi_nv {scalar_t__ value; char const* name; } ;



const char *
FUNC_0(struct scsi_nv *VAR_0, int VAR_1, uint64_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].value == VAR_2)
   return (VAR_0[VAR_3].name);
 }

 return (((void*)0));
}
