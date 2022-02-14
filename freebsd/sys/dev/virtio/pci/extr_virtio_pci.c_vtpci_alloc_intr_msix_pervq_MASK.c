
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtpci_softc {int vtpci_flags; int vtpci_nvqs; TYPE_1__* vtpci_vqs; } ;
struct TYPE_2__ {scalar_t__ vtv_no_intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vtpci_softc*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct vtpci_softc *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (VAR_3 != 0 ||
     VAR_4->vtpci_flags & VAR_2)
  return (VAR_0);

 for (VAR_6 = 0, VAR_5 = 0; VAR_5 < VAR_4->vtpci_nvqs; VAR_5++) {
  if (VAR_4->vtpci_vqs[VAR_5].vtv_no_intr == 0)
   VAR_6++;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_6);
 if (VAR_7)
  return (VAR_7);

 VAR_4->vtpci_flags |= VAR_1;

 return (0);
}
