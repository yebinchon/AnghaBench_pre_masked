
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_bas {int dummy; } ;
struct scc_softc {int sc_hwmtx; struct scc_bas sc_bas; } ;
struct scc_chan {int ch_nr; int ch_ipend; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scc_bas*) ;
 int FUNC_3 (struct scc_bas*,scalar_t__) ;
 int FUNC_4 (struct scc_bas*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct scc_softc *VAR_9, struct scc_chan *VAR_10)
{
 struct scc_bas *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_11 = &VAR_9->sc_bas;
 VAR_13 = (VAR_10->ch_nr - 1) * VAR_0;
 FUNC_0(&VAR_9->sc_hwmtx);
 if (VAR_10->ch_ipend & VAR_8) {
  if (FUNC_3(VAR_11, VAR_13 + VAR_5) & VAR_7) {
   VAR_14 = FUNC_3(VAR_11, VAR_13 + VAR_3) & 31;
   if (VAR_14 == 0)
    VAR_14 = 32;
   for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12 += 2) {
    (void)FUNC_3(VAR_11, VAR_13 + VAR_4);
    (void)FUNC_3(VAR_11, VAR_13 + VAR_4 + 1);
   }
  }
  while (FUNC_3(VAR_11, VAR_13 + VAR_5) & VAR_6)
   ;
  FUNC_4(VAR_11, VAR_13 + VAR_1, VAR_2);
  FUNC_2(VAR_11);
 }
 FUNC_1(&VAR_9->sc_hwmtx);
 return (0);
}
