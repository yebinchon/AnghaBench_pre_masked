
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {scalar_t__ sc_bar0_lastreg; int sc_sh0; int sc_st0; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static __inline u_int32_t
FUNC_1(struct hifn_softc *VAR_0, bus_size_t VAR_1)
{
    u_int32_t VAR_2 = FUNC_0(VAR_0->sc_st0, VAR_0->sc_sh0, VAR_1);
    VAR_0->sc_bar0_lastreg = (bus_size_t) -1;
    return (VAR_2);
}
