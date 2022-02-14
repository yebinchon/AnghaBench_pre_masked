
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int32_t ;
struct agp_ati_softc {int ag_entries; int regs; scalar_t__ ag_virtual; scalar_t__ ag_vdir; int initial_aperture; scalar_t__ is_rs300; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct agp_ati_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 struct agp_ati_softc *VAR_7 = FUNC_5(VAR_6);
 u_int32_t VAR_8, VAR_9;

 FUNC_2(VAR_6);

 if (VAR_7->is_rs300)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3;


 FUNC_1(VAR_1, 0);


 FUNC_0(VAR_6, VAR_7->initial_aperture);

 VAR_9 = FUNC_7(VAR_6, VAR_8, 4);
 FUNC_8(VAR_6, VAR_8, VAR_9 & ~1, 4);

 FUNC_6((vm_offset_t)VAR_7->ag_vdir, VAR_0);
 FUNC_6((vm_offset_t)VAR_7->ag_virtual, VAR_7->ag_entries *
     sizeof(u_int32_t));

 FUNC_4(VAR_6, VAR_5, VAR_2, VAR_7->regs);
 FUNC_3(VAR_6);

 return 0;
}
