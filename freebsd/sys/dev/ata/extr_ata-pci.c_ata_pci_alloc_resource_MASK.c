
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
struct ata_pci_controller {struct resource* r_irq; scalar_t__ legacy; } ;
struct ata_channel {int unit; } ;
typedef int rman_res_t ;
typedef int device_t ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_0 (int ,int ,int,int*,int,int,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;

struct resource *
FUNC_5(device_t VAR_9, device_t VAR_10, int VAR_11, int *VAR_12,
         rman_res_t VAR_13, rman_res_t VAR_14, rman_res_t VAR_15,
         u_int VAR_16)
{
 struct ata_pci_controller *VAR_17 = FUNC_4(VAR_9);
 struct resource *VAR_18 = ((void*)0);

 if (FUNC_2(VAR_10) == VAR_8) {
  int VAR_19 = ((struct ata_channel *)FUNC_4(VAR_10))->unit;
  int VAR_20;

  if (VAR_11 == VAR_6) {
   switch (*VAR_12) {
   case 128:
       if (VAR_17->legacy) {
    VAR_13 = (VAR_19 ? VAR_5 : VAR_4);
    VAR_15 = VAR_2;
    VAR_14 = VAR_13 + VAR_15 - 1;
       }
       VAR_20 = FUNC_1(0) + (VAR_19 << 3);
       VAR_18 = FUNC_0(FUNC_3(VAR_9), VAR_9,
    VAR_6, &VAR_20,
    VAR_13, VAR_14, VAR_15, VAR_16);
       break;
   case 129:
       if (VAR_17->legacy) {
    VAR_13 = (VAR_19 ? VAR_5 : VAR_4) +
        VAR_1;
    VAR_15 = VAR_0;
    VAR_14 = VAR_13 + VAR_15 - 1;
       }
       VAR_20 = FUNC_1(1) + (VAR_19 << 3);
       VAR_18 = FUNC_0(FUNC_3(VAR_9), VAR_9,
    VAR_6, &VAR_20,
    VAR_13, VAR_14, VAR_15, VAR_16);
       break;
   }
  }
  if (VAR_11 == VAR_7 && *VAR_12 == VAR_3) {
   if (VAR_17->legacy) {
       int VAR_21 = (VAR_19 == 0 ? 14 : 15);

       VAR_18 = FUNC_0(FUNC_3(VAR_9), VAR_10,
    VAR_7, VAR_12, VAR_21, VAR_21, 1, VAR_16);
   } else
       VAR_18 = VAR_17->r_irq;
  }
 } else {
  if (VAR_11 == VAR_7) {
   if (*VAR_12 != VAR_3)
    return (((void*)0));
   VAR_18 = VAR_17->r_irq;
  } else {
   VAR_18 = FUNC_0(FUNC_3(VAR_9), VAR_9,
        VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
  }
 }
 return (VAR_18);
}
