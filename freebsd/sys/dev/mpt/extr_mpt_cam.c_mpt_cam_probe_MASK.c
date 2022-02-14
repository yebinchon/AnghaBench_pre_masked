
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_softc {int cfg_role; int role; TYPE_1__* ioc_page2; scalar_t__ do_cfg_role; } ;
struct TYPE_2__ {scalar_t__ MaxPhysDisks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct mpt_softc *VAR_3)
{
 int VAR_4;






 if (VAR_3->do_cfg_role) {
  VAR_4 = VAR_3->cfg_role;
 } else {
  VAR_4 = VAR_3->role;
 }
 if ((VAR_4 & (VAR_2|VAR_1)) != 0 ||
     (VAR_3->ioc_page2 != ((void*)0) && VAR_3->ioc_page2->MaxPhysDisks != 0)) {
  return (0);
 }
 return (VAR_0);
}
