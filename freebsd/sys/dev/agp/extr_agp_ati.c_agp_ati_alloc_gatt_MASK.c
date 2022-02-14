
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int32_t ;
struct agp_ati_softc {int ag_entries; int* ag_vdir; int * ag_virtual; void* ag_pdir; } ;
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
 struct agp_ati_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8)
{
 struct agp_ati_softc *VAR_9 = FUNC_1(VAR_8);
 u_int32_t VAR_10 = FUNC_0(VAR_8);
 u_int32_t VAR_11 = VAR_10 >> VAR_1;
 u_int32_t VAR_12;
 int VAR_13;


 VAR_9->ag_entries = VAR_11;
 VAR_9->ag_virtual = (void *)FUNC_3(VAR_11 * sizeof(u_int32_t),
     VAR_4 | VAR_5, 0, ~0, VAR_6);
 if (VAR_9->ag_virtual == ((void*)0)) {
  if (VAR_7)
   FUNC_2(VAR_8, "GATT allocation failed\n");
  return VAR_3;
 }


 VAR_9->ag_vdir = (void *)FUNC_3(VAR_2, VAR_4 | VAR_5,
     0, ~0, VAR_6);
 if (VAR_9->ag_vdir == ((void*)0)) {
  if (VAR_7)
   FUNC_2(VAR_8, "pagedir allocation failed\n");
  FUNC_4((vm_offset_t)VAR_9->ag_virtual, VAR_11 *
      sizeof(u_int32_t));
  return VAR_3;
 }
 VAR_9->ag_pdir = FUNC_6((vm_offset_t)VAR_9->ag_vdir);

 VAR_12 = FUNC_5(VAR_8, VAR_0, 4) >> 22;

 for (VAR_13 = 0; VAR_13 < VAR_9->ag_entries / 1024; VAR_13++) {
  vm_offset_t VAR_14;
  vm_offset_t VAR_15;

  VAR_14 = ((vm_offset_t)VAR_9->ag_virtual) + VAR_13 * VAR_2;
  VAR_15 = FUNC_6(VAR_14);
  VAR_9->ag_vdir[VAR_12 + VAR_13] = VAR_15 | 1;
 }

 return 0;
}
