
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_pcib_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mv_pcib_softc*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct mv_pcib_softc *VAR_2, int VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = (VAR_6 & VAR_1) ? 0 : 6;
 VAR_8 = 0;


 while (VAR_8 < VAR_7) {
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
  VAR_8 += VAR_9;
  if (VAR_9 < 0) {
   FUNC_0(VAR_2->sc_dev,
       "PCI IO/Memory space exhausted\n");
   return (VAR_0);
  }
 }

 return (0);
}
