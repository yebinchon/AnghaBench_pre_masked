
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t rclk; uintptr_t regshft; } ;
struct scc_softc {int sc_hwmtx; TYPE_1__ sc_bas; struct scc_class* sc_class; } ;
struct scc_mode {uintptr_t m_mode; struct scc_chan* m_chan; } ;
struct scc_class {uintptr_t cl_class; } ;
struct scc_chan {uintptr_t ch_nr; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;






 struct scc_mode* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct scc_softc* FUNC_2 (scalar_t__) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct scc_chan *VAR_5;
 struct scc_class *VAR_6;
 struct scc_mode *VAR_7;
 struct scc_softc *VAR_8;

 if (FUNC_1(VAR_2) != VAR_1)
  return (VAR_0);

 VAR_8 = FUNC_2(VAR_1);
 VAR_6 = VAR_8->sc_class;
 VAR_7 = FUNC_0(VAR_2);
 VAR_5 = VAR_7->m_chan;

 switch (VAR_3) {
 case 133:
  *VAR_4 = VAR_5->ch_nr;
  break;
 case 132:
  *VAR_4 = VAR_6->cl_class;
  break;
 case 131:
  *VAR_4 = VAR_8->sc_bas.rclk;
  break;
 case 129:
  *VAR_4 = VAR_7->m_mode;
  break;
 case 128:
  *VAR_4 = VAR_8->sc_bas.regshft;
  break;
 case 130:
  *VAR_4 = (uintptr_t)&VAR_8->sc_hwmtx;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
