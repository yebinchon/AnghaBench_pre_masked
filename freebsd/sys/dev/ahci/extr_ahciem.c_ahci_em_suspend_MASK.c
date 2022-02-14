
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_enclosure {int mtx; int sim; } ;
typedef int device_t ;


 struct ahci_enclosure* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct ahci_enclosure *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->mtx);
 FUNC_3(VAR_1->sim, 1);
 FUNC_2(&VAR_1->mtx);
 return (0);
}
