
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tsec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct tsec_softc *VAR_3, uint32_t VAR_4)
{
 int VAR_5;





 FUNC_1(VAR_3, VAR_2);

 VAR_5 = VAR_1;
 while ((FUNC_1(VAR_3, VAR_2) & VAR_4) && --VAR_5)
  FUNC_0(VAR_0);

 return (VAR_5 == 0);
}
