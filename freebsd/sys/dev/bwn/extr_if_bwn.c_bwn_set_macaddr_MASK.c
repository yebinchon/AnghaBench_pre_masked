
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bwn_mac {TYPE_2__* mac_sc; } ;
struct TYPE_3__ {int ic_macaddr; } ;
struct TYPE_4__ {TYPE_1__ sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;
 int FUNC_1 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_1)
{

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_0,
     VAR_1->mac_sc->sc_ic.ic_macaddr);
}
