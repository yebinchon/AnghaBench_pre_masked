
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_long ;
typedef int u_int32_t ;
struct agp_amd_gatt {int ag_entries; int* ag_vdir; void* ag_virtual; void* ag_physical; void* ag_pdir; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct agp_amd_gatt*,int ) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int ) ;
 int FUNC_4 (int,int) ;
 struct agp_amd_gatt* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 void* FUNC_7 (int) ;

__attribute__((used)) static struct agp_amd_gatt *
FUNC_8(device_t VAR_8)
{
 u_int32_t VAR_9 = FUNC_0(VAR_8);
 u_int32_t VAR_10 = VAR_9 >> VAR_1;
 struct agp_amd_gatt *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_7)
  FUNC_1(VAR_8,
         "allocating GATT for aperture of size %dM\n",
         VAR_9 / (1024*1024));

 VAR_11 = FUNC_5(sizeof(struct agp_amd_gatt), VAR_3, VAR_4);
 if (!VAR_11)
  return 0;







 VAR_11->ag_entries = VAR_10;
 VAR_11->ag_virtual = (void *)FUNC_3(VAR_10 * sizeof(u_int32_t),
     VAR_4 | VAR_5, 0, ~0, VAR_6);
 if (!VAR_11->ag_virtual) {
  if (VAR_7)
   FUNC_1(VAR_8, "allocation failed\n");
  FUNC_2(VAR_11, VAR_3);
  return 0;
 }




 VAR_11->ag_vdir = (void *)FUNC_3(VAR_2, VAR_4 |
     VAR_5, 0, ~0, VAR_6);
 if (!VAR_11->ag_vdir) {
  if (VAR_7)
   FUNC_1(VAR_8,
          "failed to allocate page directory\n");
  FUNC_4((vm_offset_t)VAR_11->ag_virtual, VAR_10 *
      sizeof(u_int32_t));
  FUNC_2(VAR_11, VAR_3);
  return 0;
 }

 VAR_11->ag_pdir = FUNC_7((vm_offset_t) VAR_11->ag_vdir);
 if(VAR_7)
  FUNC_1(VAR_8, "gatt -> ag_pdir %#lx\n",
      (u_long)VAR_11->ag_pdir);



 VAR_11->ag_entries = VAR_10;
 if(VAR_7)
  FUNC_1(VAR_8, "allocating GATT for %d AGP page entries\n",
   VAR_11->ag_entries);

 VAR_11->ag_physical = FUNC_7((vm_offset_t) VAR_11->ag_virtual);
 VAR_14 = FUNC_6(VAR_8, VAR_0, 4) >> 22;

 VAR_13 = ((VAR_10 * sizeof(u_int32_t) + VAR_2 - 1)
    >> VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  vm_offset_t VAR_15;
  vm_offset_t VAR_16;

  VAR_15 = ((vm_offset_t) VAR_11->ag_virtual) + VAR_12 * VAR_2;
  VAR_16 = FUNC_7(VAR_15);
  VAR_11->ag_vdir[VAR_12 + VAR_14] = VAR_16 | 1;
 }

 return VAR_11;
}
