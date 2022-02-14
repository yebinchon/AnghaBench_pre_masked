
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int regshft; int bst; int bsh; } ;
struct scc_softc {int sc_rrid; int sc_fastintr; int sc_polled; int * sc_rres; int sc_rtype; struct scc_chan* sc_chan; TYPE_1__ sc_bas; int sc_hwmtx; struct scc_class* sc_class; } ;
struct scc_mode {unsigned int m_mode; int m_probed; int m_sysdev; int m_attached; int m_dev; struct scc_chan* m_chan; } ;
struct scc_class {int size; scalar_t__ cl_range; int cl_channels; int cl_modes; } ;
struct scc_chan {int ch_irid; int ch_nr; int ch_enabled; int ch_sysdev; int * ch_ires; struct scc_mode* ch_mode; int ch_icookie; int ch_rlist; int ch_rres; } ;
struct resource_list_entry {int * res; } ;
typedef int rman_res_t ;
typedef int driver_intr_t ;
typedef int device_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct scc_softc*,int) ;
 int FUNC_1 (struct scc_softc*,struct scc_chan*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct scc_softc*,struct scc_softc*,int) ;
 scalar_t__ VAR_11 ;
 int * FUNC_5 (int ,int ,int*,int) ;
 int * FUNC_6 (int ,int ,int*,int,int) ;
 int FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (int ,int *,int,int *,int *,struct scc_softc*,int *) ;
 int FUNC_9 (int ,int ,int,int,int *) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ) ;
 struct scc_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,void*) ;
 int FUNC_17 (int ,struct scc_softc*) ;
 void* FUNC_18 (int,int ,int) ;
 int FUNC_19 (int *,char*,int *,int ) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int *,int ,int ,int,int,int) ;
 struct resource_list_entry* FUNC_22 (int *,int ,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,int ) ;
 int * VAR_12 ;

