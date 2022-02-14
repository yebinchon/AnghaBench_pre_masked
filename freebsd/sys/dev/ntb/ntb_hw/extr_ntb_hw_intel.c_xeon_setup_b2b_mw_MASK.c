
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_softc {scalar_t__ b2b_mw_idx; int b2b_off; scalar_t__ msix_mw_idx; struct ntb_pci_bar_info* bar_info; struct ntb_pci_bar_info* peer_lapic_bar; void* msix_xlat; int device; } ;
struct ntb_pci_bar_info {int size; } ;
struct ntb_b2b_addr {int bar0_addr; int bar2_addr64; int bar4_addr64; int bar4_addr32; int bar5_addr32; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_17 ;
 int FUNC_2 (struct ntb_softc*,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (struct ntb_softc*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ntb_softc*,scalar_t__) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (struct ntb_softc*,int,int) ;
 int FUNC_9 (struct ntb_softc*,int,int) ;
 int FUNC_10 (struct ntb_softc*,int,int,int) ;

__attribute__((used)) static int
FUNC_11(struct ntb_softc *VAR_19, const struct ntb_b2b_addr *VAR_20,
    const struct ntb_b2b_addr *VAR_21)
{
 struct ntb_pci_bar_info *VAR_22;
 vm_size_t VAR_23;
 uint64_t VAR_24;
 enum ntb_bar VAR_25, VAR_26;

 if (VAR_19->b2b_mw_idx == VAR_0) {
  VAR_22 = ((void*)0);
  VAR_25 = VAR_6;
  VAR_19->b2b_off = 0;
 } else {
  VAR_25 = FUNC_5(VAR_19, VAR_19->b2b_mw_idx);
  FUNC_1(VAR_25 > 0 && VAR_25 < VAR_7,
      ("invalid b2b mw bar"));

  VAR_22 = &VAR_19->bar_info[VAR_25];
  VAR_23 = VAR_22->size;

  if (VAR_18 != 0 &&
      (VAR_23 >> 1) >= VAR_10)
   VAR_19->b2b_off = VAR_23 >> 1;
  else if (VAR_23 >= VAR_10) {
   VAR_19->b2b_off = 0;
  } else {
   FUNC_4(VAR_19->device,
       "B2B bar size is too small!\n");
   return (VAR_1);
  }
 }





 for (VAR_26 = VAR_3; VAR_26 < VAR_7; VAR_26++)
  FUNC_8(VAR_19, VAR_26, VAR_25);

 VAR_24 = 0;
 if (VAR_25 == VAR_6)
  VAR_24 = VAR_20->bar0_addr;
 else if (VAR_25 == VAR_3)
  VAR_24 = VAR_20->bar2_addr64;
 else if (VAR_25 == VAR_4 && !FUNC_0(VAR_19, VAR_9))
  VAR_24 = VAR_20->bar4_addr64;
 else if (VAR_25 == VAR_4)
  VAR_24 = VAR_20->bar4_addr32;
 else if (VAR_25 == VAR_5)
  VAR_24 = VAR_20->bar5_addr32;
 else
  FUNC_1(0, ("invalid bar"));

 FUNC_7(8, VAR_15, VAR_24);
 FUNC_10(VAR_19, VAR_20->bar2_addr64, VAR_3,
     VAR_25);
 if (FUNC_0(VAR_19, VAR_9)) {
  FUNC_10(VAR_19, VAR_20->bar4_addr32,
      VAR_4, VAR_25);
  FUNC_10(VAR_19, VAR_20->bar5_addr32,
      VAR_5, VAR_25);
 } else
  FUNC_10(VAR_19, VAR_20->bar4_addr64,
      VAR_4, VAR_25);


 FUNC_7(8, VAR_16, 0);
 FUNC_7(8, VAR_17, 0);

 if (FUNC_0(VAR_19, VAR_8)) {
  uint32_t VAR_27, VAR_28;
  enum ntb_bar VAR_29;





  VAR_29 = FUNC_5(VAR_19, VAR_19->msix_mw_idx);
  FUNC_2(VAR_19, VAR_29, ((void*)0), &VAR_27, &VAR_28);
  if (FUNC_3(VAR_19, VAR_29)) {
   FUNC_7(8, VAR_27, VAR_2);
   VAR_19->msix_xlat = FUNC_6(8, VAR_27);
   FUNC_7(8, VAR_28, 0);
  } else {
   FUNC_7(4, VAR_27, VAR_2);
   VAR_19->msix_xlat = FUNC_6(4, VAR_27);
   FUNC_7(4, VAR_28, 0);
  }

  VAR_19->peer_lapic_bar = &VAR_19->bar_info[VAR_29];
 }
 (void)FUNC_6(8, VAR_16);
 (void)FUNC_6(8, VAR_17);


 FUNC_7(8, VAR_13, 0);
 FUNC_7(8, VAR_14, 0);


 FUNC_9(VAR_19, VAR_21->bar2_addr64, VAR_3);
 if (FUNC_0(VAR_19, VAR_9)) {
  FUNC_9(VAR_19, VAR_21->bar4_addr32, VAR_4);
  FUNC_9(VAR_19, VAR_21->bar5_addr32, VAR_5);
 } else
  FUNC_9(VAR_19, VAR_21->bar4_addr64, VAR_4);


 VAR_24 = 0;
 if (VAR_25 == VAR_6)
  VAR_24 = VAR_21->bar0_addr;
 else if (VAR_25 == VAR_3)
  VAR_24 = VAR_21->bar2_addr64;
 else if (VAR_25 == VAR_4 && !FUNC_0(VAR_19, VAR_9))
  VAR_24 = VAR_21->bar4_addr64;
 else if (VAR_25 == VAR_4)
  VAR_24 = VAR_21->bar4_addr32;
 else if (VAR_25 == VAR_5)
  VAR_24 = VAR_21->bar5_addr32;
 else
  FUNC_1(0, ("invalid bar"));





 FUNC_7(4, VAR_11, VAR_24 & 0xffffffff);
 FUNC_7(4, VAR_12, VAR_24 >> 32);
 return (0);
}
