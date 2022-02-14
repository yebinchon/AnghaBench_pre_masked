
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_softc {int bus_res; int services; } ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct bhndb_softc* FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_0)
{
 struct bhndb_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_5(VAR_0);


 if ((VAR_2 = FUNC_3(VAR_0)))
  return (VAR_2);


 if ((VAR_2 = FUNC_4(VAR_0)))
  return (VAR_2);


 if ((VAR_2 = FUNC_1(&VAR_1->services)))
  return (VAR_2);


 FUNC_2(VAR_1->bus_res);

 FUNC_0(VAR_1);

 return (0);
}
