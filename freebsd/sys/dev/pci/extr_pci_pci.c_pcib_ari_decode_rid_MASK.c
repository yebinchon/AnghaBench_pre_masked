
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pcib_softc {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct pcib_softc* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1, uint16_t VAR_2, int *VAR_3, int *VAR_4,
    int *VAR_5)
{
 struct pcib_softc *VAR_6;

 VAR_6 = FUNC_5(VAR_1);

 *VAR_3 = FUNC_2(VAR_2);
 if (VAR_6->flags & VAR_0) {
  *VAR_4 = FUNC_1(VAR_2);
  *VAR_5 = FUNC_0(VAR_2);
 } else {
  *VAR_4 = FUNC_4(VAR_2);
  *VAR_5 = FUNC_3(VAR_2);
 }
}
