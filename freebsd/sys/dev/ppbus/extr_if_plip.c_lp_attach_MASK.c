
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct lp_data {int * res_irq; int sc_intr_cookie; struct ifnet* sc_ifp; int sc_dev; } ;
struct TYPE_2__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; TYPE_1__ if_snd; scalar_t__ if_addrlen; scalar_t__ if_hdrlen; int if_output; int if_ioctl; int if_mtu; struct lp_data* if_softc; } ;
typedef int device_t ;


 struct lp_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (struct ifnet*) ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct lp_data*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 struct ifnet* FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_13(device_t VAR_16)
{
 struct lp_data *VAR_17 = FUNC_0(VAR_16);
 struct ifnet *VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_17->sc_dev = VAR_16;





 VAR_17->res_irq = FUNC_3(VAR_16, VAR_11, &VAR_20,
     VAR_10);
 if (VAR_17->res_irq == ((void*)0)) {
  FUNC_8(VAR_16, "cannot reserve interrupt, failed.\n");
  return (VAR_2);
 }

 VAR_18 = VAR_17->sc_ifp = FUNC_9(VAR_6);
 if (VAR_18 == ((void*)0)) {
  return (VAR_1);
 }

 VAR_18->if_softc = VAR_17;
 FUNC_12(VAR_18, FUNC_6(VAR_16), FUNC_7(VAR_16));
 VAR_18->if_mtu = VAR_9;
 VAR_18->if_flags = VAR_5 | VAR_4 | VAR_3;
 VAR_18->if_ioctl = VAR_14;
 VAR_18->if_output = VAR_15;
 VAR_18->if_hdrlen = 0;
 VAR_18->if_addrlen = 0;
 VAR_18->if_snd.ifq_maxlen = VAR_12;
 FUNC_10(VAR_18);

 FUNC_1(VAR_18, VAR_0, sizeof(u_int32_t));





 VAR_19 = FUNC_5(VAR_16, VAR_17->res_irq, VAR_8 | VAR_7,
     ((void*)0), VAR_13, VAR_17, &VAR_17->sc_intr_cookie);
 if (VAR_19) {
  FUNC_2(VAR_18);
  FUNC_11(VAR_18);
  FUNC_4(VAR_16, VAR_11, 0, VAR_17->res_irq);
  FUNC_8(VAR_16, "Unable to register interrupt handler\n");
  return (VAR_19);
 }

 return (0);
}
