
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, int VAR_6, int VAR_7)
{
 device_t VAR_8 = FUNC_2(VAR_5);
 struct ata_pci_controller *VAR_9 = FUNC_3(VAR_8);
 struct ata_channel *VAR_10 = FUNC_3(VAR_5);

 if ((VAR_9->chip->cfg2 & VAR_4) && (VAR_10->unit > 1)) {
     int VAR_11;
         static const uint8_t VAR_12[] =
  { 0xa8, 0x65, 0x65, 0x32, 0x20 };
     static const uint8_t VAR_13[] =
  { 0xee, 0xe8, 0xe6, 0xe4, 0xe2, 0xe1, 0xe0 };


     if (VAR_7 >= VAR_3 && VAR_7 < VAR_2)
  VAR_7 = VAR_1;
     if (VAR_7 >= VAR_2) {
  FUNC_4(VAR_8, 0xb3,
     VAR_13[VAR_7 & VAR_0], 1);
  VAR_11 = VAR_1;
     } else
  VAR_11 = VAR_7;
     FUNC_4(VAR_8, 0xab, VAR_12[FUNC_0(VAR_11)], 1);
 } else
  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_7);
 return (VAR_7);
}
