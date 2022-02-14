
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int32_t ;
struct agp_gatt {int ag_entries; void* ag_virtual; int ag_physical; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct agp_gatt*,int ) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int ,int ,int ) ;
 struct agp_gatt* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;

struct agp_gatt *
FUNC_6(device_t VAR_7)
{
 u_int32_t VAR_8 = FUNC_0(VAR_7);
 u_int32_t VAR_9 = VAR_8 >> VAR_0;
 struct agp_gatt *VAR_10;

 if (VAR_6)
  FUNC_1(VAR_7,
         "allocating GATT for aperture of size %dM\n",
         VAR_8 / (1024*1024));

 if (VAR_9 == 0) {
  FUNC_1(VAR_7, "bad aperture size\n");
  return ((void*)0);
 }

 VAR_10 = FUNC_4(sizeof(struct agp_gatt), VAR_1, VAR_2);
 if (!VAR_10)
  return 0;

 VAR_10->ag_entries = VAR_9;
 VAR_10->ag_virtual = (void *)FUNC_3(VAR_9 *
     sizeof(u_int32_t), VAR_2 | VAR_3, 0, ~0, VAR_4, 0,
     VAR_5);
 if (!VAR_10->ag_virtual) {
  if (VAR_6)
   FUNC_1(VAR_7, "contiguous allocation failed\n");
  FUNC_2(VAR_10, VAR_1);
  return 0;
 }
 VAR_10->ag_physical = FUNC_5((vm_offset_t) VAR_10->ag_virtual);

 return VAR_10;
}
