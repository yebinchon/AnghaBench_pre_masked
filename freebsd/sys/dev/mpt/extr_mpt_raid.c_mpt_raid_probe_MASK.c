
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_softc {TYPE_1__* ioc_page2; } ;
struct TYPE_2__ {scalar_t__ MaxPhysDisks; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mpt_softc *VAR_1)
{

 if (VAR_1->ioc_page2 == ((void*)0) || VAR_1->ioc_page2->MaxPhysDisks == 0) {
  return (VAR_0);
 }
 return (0);
}
