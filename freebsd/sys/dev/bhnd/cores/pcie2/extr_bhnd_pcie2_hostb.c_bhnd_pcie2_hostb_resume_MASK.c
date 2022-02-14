
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pcie2hb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bhnd_pcie2hb_softc*) ;
 struct bhnd_pcie2hb_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct bhnd_pcie2hb_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0);

 if ((VAR_2 = FUNC_1(VAR_0)))
  return (VAR_2);


 if ((VAR_2 = FUNC_2(VAR_1))) {
  FUNC_0(VAR_0);
  return (VAR_2);
 }

 return (0);
}
