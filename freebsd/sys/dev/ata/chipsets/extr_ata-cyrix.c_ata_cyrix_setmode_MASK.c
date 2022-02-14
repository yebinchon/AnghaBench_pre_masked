
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ata_pci_controller {scalar_t__ r_res1; } ;
struct ata_channel {int unit; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {int res; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9, int VAR_10, int VAR_11)
{
 struct ata_pci_controller *VAR_12 = FUNC_3(FUNC_2(VAR_9));
 struct ata_channel *VAR_13 = FUNC_3(VAR_9);
 int VAR_14 = (VAR_13->unit << 1) + VAR_10;
 int VAR_15;
 static const uint32_t VAR_16[] =
     { 0x00009172, 0x00012171, 0x00020080, 0x00032010, 0x00040010 };
 static const uint32_t VAR_17[] =
     { 0x00077771, 0x00012121, 0x00002020 };
 static const uint32_t VAR_18[] =
     { 0x00921250, 0x00911140, 0x00911030 };

 VAR_11 = FUNC_4(VAR_11, VAR_6);

 if (VAR_12->r_res1) {
  if (VAR_11 >= VAR_5) {

   FUNC_0(VAR_13->r_io[VAR_0].res,
       0x24 + (VAR_14 << 3), VAR_18[VAR_11 & VAR_1]);
   VAR_15 = VAR_4;
  } else if (VAR_11 >= VAR_7) {

   FUNC_0(VAR_13->r_io[VAR_0].res,
       0x24 + (VAR_14 << 3), VAR_17[VAR_11 & VAR_1]);
          VAR_15 = (VAR_11 == VAR_7) ? VAR_2 :
       (VAR_11 == VAR_8) ? VAR_3 : VAR_4;
  } else
   VAR_15 = VAR_11;

  FUNC_0(VAR_13->r_io[VAR_0].res,
      0x20 + (VAR_14 << 3), VAR_16[FUNC_1(VAR_15)]);
 }
 return (VAR_11);
}
