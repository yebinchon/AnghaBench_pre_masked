
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int ccc; int cccv; int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_11 ;
 struct ahci_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;

int
FUNC_4(device_t VAR_12)
{
 struct ahci_controller *VAR_13 = FUNC_2(VAR_12);

 FUNC_1(VAR_13->r_mem, VAR_9, FUNC_0(VAR_13->r_mem, VAR_9));

 if (VAR_13->ccc) {
  FUNC_1(VAR_13->r_mem, VAR_6, FUNC_0(VAR_13->r_mem, VAR_10));
  FUNC_1(VAR_13->r_mem, VAR_0,
      (VAR_13->ccc << VAR_5) |
      (4 << VAR_1) |
      VAR_2);
  VAR_13->cccv = (FUNC_0(VAR_13->r_mem, VAR_0) &
      VAR_3) >> VAR_4;
  if (VAR_11) {
   FUNC_3(VAR_12,
       "CCC with %dms/4cmd enabled on vector %d\n",
       VAR_13->ccc, VAR_13->cccv);
  }
 }

 FUNC_1(VAR_13->r_mem, VAR_7,
     FUNC_0(VAR_13->r_mem, VAR_7) | VAR_8);
 return (0);
}
