
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_enclosure {int channels; int r_memc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 struct ahci_enclosure* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct ahci_enclosure *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_1(VAR_2->r_memc, 0, VAR_0);
 VAR_4 = 1000;
 while ((FUNC_0(VAR_2->r_memc, 0) & VAR_0) &&
     --VAR_4 > 0)
  FUNC_2(1000);
 if (VAR_4 == 0) {
  FUNC_5(VAR_1, "EM timeout\n");
  return (1);
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++)
  FUNC_3(VAR_1, VAR_3);
 return (0);
}
