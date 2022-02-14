
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zyd_softc {int sc_rfrev; int sc_ledtype; int sc_al2230s; int sc_cckgain; int sc_fix_cr157; int sc_parev; int sc_bandedge6; int sc_newphy; int sc_txled; } ;


 int VAR_0 ;
 int FUNC_0 (struct zyd_softc*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct zyd_softc *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;

 FUNC_0(VAR_1, VAR_0, &VAR_3);
 VAR_1->sc_rfrev = VAR_3 & 0x0f;
 VAR_1->sc_ledtype = (VAR_3 >> 4) & 0x01;
 VAR_1->sc_al2230s = (VAR_3 >> 7) & 0x01;
 VAR_1->sc_cckgain = (VAR_3 >> 8) & 0x01;
 VAR_1->sc_fix_cr157 = (VAR_3 >> 13) & 0x01;
 VAR_1->sc_parev = (VAR_3 >> 16) & 0x0f;
 VAR_1->sc_bandedge6 = (VAR_3 >> 21) & 0x01;
 VAR_1->sc_newphy = (VAR_3 >> 31) & 0x01;
 VAR_1->sc_txled = ((VAR_3 & (1 << 24)) && (VAR_3 & (1 << 29))) ? 0 : 1;
fail:
 return (VAR_2);
}
