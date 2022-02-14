
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_probe {int hostb_core; } ;
struct bhndb_pci_core {int dummy; } ;
typedef int * device_t ;
typedef int * devclass_t ;
typedef int bhnd_devclass_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bhndb_pci_core* FUNC_3 (int *) ;
 int FUNC_4 (struct bhndb_pci_probe**,int *,int ) ;
 int FUNC_5 (struct bhndb_pci_probe*) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 struct bhndb_pci_probe *VAR_3;
 struct bhndb_pci_core *VAR_4;
 bhnd_devclass_t VAR_5;
 device_t VAR_6, VAR_7;
 devclass_t VAR_8, VAR_9;
 int VAR_10;

 VAR_3 = ((void*)0);


 VAR_8 = FUNC_6("pci");
 VAR_6 = FUNC_9(VAR_2);
 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_1);


 for (VAR_9 = FUNC_8(VAR_7);
     VAR_9 != ((void*)0);
     VAR_9 = FUNC_7(VAR_9))
 {
  if (VAR_9 == VAR_8)
   break;
 }

 if (VAR_9 != VAR_8)
  return (VAR_1);


 if ((VAR_10 = FUNC_1(VAR_2)))
  return (VAR_10);


 VAR_5 = FUNC_2(VAR_2);
 if ((VAR_10 = FUNC_4(&VAR_3, VAR_2, VAR_5)))
  goto cleanup;


 if ((VAR_4 = FUNC_3(&VAR_3->hostb_core)) == ((void*)0)) {
  VAR_10 = VAR_1;
  goto cleanup;
 }

 FUNC_10(VAR_2, "PCI-BHND bridge");


 VAR_10 = VAR_0;

cleanup:
 if (VAR_3 != ((void*)0))
  FUNC_5(VAR_3);

 FUNC_0(VAR_2);

 return (VAR_10);
}
