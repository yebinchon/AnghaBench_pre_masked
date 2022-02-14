
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_table {int descr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_device_table* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
 const struct pci_device_table *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 == ((void*)0))
  return (VAR_1);
 FUNC_1(VAR_3, VAR_4->descr);

 return (VAR_0);
}
