
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_slcr_softc {int dummy; } ;


 int FUNC_0 (struct zy7_slcr_softc*,int ) ;
 int FUNC_1 (struct zy7_slcr_softc*) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;
 int FUNC_3 (int) ;
 struct zy7_slcr_softc* VAR_0 ;

int
FUNC_4(int VAR_1)
{
 struct zy7_slcr_softc *VAR_2 = VAR_0;
 uint32_t VAR_3;

 if (!VAR_2)
  return (-1);

 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2, FUNC_3(VAR_1));
 FUNC_2(VAR_2);

 return !(VAR_3 & 1);
}
