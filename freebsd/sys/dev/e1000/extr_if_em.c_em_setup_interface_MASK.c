
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {scalar_t__ media_type; scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_2__ phy; TYPE_1__ mac; } ;
struct adapter {int tx_num_queues; int media; TYPE_3__ hw; TYPE_4__* shared; } ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_8__ {scalar_t__* isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct ifnet*,scalar_t__) ;
 int FUNC_2 (struct ifnet*) ;
 struct ifnet* FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_12)
{
 struct ifnet *VAR_13 = FUNC_3(VAR_12);
 struct adapter *VAR_14 = FUNC_4(VAR_12);
 if_softc_ctx_t VAR_15 = VAR_14->shared;

 FUNC_0("em_setup_interface: begin");


 if (VAR_14->tx_num_queues == 1) {
  FUNC_1(VAR_13, VAR_15->isc_ntxd[0] - 1);
  FUNC_2(VAR_13);
 }





 if ((VAR_14->hw.phy.media_type == VAR_9) ||
     (VAR_14->hw.phy.media_type == VAR_10)) {
  u_char VAR_16 = VAR_1;

  if (VAR_14->hw.mac.type == VAR_8)
   VAR_16 = VAR_0;
  FUNC_5(VAR_14->media, VAR_6 | VAR_16 | VAR_7, 0, ((void*)0));
  FUNC_5(VAR_14->media, VAR_6 | VAR_16, 0, ((void*)0));
 } else {
  FUNC_5(VAR_14->media, VAR_6 | VAR_4, 0, ((void*)0));
  FUNC_5(VAR_14->media, VAR_6 | VAR_4 | VAR_7, 0, ((void*)0));
  FUNC_5(VAR_14->media, VAR_6 | VAR_3, 0, ((void*)0));
  FUNC_5(VAR_14->media, VAR_6 | VAR_3 | VAR_7, 0, ((void*)0));
  if (VAR_14->hw.phy.type != VAR_11) {
   FUNC_5(VAR_14->media, VAR_6 | VAR_2 | VAR_7, 0, ((void*)0));
   FUNC_5(VAR_14->media, VAR_6 | VAR_2, 0, ((void*)0));
  }
 }
 FUNC_5(VAR_14->media, VAR_6 | VAR_5, 0, ((void*)0));
 FUNC_6(VAR_14->media, VAR_6 | VAR_5);
 return (0);
}
