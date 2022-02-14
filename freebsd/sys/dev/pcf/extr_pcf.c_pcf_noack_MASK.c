
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pcf_softc*) ;
 int FUNC_2 (struct pcf_softc*) ;

__attribute__((used)) static int
FUNC_3(struct pcf_softc *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2/10;

 FUNC_1(VAR_1);
 do {
  VAR_3 = FUNC_2(VAR_1) & VAR_0;
  if (!VAR_3)
   break;
  FUNC_0(10);
 } while (VAR_4--);

 return (VAR_3);
}
