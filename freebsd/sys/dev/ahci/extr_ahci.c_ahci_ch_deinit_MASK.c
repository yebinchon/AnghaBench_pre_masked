
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_channel {int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ahci_channel*) ;
 int FUNC_3 (struct ahci_channel*) ;
 struct ahci_channel* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct ahci_channel *VAR_6 = FUNC_4(VAR_5);


 FUNC_0(VAR_6->r_mem, VAR_2, 0);

 FUNC_2(VAR_6);
 FUNC_3(VAR_6);
 FUNC_0(VAR_6->r_mem, VAR_0, 0);

 FUNC_0(VAR_6->r_mem, VAR_3, 0);

 FUNC_0(VAR_6->r_mem, VAR_0, VAR_1);
 FUNC_1(100);

 FUNC_0(VAR_6->r_mem, VAR_3, VAR_4);
 return (0);
}
