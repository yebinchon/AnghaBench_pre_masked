
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwohci_softc {int fc; int atrq; } ;
struct firewire_comm {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fwohci_softc*,int *) ;

__attribute__((used)) static void
FUNC_3(struct firewire_comm *VAR_0)
{
 struct fwohci_softc *VAR_1 = (struct fwohci_softc *)VAR_0;
 FUNC_0(&VAR_1->fc);
 FUNC_2(VAR_1, &(VAR_1->atrq));
 FUNC_1(&VAR_1->fc);
 return;
}
