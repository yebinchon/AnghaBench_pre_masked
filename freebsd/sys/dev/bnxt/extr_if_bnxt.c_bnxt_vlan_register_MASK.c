
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bnxt_vlan_tag {int tpid; int tag; } ;
struct TYPE_2__ {int vlan_tags; } ;
struct bnxt_softc {TYPE_1__ vnic_info; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bnxt_vlan_tag*,int ) ;
 struct bnxt_softc* FUNC_1 (int ) ;
 struct bnxt_vlan_tag* FUNC_2 (int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_3, uint16_t VAR_4)
{
 struct bnxt_softc *VAR_5 = FUNC_1(VAR_3);
 struct bnxt_vlan_tag *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct bnxt_vlan_tag), VAR_0, VAR_1);
 if (VAR_6 == ((void*)0))
  return;
 VAR_6->tag = VAR_4;
 VAR_6->tpid = 8100;
 FUNC_0(&VAR_5->vnic_info.vlan_tags, VAR_6, VAR_2);
}
