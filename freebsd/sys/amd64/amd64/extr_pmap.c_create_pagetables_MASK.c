
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int pml4_entry_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* FUNC_1 (scalar_t__*,int) ;
 int VAR_28 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_4 (int,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(vm_paddr_t *VAR_36)
{
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 pd_entry_t *VAR_42;
 pdp_entry_t *VAR_43;
 pml4_entry_t *VAR_44;
 uint64_t VAR_45;


 VAR_31 = FUNC_4(FUNC_7(VAR_13), VAR_14);
 if (VAR_31 < 4)
  VAR_31 = 4;
 VAR_32 = FUNC_4(VAR_31, VAR_19);
 if (VAR_32 > VAR_16) {




  FUNC_6("NDMPML4E limits system to %d GB\n", VAR_16 * 512);
  VAR_13 = FUNC_2(VAR_16 * VAR_15);
  VAR_32 = VAR_16;
  VAR_31 = VAR_16 * VAR_18;
 }
 VAR_1 = FUNC_1(VAR_36, VAR_32);
 VAR_39 = 0;
 if ((VAR_28 & VAR_0) != 0) {




  VAR_39 = FUNC_7(VAR_13) >> VAR_20;





  VAR_41 = FUNC_4((vm_offset_t)(VAR_29 - VAR_4), VAR_14);
  VAR_45 = FUNC_1(VAR_36, VAR_41);
 }
 if (VAR_39 < VAR_31)
  VAR_2 = FUNC_1(VAR_36, VAR_31 - VAR_39);
 VAR_30 = (vm_paddr_t)VAR_31 << VAR_20;


 VAR_11 = FUNC_1(VAR_36, 1);
 VAR_7 = FUNC_1(VAR_36, VAR_17);
 FUNC_5(*VAR_36);
 VAR_40 = FUNC_0(VAR_33);

 VAR_12 = FUNC_1(VAR_36, VAR_33);
 VAR_8 = FUNC_1(VAR_36, VAR_40);






 VAR_42 = (pd_entry_t *)VAR_8;
 for (VAR_37 = 0; VAR_37 < VAR_33; VAR_37++)
  VAR_42[VAR_37] = (VAR_12 + FUNC_7(VAR_37)) | VAR_26 | VAR_27;






 for (VAR_37 = 0; (VAR_37 << VAR_21) < VAR_5; VAR_37++)

  VAR_42[VAR_37] = (VAR_37 << VAR_21) | VAR_27 | VAR_22 | VAR_34 |
      VAR_25 | VAR_24 | FUNC_3(VAR_37 << VAR_21);






 if (*VAR_36 < FUNC_8(VAR_5))
  *VAR_36 = FUNC_8(VAR_5);


 VAR_43 = (pdp_entry_t *)(VAR_7 + FUNC_7(VAR_10 - VAR_9));
 for (VAR_37 = 0; VAR_37 < VAR_40; VAR_37++)
  VAR_43[VAR_37 + VAR_6] = (VAR_8 + FUNC_7(VAR_37)) | VAR_26 | VAR_27;
 VAR_42 = (pd_entry_t *)VAR_2;
 for (VAR_37 = VAR_18 * VAR_39, VAR_38 = 0; VAR_37 < VAR_18 * VAR_31; VAR_37++, VAR_38++) {
  VAR_42[VAR_38] = (vm_paddr_t)VAR_37 << VAR_21;

  VAR_42[VAR_38] |= VAR_26 | VAR_27 | VAR_22 | VAR_34 |
      VAR_25 | VAR_24 | VAR_35;
 }
 VAR_43 = (pdp_entry_t *)VAR_1;
 for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++) {
  VAR_43[VAR_37] = (vm_paddr_t)VAR_37 << VAR_20;

  VAR_43[VAR_37] |= VAR_26 | VAR_27 | VAR_22 | VAR_34 |
      VAR_25 | VAR_24 | VAR_35;
 }
 for (VAR_38 = 0; VAR_37 < VAR_31; VAR_37++, VAR_38++) {
  VAR_43[VAR_37] = VAR_2 + FUNC_7(VAR_38);
  VAR_43[VAR_37] |= VAR_26 | VAR_27 | VAR_35;
 }






 if (VAR_39) {
  VAR_42 = (pd_entry_t *)VAR_45;
  for (VAR_37 = 0; VAR_37 < (VAR_18 * VAR_41); VAR_37++)
   VAR_42[VAR_37] = (VAR_37 << VAR_21) | VAR_27 | VAR_22 | VAR_34 |
       VAR_25 | VAR_24 | VAR_35 |
       FUNC_3(VAR_37 << VAR_21);
  for (VAR_37 = 0; VAR_37 < VAR_41; VAR_37++)
   VAR_43[VAR_37] = (VAR_45 + FUNC_7(VAR_37)) | VAR_26 |
       VAR_27 | VAR_35;
 }


 VAR_44 = (pml4_entry_t *)VAR_11;
 VAR_44[VAR_23] = VAR_11;
 VAR_44[VAR_23] |= VAR_26 | VAR_27 | VAR_35;


 for (VAR_37 = 0; VAR_37 < VAR_32; VAR_37++) {
  VAR_44[VAR_3 + VAR_37] = VAR_1 + FUNC_7(VAR_37);
  VAR_44[VAR_3 + VAR_37] |= VAR_26 | VAR_27 | VAR_35;
 }


 for (VAR_37 = 0; VAR_37 < VAR_17; VAR_37++) {
  VAR_44[VAR_9 + VAR_37] = VAR_7 + FUNC_7(VAR_37);
  VAR_44[VAR_9 + VAR_37] |= VAR_26 | VAR_27;
 }
}
