
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct zyd_softc {int sc_atim_wnd; int sc_pre_tbtt; int sc_bcn_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zyd_softc*,int ,void**) ;
 int FUNC_1 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct zyd_softc *VAR_3, int VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 FUNC_0(VAR_3, VAR_0, &VAR_6);
 VAR_3->sc_atim_wnd = VAR_6;
 FUNC_0(VAR_3, VAR_2, &VAR_6);
 VAR_3->sc_pre_tbtt = VAR_6;
 VAR_3->sc_bcn_int = VAR_4;

 if (VAR_3->sc_bcn_int <= 5)
  VAR_3->sc_bcn_int = 5;
 if (VAR_3->sc_pre_tbtt < 4 || VAR_3->sc_pre_tbtt >= VAR_3->sc_bcn_int)
  VAR_3->sc_pre_tbtt = VAR_3->sc_bcn_int - 1;
 if (VAR_3->sc_atim_wnd >= VAR_3->sc_pre_tbtt)
  VAR_3->sc_atim_wnd = VAR_3->sc_pre_tbtt - 1;

 FUNC_1(VAR_3, VAR_0, VAR_3->sc_atim_wnd);
 FUNC_1(VAR_3, VAR_2, VAR_3->sc_pre_tbtt);
 FUNC_1(VAR_3, VAR_1, VAR_3->sc_bcn_int);
fail:
 return (VAR_5);
}
