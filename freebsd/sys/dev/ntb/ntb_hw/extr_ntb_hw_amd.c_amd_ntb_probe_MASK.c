
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_table {int descr; scalar_t__ driver_data; } ;
struct amd_ntb_softc {struct amd_ntb_hw_info* hw_info; int spad_count; } ;
struct amd_ntb_hw_info {int spad_count; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_device_table* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 struct amd_ntb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct amd_ntb_softc *VAR_4 = FUNC_1(VAR_3);
 const struct pci_device_table *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_4->hw_info = (struct amd_ntb_hw_info *)VAR_5->driver_data;
 VAR_4->spad_count = VAR_4->hw_info->spad_count;
 FUNC_2(VAR_3, VAR_5->descr);

 return (VAR_0);
}
