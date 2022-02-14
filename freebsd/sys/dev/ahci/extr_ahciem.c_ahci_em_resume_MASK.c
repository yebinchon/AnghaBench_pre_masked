
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_enclosure {int mtx; int sim; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ahci_enclosure* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct ahci_enclosure *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->mtx);
 FUNC_0(VAR_1);
 FUNC_4(VAR_2->sim, VAR_0);
 FUNC_3(&VAR_2->mtx);
 return (0);
}
