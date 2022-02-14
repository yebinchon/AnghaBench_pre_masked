
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ata_channel {scalar_t__ unit; scalar_t__ devices; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 struct ata_channel* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_7)
{
 struct ata_channel *VAR_8 = FUNC_6(VAR_7);
 int VAR_9, VAR_10;
 uint8_t VAR_11;

 if (VAR_8->unit == 0) {
  VAR_9 = FUNC_5(VAR_7, 0, 0);
  VAR_10 = 0;
  do {
   FUNC_2(VAR_8, VAR_0, VAR_1 | VAR_2 |
       FUNC_0(VAR_3));
   FUNC_3(1000);
   VAR_11 = FUNC_1(VAR_8, VAR_5);
   VAR_10++;
  } while (VAR_11 & VAR_6 && VAR_10 < 100);

  VAR_9 += FUNC_5(VAR_7, 1, 0);
  VAR_10 = 0;
  do {
   FUNC_2(VAR_8, VAR_0, VAR_1 | VAR_2 |
       FUNC_0(VAR_4));
   FUNC_3(1000);
   VAR_11 = FUNC_1(VAR_8, VAR_5);
   VAR_10++;
  } while (VAR_11 & VAR_6 && VAR_10 < 100);
 } else
  VAR_9 = 1;
 if (VAR_9)
  FUNC_4(VAR_7);
 else
  VAR_8->devices = 0;
}
