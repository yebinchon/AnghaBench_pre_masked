
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_softc {int aac_dev; } ;
typedef int caddr_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct aac_softc *VAR_1, caddr_t VAR_2)
{
 struct aac_pci_info {
  u_int32_t bus;
  u_int32_t slot;
 } VAR_3;
 int VAR_4;

 FUNC_1(VAR_1, VAR_0, "");

 VAR_3.bus = FUNC_2(VAR_1->aac_dev);
 VAR_3.slot = FUNC_3(VAR_1->aac_dev);

 VAR_4 = FUNC_0((caddr_t)&VAR_3, VAR_2,
   sizeof(struct aac_pci_info));

 return (VAR_4);
}
