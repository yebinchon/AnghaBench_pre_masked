
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int dummy; } ;
typedef int device_t ;


 struct mps_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mps_softc*) ;
 int FUNC_2 (struct mps_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct mps_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 if ((VAR_2 = FUNC_1(VAR_1)) != 0)
  return (VAR_2);

 FUNC_2(VAR_1);
 return (0);
}
