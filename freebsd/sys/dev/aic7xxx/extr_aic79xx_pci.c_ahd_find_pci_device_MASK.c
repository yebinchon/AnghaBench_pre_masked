
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef size_t u_int ;
struct ahd_pci_identity {int full_id; int id_mask; int * name; } ;
typedef int aic_dev_softc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 size_t VAR_11 ;
 struct ahd_pci_identity* VAR_12 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*) ;

struct ahd_pci_identity *
FUNC_3(aic_dev_softc_t VAR_13)
{
 uint64_t VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 struct ahd_pci_identity *VAR_19;
 u_int VAR_20;

 VAR_16 = FUNC_1(VAR_13, VAR_6, 2);
 VAR_15 = FUNC_1(VAR_13, VAR_5, 2);
 VAR_18 = FUNC_1(VAR_13, VAR_8, 2);
 VAR_17 = FUNC_1(VAR_13, VAR_7, 2);

 if ((VAR_16 == VAR_0) && (VAR_18 == VAR_9)) {
  if ((VAR_15 == VAR_1) || (VAR_15 == VAR_2) ||
   (VAR_15 == VAR_3)) {
   FUNC_2("Controller device ID conflict with PMC Adaptec HBA\n");
   return (((void*)0));
  }
 }

 VAR_14 = FUNC_0(VAR_15,
     VAR_16,
     VAR_17,
     VAR_18);






 if (VAR_10)
  VAR_14 &= VAR_4;

 for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20++) {
  VAR_19 = &VAR_12[VAR_20];
  if (VAR_19->full_id == (VAR_14 & VAR_19->id_mask)) {

   if (VAR_19->name == ((void*)0))
    return (((void*)0));
   return (VAR_19);
  }
 }
 return (((void*)0));
}
