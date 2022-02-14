
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_softc {int * dev; } ;
struct bhndb_devinfo {int addrspace; } ;
typedef int * device_t ;
typedef int bhndb_addrspace ;


 struct bhndb_devinfo* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;

bhndb_addrspace
FUNC_4(struct bhndb_softc *VAR_0, device_t VAR_1)
{
 struct bhndb_devinfo *VAR_2;
 device_t VAR_3;


 VAR_3 = VAR_1;
 while (VAR_3 != ((void*)0) && FUNC_2(VAR_3) != VAR_0->dev)
  VAR_3 = FUNC_2(VAR_3);

 if (VAR_3 == ((void*)0))
  FUNC_3("bhndb address space request for non-child device %s\n",
       FUNC_1(VAR_1));

 VAR_2 = FUNC_0(VAR_3);
 return (VAR_2->addrspace);
}
