
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int dummy; } ;
typedef int device_t ;


 struct mpr_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mpr_softc*) ;
 int FUNC_2 (struct mpr_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct mpr_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 if ((VAR_2 = FUNC_1(VAR_1)) != 0)
  return (VAR_2);

 FUNC_2(VAR_1);
 return (0);
}