int
FUNC_30(device_t VAR_13, u_int VAR_14)
{
 struct resource_list_entry *VAR_15;
 struct scc_chan *VAR_16;
 struct scc_class *VAR_17;
 struct scc_mode *VAR_18;
 struct scc_softc *VAR_19, *VAR_20;
 const char *VAR_21;
 bus_space_handle_t VAR_22;
 rman_res_t VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;







 VAR_20 = FUNC_12(VAR_13);
 VAR_17 = VAR_20->sc_class;
 if (VAR_17->size > sizeof(*VAR_19)) {
  VAR_19 = FUNC_18(VAR_17->size, VAR_4, VAR_5|VAR_6);
  FUNC_4(VAR_20, VAR_19, sizeof(*VAR_19));
  FUNC_17(VAR_13, VAR_19);
 } else
  VAR_19 = VAR_20;

 VAR_24 = FUNC_3(VAR_17->cl_range) << VAR_19->sc_bas.regshft;

 FUNC_19(&VAR_19->sc_hwmtx, "scc_hwmtx", ((void*)0), VAR_3);





 VAR_19->sc_rres = FUNC_6(VAR_13, VAR_19->sc_rtype,
     &VAR_19->sc_rrid, VAR_17->cl_channels * VAR_24, VAR_7);
 if (VAR_19->sc_rres == ((void*)0))
  return (VAR_0);
 VAR_19->sc_bas.bsh = FUNC_24(VAR_19->sc_rres);
 VAR_19->sc_bas.bst = FUNC_25(VAR_19->sc_rres);





 VAR_19->sc_chan = FUNC_18(sizeof(struct scc_chan) * VAR_17->cl_channels,
     VAR_4, VAR_5 | VAR_6);
 for (VAR_27 = 0; VAR_27 < VAR_17->cl_channels; VAR_27++) {
  VAR_16 = &VAR_19->sc_chan[VAR_27];







  VAR_16->ch_irid = VAR_27 * VAR_14;
  VAR_16->ch_ires = FUNC_5(VAR_13, VAR_10,
      &VAR_16->ch_irid, VAR_7 | VAR_8);
  if (VAR_14 == 0)
   break;
 }





 VAR_30 = 0;
 VAR_23 = FUNC_27(VAR_19->sc_rres);
 VAR_26 = (VAR_24 != 0) ? VAR_24 : FUNC_26(VAR_19->sc_rres);
 VAR_25 = VAR_23 + ((VAR_17->cl_range < 0) ? VAR_24 * (VAR_17->cl_channels - 1) : 0);
 for (VAR_27 = 0; VAR_27 < VAR_17->cl_channels; VAR_27++) {
  VAR_16 = &VAR_19->sc_chan[VAR_27];
  FUNC_23(&VAR_16->ch_rlist);
  VAR_16->ch_nr = VAR_27 + 1;

  if (!FUNC_1(VAR_19, VAR_16))
   goto next;

  VAR_16->ch_enabled = 1;
  FUNC_21(&VAR_16->ch_rlist, VAR_19->sc_rtype, 0, VAR_25,
      VAR_25 + VAR_26 - 1, VAR_26);
  VAR_15 = FUNC_22(&VAR_16->ch_rlist, VAR_19->sc_rtype, 0);
  VAR_15->res = &VAR_16->ch_rres;
  FUNC_9(FUNC_25(VAR_19->sc_rres),
      FUNC_24(VAR_19->sc_rres), VAR_25 - VAR_23, VAR_26, &VAR_22);
  FUNC_28(VAR_15->res, VAR_22);
  FUNC_29(VAR_15->res, FUNC_25(VAR_19->sc_rres));

  FUNC_21(&VAR_16->ch_rlist, VAR_10, 0, VAR_27, VAR_27, 1);
  VAR_15 = FUNC_22(&VAR_16->ch_rlist, VAR_10, 0);
  VAR_15->res = (VAR_16->ch_ires != ((void*)0)) ? VAR_16->ch_ires :
       VAR_19->sc_chan[0].ch_ires;

  for (VAR_29 = 0; VAR_29 < VAR_9; VAR_29++) {
   VAR_18 = &VAR_16->ch_mode[VAR_29];
   VAR_18->m_chan = VAR_16;
   VAR_18->m_mode = 1U << VAR_29;
   if ((VAR_17->cl_modes & VAR_18->m_mode) == 0 || VAR_16->ch_sysdev)
    continue;
   VAR_18->m_dev = FUNC_10(VAR_13, ((void*)0), -1);
   FUNC_16(VAR_18->m_dev, (void *)VAR_18);
   VAR_28 = FUNC_15(VAR_13, VAR_18->m_dev);
   if (!VAR_28) {
    VAR_18->m_probed = 1;
    VAR_18->m_sysdev = FUNC_2(VAR_18->m_dev) ? 1 : 0;
    VAR_16->ch_sysdev |= VAR_18->m_sysdev;
   }
  }

  next:
  VAR_25 += (VAR_17->cl_range < 0) ? -VAR_24 : VAR_24;
  VAR_30 |= VAR_16->ch_sysdev;
 }





 if (VAR_11) {
  FUNC_14(VAR_13, "%sresetting hardware\n",
      (VAR_30) ? "not " : "");
 }
 VAR_28 = FUNC_0(VAR_19, !VAR_30);
 if (VAR_28)
  goto fail;
 for (VAR_27 = 0; VAR_27 < VAR_17->cl_channels; VAR_27++) {
  VAR_16 = &VAR_19->sc_chan[VAR_27];
  if (VAR_16->ch_ires == ((void*)0))
   continue;
  VAR_28 = FUNC_8(VAR_13, VAR_16->ch_ires,
      VAR_2, VAR_12, ((void*)0), VAR_19,
      &VAR_16->ch_icookie);
  if (VAR_28) {
   VAR_28 = FUNC_8(VAR_13, VAR_16->ch_ires,
       VAR_2 | VAR_1, ((void*)0),
       (driver_intr_t *)VAR_12, VAR_19, &VAR_16->ch_icookie);
  } else
   VAR_19->sc_fastintr = 1;

  if (VAR_28) {
   FUNC_14(VAR_13, "could not activate interrupt\n");
   FUNC_7(VAR_13, VAR_10, VAR_16->ch_irid,
       VAR_16->ch_ires);
   VAR_16->ch_ires = ((void*)0);
  }
 }
 VAR_19->sc_polled = 1;
 for (VAR_27 = 0; VAR_27 < VAR_17->cl_channels; VAR_27++) {
  if (VAR_19->sc_chan[0].ch_ires != ((void*)0))
   VAR_19->sc_polled = 0;
 }




 for (VAR_27 = 0; VAR_27 < VAR_17->cl_channels; VAR_27++) {
  VAR_16 = &VAR_19->sc_chan[VAR_27];
  for (VAR_29 = 0; VAR_29 < VAR_9; VAR_29++) {
   VAR_18 = &VAR_16->ch_mode[VAR_29];
   if (!VAR_18->m_probed)
    continue;
   VAR_28 = FUNC_11(VAR_18->m_dev);
   if (VAR_28)
    continue;
   VAR_18->m_attached = 1;
  }
 }

 if (VAR_11 && (VAR_19->sc_fastintr || VAR_19->sc_polled)) {
  VAR_21 = "";
  FUNC_13(VAR_13);
  if (VAR_19->sc_fastintr) {
   FUNC_20("%sfast interrupt", VAR_21);
   VAR_21 = ", ";
  }
  if (VAR_19->sc_polled) {
   FUNC_20("%spolled mode", VAR_21);
   VAR_21 = ", ";
  }
  FUNC_20("\n");
 }

 return (0);

 fail:
 for (VAR_27 = 0; VAR_27 < VAR_17->cl_channels; VAR_27++) {
  VAR_16 = &VAR_19->sc_chan[VAR_27];
  if (VAR_16->ch_ires == ((void*)0))
   continue;
  FUNC_7(VAR_13, VAR_10, VAR_16->ch_irid,
      VAR_16->ch_ires);
 }
 FUNC_7(VAR_13, VAR_19->sc_rtype, VAR_19->sc_rrid, VAR_19->sc_rres);
 return (VAR_28);
}
