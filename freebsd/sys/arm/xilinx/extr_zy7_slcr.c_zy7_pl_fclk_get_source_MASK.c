
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_slcr_softc {int dummy; } ;


 int FUNC_0 (struct zy7_slcr_softc*,int ) ;
 int FUNC_1 (struct zy7_slcr_softc*) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct zy7_slcr_softc* VAR_3 ;

int
FUNC_4(int VAR_4)
{
 struct zy7_slcr_softc *VAR_5 = VAR_3;
 uint32_t VAR_6;
 int VAR_7;

 if (!VAR_5)
  return (-1);

 FUNC_1(VAR_5);


 VAR_6 = FUNC_0(VAR_5, FUNC_3(VAR_4));
 VAR_7 = (VAR_6 & VAR_1) >>
     VAR_2;


 if ((VAR_7 & 2) == 0)
  VAR_7 = VAR_0;

 FUNC_2(VAR_5);

 return (VAR_7);
}
