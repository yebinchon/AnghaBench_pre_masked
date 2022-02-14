
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lip_state; } ;
struct lacp_port {int lp_selected; TYPE_1__ lp_partner; } ;
struct lacp_peerinfo {int lip_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct lacp_port*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct lacp_peerinfo const*) ;

__attribute__((used)) static void
FUNC_3(struct lacp_port *VAR_2,
    const struct lacp_peerinfo *VAR_3)
{

 FUNC_1(VAR_2);

 if (FUNC_2(&VAR_2->lp_partner, VAR_3) ||
     !FUNC_0(VAR_2->lp_partner.lip_state, VAR_3->lip_state,
     VAR_0)) {
  VAR_2->lp_selected = VAR_1;

 }
}
