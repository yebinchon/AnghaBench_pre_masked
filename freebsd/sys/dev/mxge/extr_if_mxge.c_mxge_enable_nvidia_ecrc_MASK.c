
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int * dev; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int * device_t ;


 int FUNC_0 (int *,int *,int ,uintptr_t*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int,int) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(mxge_softc_t *VAR_11)
{
 uint32_t VAR_12;
 unsigned long VAR_13, VAR_14;
 char *VAR_15, *VAR_16;
 device_t VAR_17, VAR_18;
 uint16_t VAR_19, VAR_20, VAR_21;
 uintptr_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 uint32_t *VAR_27;


 if (!VAR_9)
  return;

 VAR_17 = FUNC_1(FUNC_1(VAR_11->dev));
 if (VAR_17 == ((void*)0)) {
  FUNC_2(VAR_11->dev, "could not find parent?\n");
  return;
 }
 VAR_19 = FUNC_4(VAR_17, VAR_3, 2);
 VAR_20 = FUNC_4(VAR_17, VAR_2, 2);

 if (VAR_19 != 0x10de)
  return;

 VAR_13 = 0;

 if (VAR_20 == 0x005d) {

  VAR_13 = 0xe0000000UL;
 } else if (VAR_20 >= 0x0374 && VAR_20 <= 0x378) {

  VAR_18 = FUNC_3(0, 0, 0);
  if (VAR_18 &&
      0x10de == FUNC_4(VAR_18, VAR_3, 2) &&
      0x0369 == FUNC_4(VAR_18, VAR_2, 2)) {
   VAR_21 = FUNC_4(VAR_18, 0x90, 2);
   VAR_13 = ((unsigned long)VAR_21 & 0x7ffeU) << 25;
  }
 }
 if (!VAR_13)
  return;
 FUNC_0(FUNC_1(VAR_17), VAR_17,
        VAR_4, &VAR_22);
 FUNC_0(FUNC_1(VAR_17), VAR_17,
        VAR_7, &VAR_23);
 FUNC_0(FUNC_1(VAR_17), VAR_17,
        VAR_6, &VAR_24);
 FUNC_0(FUNC_1(VAR_17), VAR_17,
        VAR_8, &VAR_25);
 FUNC_0(FUNC_1(VAR_17), VAR_17,
        VAR_5, &VAR_26);

 VAR_14 = VAR_13
  + 0x00100000UL * (unsigned long)VAR_22
  + 0x00001000UL * (unsigned long)(VAR_24
       + 8 * VAR_23);


 VAR_15 = FUNC_6(FUNC_8((vm_paddr_t)VAR_14), VAR_1);


 if (VAR_15 == ((void*)0)) {
  FUNC_2(VAR_11->dev, "pmap_kenter_temporary didn't\n");
  return;
 }

 VAR_16 = VAR_15 + (VAR_14 & VAR_0);


 VAR_19 = *(uint16_t *)(VAR_16 + VAR_3);
 VAR_20 = *(uint16_t *)(VAR_16 + VAR_2);
 if (! (VAR_19 == VAR_25 && VAR_20 == VAR_26)) {
  FUNC_2(VAR_11->dev, "mapping failed: 0x%x:0x%x\n",
         VAR_19, VAR_20);
  FUNC_7((vm_offset_t)VAR_15, VAR_1);
  return;
 }

 VAR_27 = (uint32_t*)(VAR_16 + 0x178);
 VAR_12 = *VAR_27;

 if (VAR_12 == 0xffffffff) {
  FUNC_2(VAR_11->dev, "extended mapping failed\n");
  FUNC_7((vm_offset_t)VAR_15, VAR_1);
  return;
 }
 *VAR_27 = VAR_12 | 0x40;
 FUNC_7((vm_offset_t)VAR_15, VAR_1);
 if (VAR_10)
  FUNC_2(VAR_11->dev,
         "Enabled ECRC on upstream Nvidia bridge "
         "at %d:%d:%d\n",
         (int)VAR_22, (int)VAR_23, (int)VAR_24);
 return;
}
