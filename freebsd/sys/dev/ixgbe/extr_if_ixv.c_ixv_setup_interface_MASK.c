
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ifq_maxlen; } ;
struct ifnet {scalar_t__ if_mtu; TYPE_1__ if_snd; } ;
struct adapter {int media; scalar_t__ max_frame_size; TYPE_2__* shared; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_4__ {scalar_t__* isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ifnet*,int ) ;
 struct ifnet* FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_4(VAR_3);
 if_softc_ctx_t VAR_5 = VAR_4->shared;
 struct ifnet *VAR_6 = FUNC_3(VAR_3);

 FUNC_1("ixv_setup_interface: begin");

 FUNC_2(VAR_6, FUNC_0(10));
 VAR_6->if_snd.ifq_maxlen = VAR_5->isc_ntxd[0] - 2;


 VAR_4->max_frame_size = VAR_6->if_mtu + VAR_2;
 FUNC_5(VAR_4->media, VAR_1 | VAR_0, 0, ((void*)0));
 FUNC_6(VAR_4->media, VAR_1 | VAR_0);

 return 0;
}
