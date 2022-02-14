
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 struct ahci_controller* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct ahci_controller *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 FUNC_1(VAR_3->r_mem, VAR_0,
      FUNC_0(VAR_3->r_mem, VAR_0) & (~VAR_1));
 return 0;
}
