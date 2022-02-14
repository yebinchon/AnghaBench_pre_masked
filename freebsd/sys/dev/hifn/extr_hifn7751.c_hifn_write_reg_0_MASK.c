
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {int sc_flags; int sc_bar0_lastreg; int sc_sh0; int sc_st0; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct hifn_softc *VAR_2, bus_size_t VAR_3, u_int32_t VAR_4)
{
 if (VAR_2->sc_flags & VAR_1) {
  if (VAR_2->sc_bar0_lastreg == VAR_3 - 4)
   FUNC_0(VAR_2->sc_st0, VAR_2->sc_sh0, VAR_0);
  VAR_2->sc_bar0_lastreg = VAR_3;
 }
 FUNC_1(VAR_2->sc_st0, VAR_2->sc_sh0, VAR_3, VAR_4);
}
