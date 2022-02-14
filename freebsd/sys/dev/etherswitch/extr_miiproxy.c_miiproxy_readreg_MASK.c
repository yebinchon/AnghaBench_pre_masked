
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miiproxy_softc {int * mdio; } ;
typedef int device_t ;


 int FUNC_0 (int *,int,int) ;
 struct miiproxy_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct miiproxy_softc *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->mdio != ((void*)0))
  return (FUNC_0(VAR_3->mdio, VAR_1, VAR_2));
 return (-1);
}
