
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_enclosure {int** status; int r_memc; int r_memt; } ;
typedef int int16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ahci_enclosure* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_6, int VAR_7)
{
 struct ahci_enclosure *VAR_8;
 int VAR_9;
 int16_t VAR_10;

 VAR_8 = FUNC_3(VAR_6);

 VAR_10 = 0;
 if (VAR_8->status[VAR_7][2] & VAR_2)
  VAR_10 |= (1 << 0);
 if (VAR_8->status[VAR_7][1] & VAR_5)
  VAR_10 |= (1 << 6) | (1 << 3);
 else if (VAR_8->status[VAR_7][2] & VAR_4)
  VAR_10 |= (1 << 3);
 else if (VAR_8->status[VAR_7][3] & VAR_3)
  VAR_10 |= (1 << 6);

 VAR_9 = 10000;
 while (FUNC_0(VAR_8->r_memc, 0) & (VAR_1 | VAR_0) &&
     --VAR_9 > 0)
  FUNC_2(100);
 if (VAR_9 == 0)
  FUNC_4(VAR_6, "Transmit timeout\n");
 FUNC_1(VAR_8->r_memt, 0, (1 << 8) | (0 << 16) | (0 << 24));
 FUNC_1(VAR_8->r_memt, 4, VAR_7 | (0 << 8) | (VAR_10 << 16));
 FUNC_1(VAR_8->r_memc, 0, VAR_1);
}
