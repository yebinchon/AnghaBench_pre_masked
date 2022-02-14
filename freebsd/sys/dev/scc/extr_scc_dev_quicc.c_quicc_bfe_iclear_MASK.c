
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scc_bas {int dummy; } ;
struct scc_softc {int sc_hwmtx; struct scc_bas sc_bas; } ;
struct scc_chan {int ch_ipend; scalar_t__ ch_nr; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scc_bas*,int) ;
 int FUNC_4 (struct scc_bas*,int) ;
 int FUNC_5 (struct scc_bas*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct scc_softc *VAR_1, struct scc_chan *VAR_2)
{
 struct scc_bas *VAR_3;
 uint16_t VAR_4, VAR_5;

 VAR_3 = &VAR_1->sc_bas;
 FUNC_1(&VAR_1->sc_hwmtx);
 if (VAR_2->ch_ipend & VAR_0) {
  VAR_4 = FUNC_3(VAR_3, FUNC_0(VAR_2->ch_nr - 1));
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  (void)FUNC_4(VAR_3, VAR_4 + 4);
  FUNC_5(VAR_3, VAR_4, VAR_5 | 0x9000);
 }
 FUNC_2(&VAR_1->sc_hwmtx);
 return (0);
}
