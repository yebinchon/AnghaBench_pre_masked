
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ure_softc {int sc_phyno; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct ure_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ure_softc*) ;
 struct ure_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ure_softc*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct ure_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5->sc_phyno != VAR_2)
  return (0);

 VAR_6 = FUNC_3(&VAR_5->sc_mtx);
 if (!VAR_6)
  FUNC_0(VAR_5);

 FUNC_4(VAR_5, VAR_0 + VAR_3 * 2, VAR_4);

 if (!VAR_6)
  FUNC_1(VAR_5);
 return (0);
}
