
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scc_bas {int dummy; } ;
struct scc_softc {int sc_hwmtx; struct scc_chan* sc_chan; struct scc_bas sc_bas; } ;
struct scc_chan {int ch_ipend; int ch_enabled; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scc_bas*,int ) ;
 int FUNC_4 (struct scc_bas*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct scc_softc *VAR_4)
{
 struct scc_bas *VAR_5;
 struct scc_chan *VAR_6;
 int VAR_7, VAR_8;
 uint16_t VAR_9;

 VAR_5 = &VAR_4->sc_bas;
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_6 = &VAR_4->sc_chan[VAR_7];
  if (!VAR_6->ch_enabled)
   continue;
  VAR_6->ch_ipend = 0;
  FUNC_1(&VAR_4->sc_hwmtx);
  VAR_9 = FUNC_3(VAR_5, FUNC_0(VAR_7));
  FUNC_4(VAR_5, FUNC_0(VAR_7), ~0);
  FUNC_2(&VAR_4->sc_hwmtx);
  if (VAR_9 & 0x0001)
   VAR_6->ch_ipend |= VAR_2;
  if (VAR_9 & 0x0002)
   VAR_6->ch_ipend |= VAR_3;
  if (VAR_9 & 0x0004)
   VAR_6->ch_ipend |= VAR_1;
  if (VAR_9 & 0x0020)
   VAR_6->ch_ipend |= VAR_0;

  VAR_8 |= VAR_6->ch_ipend;
 }
 return (VAR_8);
}
