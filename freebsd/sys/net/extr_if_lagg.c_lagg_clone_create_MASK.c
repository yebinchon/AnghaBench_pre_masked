
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct lagg_softc {int sc_flags; void* vlan_detach; void* vlan_attach; int sc_media; int sc_ports; int flowid_shift; int sc_opts; struct ifnet* sc_ifp; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_ratelimit_query; int if_snd_tag_free; int if_snd_tag_query; int if_snd_tag_modify; int if_snd_tag_alloc; int if_get_counter; int if_ioctl; int if_init; int if_qflush; int if_transmit; struct lagg_softc* if_softc; } ;
struct if_clone {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,struct lagg_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct lagg_softc*) ;
 int FUNC_5 (struct lagg_softc*) ;
 int FUNC_6 (struct lagg_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int *,struct lagg_softc*,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (struct ifnet*,int const*) ;
 int FUNC_9 (struct lagg_softc*,int ) ;
 struct ifnet* FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*,int ,int) ;
 int FUNC_12 (int *,int,int ,int *) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_15 (struct lagg_softc*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct lagg_softc* FUNC_16 (int,int ,int) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;

__attribute__((used)) static int
FUNC_17(struct if_clone *VAR_40, int VAR_41, caddr_t VAR_42)
{
 struct lagg_softc *VAR_43;
 struct ifnet *VAR_44;
 static const u_char VAR_45[6];

 VAR_43 = FUNC_16(sizeof(*VAR_43), VAR_15, VAR_16|VAR_17);
 VAR_44 = VAR_43->sc_ifp = FUNC_10(VAR_8);
 if (VAR_44 == ((void*)0)) {
  FUNC_9(VAR_43, VAR_15);
  return (VAR_0);
 }
 FUNC_4(VAR_43);

 FUNC_5(VAR_43);
 if (VAR_19)
  VAR_43->sc_opts |= VAR_9;
 if (VAR_20)
  VAR_43->sc_opts |= VAR_10;
 VAR_43->flowid_shift = VAR_18;


 VAR_43->sc_flags = VAR_12|VAR_13|VAR_14;

 FUNC_15(VAR_43, VAR_11);

 FUNC_0(&VAR_43->sc_ports);


 FUNC_13(&VAR_43->sc_media, 0, VAR_25,
     VAR_26);
 FUNC_12(&VAR_43->sc_media, VAR_7 | VAR_6, 0, ((void*)0));
 FUNC_14(&VAR_43->sc_media, VAR_7 | VAR_6);

 FUNC_11(VAR_44, VAR_36, VAR_41);
 VAR_44->if_softc = VAR_43;
 VAR_44->if_transmit = VAR_34;
 VAR_44->if_qflush = VAR_27;
 VAR_44->if_init = VAR_23;
 VAR_44->if_ioctl = VAR_24;
 VAR_44->if_get_counter = VAR_22;
 VAR_44->if_flags = VAR_5 | VAR_3 | VAR_4;







 VAR_44->if_capenable = VAR_44->if_capabilities = VAR_2;





 FUNC_8(VAR_44, VAR_45);

 VAR_43->vlan_attach = FUNC_1(VAR_38,
  VAR_29, VAR_43, VAR_1);
 VAR_43->vlan_detach = FUNC_1(VAR_39,
  VAR_35, VAR_43, VAR_1);


 FUNC_2();
 FUNC_7(&VAR_21, VAR_43, VAR_37);
 FUNC_3();
 FUNC_6(VAR_43);

 return (0);
}
