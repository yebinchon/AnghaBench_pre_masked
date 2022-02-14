
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_softc {int sc_hwmtx; struct scc_chan* sc_chan; int * sc_rres; int sc_rrid; int sc_rtype; struct scc_class* sc_class; } ;
struct scc_mode {scalar_t__ m_attached; int m_dev; } ;
struct scc_class {int cl_channels; } ;
struct scc_chan {int * ch_ires; int ch_irid; int ch_icookie; struct scc_mode* ch_mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct scc_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct scc_chan*,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(device_t VAR_4)
{
 struct scc_chan *VAR_5;
 struct scc_class *VAR_6;
 struct scc_mode *VAR_7;
 struct scc_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_4);
 VAR_6 = VAR_8->sc_class;


 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_6->cl_channels; VAR_9++) {
  VAR_5 = &VAR_8->sc_chan[VAR_9];
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   VAR_7 = &VAR_5->ch_mode[VAR_11];
   if (!VAR_7->m_attached)
    continue;
   if (FUNC_2(VAR_7->m_dev) != 0)
    VAR_10 = VAR_0;
   else
    VAR_7->m_attached = 0;
  }
 }

 if (VAR_10)
  return (VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_6->cl_channels; VAR_9++) {
  VAR_5 = &VAR_8->sc_chan[VAR_9];
  if (VAR_5->ch_ires == ((void*)0))
   continue;
  FUNC_1(VAR_4, VAR_5->ch_ires, VAR_5->ch_icookie);
  FUNC_0(VAR_4, VAR_3, VAR_5->ch_irid,
      VAR_5->ch_ires);
 }
 FUNC_0(VAR_4, VAR_8->sc_rtype, VAR_8->sc_rrid, VAR_8->sc_rres);

 FUNC_4(VAR_8->sc_chan, VAR_1);

 FUNC_5(&VAR_8->sc_hwmtx);
 return (0);
}
