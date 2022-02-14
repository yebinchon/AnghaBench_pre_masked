
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int idi_map; int idi_tag; int idi_size; int * idi_vaddr; } ;
struct TYPE_4__ {int mc_list_count; int rx_mask; TYPE_1__ mc_list; } ;
struct bnxt_softc {int dev; TYPE_2__ vnic_info; } ;
typedef int if_t ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bnxt_softc*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 struct bnxt_softc* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(if_ctx_t VAR_5)
{
 struct bnxt_softc *VAR_6 = FUNC_6(VAR_5);
 if_t VAR_7 = FUNC_5(VAR_5);
 uint8_t *VAR_8;
 int VAR_9;

 VAR_8 = VAR_6->vnic_info.mc_list.idi_vaddr;
 FUNC_2(VAR_8, VAR_6->vnic_info.mc_list.idi_size);
 VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_8);

 if (VAR_9 > VAR_0) {
  VAR_6->vnic_info.rx_mask |=
      VAR_2;
  FUNC_0(VAR_6, &VAR_6->vnic_info);
 } else {
  VAR_6->vnic_info.rx_mask &=
      ~VAR_2;
  FUNC_1(VAR_6->vnic_info.mc_list.idi_tag,
      VAR_6->vnic_info.mc_list.idi_map, VAR_1);
  VAR_6->vnic_info.mc_list_count = VAR_9;
  VAR_6->vnic_info.rx_mask |=
      VAR_3;
  if (FUNC_0(VAR_6, &VAR_6->vnic_info))
   FUNC_3(VAR_6->dev,
       "set_multi: rx_mask set failed\n");
 }
}
