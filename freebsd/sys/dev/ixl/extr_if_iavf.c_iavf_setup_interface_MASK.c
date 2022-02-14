
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_vsi {int media; TYPE_1__* shared; int ctx; } ;
struct ifnet {scalar_t__ if_mtu; } ;
struct iavf_sc {struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ isc_max_frame_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*,int ) ;
 struct ifnet* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_5, struct iavf_sc *VAR_6)
{
 struct ixl_vsi *VAR_7 = &VAR_6->vsi;
 if_ctx_t VAR_8 = VAR_7->ctx;
 struct ifnet *VAR_9 = FUNC_4(VAR_8);

 FUNC_1(VAR_5, "begin");

 VAR_7->shared->isc_max_frame_size =
     VAR_9->if_mtu + VAR_1 + VAR_0
     + VAR_2;



 FUNC_2(VAR_9, FUNC_0(40));


 FUNC_5(VAR_7->media, VAR_4 | VAR_3, 0, ((void*)0));
 FUNC_6(VAR_7->media, VAR_4 | VAR_3);
}
