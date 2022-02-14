
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint16_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * FUNC_0 (int,int ,int,int ,int,int ,int ) ;
 void* FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int * FUNC_3 (int,int) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 () ;

__attribute__((used)) static __inline int
FUNC_10(void)
{

 VAR_15 = FUNC_1(sizeof(*VAR_15) * VAR_7, VAR_0,
     VAR_1 | VAR_2);
 if (VAR_15 == ((void*)0))
  goto fail;
 VAR_14 = FUNC_1(VAR_5, VAR_0, VAR_1 | VAR_2);
 if (VAR_14 == ((void*)0))
  goto fail;


 VAR_17 = VAR_10;
 VAR_16 = FUNC_4(VAR_17, VAR_11);
 if (VAR_16 == ((void*)0))
  goto fail;
 VAR_18 = FUNC_0(VAR_12, VAR_0, VAR_1,
     VAR_9, VAR_17, VAR_8, 0);
 if (VAR_18 == ((void*)0))
     goto fail;
 VAR_19 = FUNC_7(VAR_18);

 FUNC_8((vm_offset_t)VAR_14, VAR_4,
     VAR_5);
 FUNC_8((vm_offset_t)VAR_16, VAR_17,
     VAR_11);
 FUNC_8((vm_offset_t)VAR_18, VAR_19,
     VAR_12);

 if (VAR_13) {
  FUNC_5("x86bios:  IVT 0x%06jx-0x%06jx at %p\n",
      (vm_paddr_t)VAR_4,
      (vm_paddr_t)VAR_5 + VAR_4 - 1,
      VAR_14);
  FUNC_5("x86bios: SSEG 0x%06jx-0x%06jx at %p\n",
      VAR_19,
      (vm_paddr_t)VAR_12 + VAR_19 - 1,
      VAR_18);
  if (VAR_17 < VAR_10)
   FUNC_5("x86bios: EBDA 0x%06jx-0x%06jx at %p\n",
       VAR_17, (vm_paddr_t)VAR_10 - 1,
       VAR_16);
  FUNC_5("x86bios:  ROM 0x%06jx-0x%06jx at %p\n",
      (vm_paddr_t)VAR_10,
      (vm_paddr_t)VAR_6 - VAR_12 - 1,
      (caddr_t)VAR_16 + VAR_10 - VAR_17);
 }

 return (0);

fail:
 FUNC_9();

 return (1);
}
