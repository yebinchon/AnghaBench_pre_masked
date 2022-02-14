
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, int VAR_8, int VAR_9)
{
 device_t VAR_10 = FUNC_0(VAR_7);
 struct ata_pci_controller *VAR_11 = FUNC_1(VAR_10);
 u_int8_t VAR_12 = 0x80 + (VAR_8 << 2);
 u_int32_t VAR_13 = FUNC_3(VAR_10, VAR_12, 4);
 int VAR_14;

 VAR_9 = FUNC_2(VAR_9, VAR_11->chip->max_dma);
 if (VAR_9 >= VAR_4) {
  VAR_13 |= (0x1 << 31);
  VAR_13 &= ~(0x7 << 16);
  VAR_13 |= ((VAR_9 & VAR_0) << 16);
  VAR_14 = VAR_3;
 } else if (VAR_9 >= VAR_5) {
  VAR_13 &= ~(0x1 << 31);
  VAR_13 &= ~(0x3 << 8);
  VAR_13 |= ((VAR_9 & VAR_0) << 8);
  VAR_14 = (VAR_9 == VAR_5) ? VAR_1 :
      (VAR_9 == VAR_6) ? VAR_2 : VAR_3;
 } else
  VAR_14 = VAR_9;
 VAR_13 &= ~(0x7);
 VAR_13 |= (VAR_14 & 0x7);
 FUNC_4(VAR_10, VAR_12, VAR_13, 4);
 return (VAR_9);
}
