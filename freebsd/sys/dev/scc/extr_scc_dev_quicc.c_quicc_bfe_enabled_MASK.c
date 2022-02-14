
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scc_bas {int dummy; } ;
struct scc_softc {struct scc_bas sc_bas; } ;
struct scc_chan {int ch_nr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct scc_bas*,int ) ;
 int FUNC_2 (struct scc_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct scc_softc *VAR_0, struct scc_chan *VAR_1)
{
 struct scc_bas *VAR_2;
 int VAR_3;
 uint16_t VAR_4, VAR_5;

 VAR_2 = &VAR_0->sc_bas;
 VAR_3 = VAR_1->ch_nr - 1;
 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_3));
 FUNC_2(VAR_2, FUNC_0(VAR_3), ~VAR_4);
 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_3));
 FUNC_2(VAR_2, FUNC_0(VAR_3), VAR_4);
 return (((VAR_4 | VAR_5) == 0x8000) ? 1 : 0);
}
