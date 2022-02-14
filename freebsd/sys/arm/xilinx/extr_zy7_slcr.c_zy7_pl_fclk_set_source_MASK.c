
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_slcr_softc {int dummy; } ;


 int FUNC_0 (struct zy7_slcr_softc*,int ) ;
 int FUNC_1 (struct zy7_slcr_softc*,int ,int) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;
 int FUNC_3 (struct zy7_slcr_softc*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct zy7_slcr_softc*) ;
 struct zy7_slcr_softc* VAR_2 ;
 int FUNC_6 (struct zy7_slcr_softc*) ;

int
FUNC_7(int VAR_3, int VAR_4)
{
 struct zy7_slcr_softc *VAR_5 = VAR_2;
 uint32_t VAR_6;

 if (!VAR_5)
  return (-1);

 FUNC_2(VAR_5);


 FUNC_6(VAR_5);


 VAR_6 = FUNC_0(VAR_5, FUNC_4(VAR_3));
 VAR_6 &= ~(VAR_0);
 VAR_6 |= (VAR_4 << VAR_1);
 FUNC_1(VAR_5, FUNC_4(VAR_3), VAR_6);


 FUNC_5(VAR_5);

 FUNC_3(VAR_5);

 return (0);
}
