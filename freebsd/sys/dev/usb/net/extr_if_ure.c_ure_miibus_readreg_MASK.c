
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ure_softc {int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ure_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ure_softc*) ;
 struct ure_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ure_softc*,scalar_t__) ;
 int FUNC_5 (struct ure_softc*,int,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct ure_softc *VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3);
 VAR_8 = FUNC_3(&VAR_6->sc_mtx);
 if (!VAR_8)
  FUNC_0(VAR_6);


 if (VAR_5 == VAR_0) {
  if (!VAR_8)
   FUNC_1(VAR_6);
  return (FUNC_5(VAR_6, VAR_0, VAR_1));
 }

 VAR_7 = FUNC_4(VAR_6, VAR_2 + VAR_5 * 2);

 if (!VAR_8)
  FUNC_1(VAR_6);
 return (VAR_7);
}
