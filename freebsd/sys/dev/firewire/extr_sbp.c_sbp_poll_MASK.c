
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct firewire_comm* fc; } ;
struct sbp_softc {TYPE_1__ fd; } ;
struct firewire_comm {int (* poll ) (struct firewire_comm*,int ,int) ;} ;
struct cam_sim {scalar_t__ softc; } ;


 int FUNC_0 (struct firewire_comm*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct cam_sim *VAR_0)
{
 struct sbp_softc *VAR_1;
 struct firewire_comm *VAR_2;

 VAR_1 = (struct sbp_softc *)VAR_0->softc;
 VAR_2 = VAR_1->fd.fc;

 VAR_2->poll(VAR_2, 0, -1);

 return;
}
