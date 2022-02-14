
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {TYPE_1__* sc_rxedma; int sc_rxbuf; } ;
struct ath_buf {int * bf_m; } ;
struct TYPE_2__ {struct ath_buf* m_holdbf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct ath_buf*,int ) ;
 int FUNC_1 (struct ath_softc*,struct ath_buf*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct ath_softc *VAR_3)
{
 struct ath_buf *VAR_4;
 VAR_4 = VAR_3->sc_rxedma[VAR_0].m_holdbf;
 if (VAR_4 != ((void*)0)) {
  if (VAR_4->bf_m != ((void*)0))
   FUNC_2(VAR_4->bf_m);
  VAR_4->bf_m = ((void*)0);
  FUNC_0(&VAR_3->sc_rxbuf, VAR_4, VAR_2);
  (void) FUNC_1(VAR_3, VAR_4);
 }
 VAR_3->sc_rxedma[VAR_0].m_holdbf = ((void*)0);

 VAR_4 = VAR_3->sc_rxedma[VAR_1].m_holdbf;
 if (VAR_4 != ((void*)0)) {
  if (VAR_4->bf_m != ((void*)0))
   FUNC_2(VAR_4->bf_m);
  VAR_4->bf_m = ((void*)0);
  FUNC_0(&VAR_3->sc_rxbuf, VAR_4, VAR_2);
  (void) FUNC_1(VAR_3, VAR_4);
 }
 VAR_3->sc_rxedma[VAR_1].m_holdbf = ((void*)0);

 return (0);
}
