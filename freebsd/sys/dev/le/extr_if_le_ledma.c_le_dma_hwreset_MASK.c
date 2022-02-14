
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lsi64854_softc {int sc_res; } ;
struct le_dma_softc {int sc_laddr; struct lsi64854_softc* sc_dma; } ;
struct lance_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct lsi64854_softc*) ;
 int FUNC_2 (struct lsi64854_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct lsi64854_softc*) ;
 int VAR_2 ;
 int FUNC_4 (struct lsi64854_softc*,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct lance_softc *VAR_3)
{
 struct le_dma_softc *VAR_4 = (struct le_dma_softc *)VAR_3;
 struct lsi64854_softc *VAR_5 = VAR_4->sc_dma;
 uint32_t VAR_6, VAR_7;




 VAR_7 = FUNC_3(VAR_5);
 VAR_6 = VAR_7 & VAR_1;
 FUNC_2(VAR_5);


 FUNC_5(VAR_5->sc_res, VAR_2,
     VAR_4->sc_laddr & 0xff000000);

 FUNC_1(VAR_5);





 VAR_7 = FUNC_3(VAR_5);
 VAR_7 |= (VAR_0 | VAR_6);
 FUNC_4(VAR_5, VAR_7);
 FUNC_0(20000);
}
