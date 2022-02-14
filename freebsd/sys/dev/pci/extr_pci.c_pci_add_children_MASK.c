
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int dev; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 struct pci_devinfo* FUNC_6 (int ,int ,int,int,int,int) ;

void
FUNC_7(device_t VAR_5, int VAR_6, int VAR_7)
{

 device_t VAR_8 = FUNC_5(VAR_5);
 struct pci_devinfo *VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 uint8_t VAR_14;
 int VAR_15;







 VAR_9 = FUNC_6(VAR_8, VAR_5, VAR_6, VAR_7, 0, 0);
 if (VAR_9 != ((void*)0) && VAR_4)
  FUNC_3(VAR_8, VAR_9->cfg.dev);





 VAR_15 = 1;

 VAR_10 = FUNC_2(VAR_8);
 for (VAR_11 = 0; VAR_11 <= VAR_10; VAR_11++, VAR_15 = 0) {
  VAR_13 = 0;
  VAR_12 = 0;
  FUNC_0(1);
  VAR_14 = FUNC_0(VAR_8, VAR_7, VAR_11, VAR_12, VAR_2, 1);
  if ((VAR_14 & VAR_0) > VAR_3)
   continue;
  if (VAR_14 & VAR_1)
   VAR_13 = FUNC_1(VAR_8);
  for (VAR_12 = VAR_15; VAR_12 <= VAR_13; VAR_12++)
   FUNC_6(VAR_8, VAR_5, VAR_6, VAR_7, VAR_11, VAR_12);
 }

}
