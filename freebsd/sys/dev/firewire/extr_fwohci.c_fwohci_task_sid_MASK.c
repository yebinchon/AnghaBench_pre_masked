
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct firewire_comm {int dev; } ;
struct fwohci_softc {int arrq; int arrs; int atrs; int atrq; int * sid_buf; struct firewire_comm fc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fwohci_softc*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct firewire_comm*) ;
 int FUNC_5 (struct firewire_comm*,int *,int) ;
 int FUNC_6 (struct fwohci_softc*,int *,int) ;
 int FUNC_7 (struct fwohci_softc*,int *) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_6, int VAR_7)
{
 struct fwohci_softc *VAR_8 = (struct fwohci_softc *)VAR_6;
 struct firewire_comm *VAR_9 = &VAR_8->fc;
 uint32_t *VAR_10;
 int VAR_11, VAR_12;






 VAR_12 = FUNC_1(VAR_8, VAR_3);

 if (VAR_12 & VAR_5) {
  FUNC_2(VAR_9->dev, "SID Error\n");
  return;
 }
 VAR_12 &= VAR_4;
 if (VAR_12 < 4 || VAR_12 > VAR_2) {
  FUNC_2(VAR_9->dev, "invalid SID len = %d\n", VAR_12);
  return;
 }
 VAR_12 -= 4;
 VAR_10 = (uint32_t *)FUNC_8(VAR_2, VAR_0, VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_9->dev, "malloc failed\n");
  return;
 }
 for (VAR_11 = 0; VAR_11 < VAR_12 / 4; VAR_11++)
  VAR_10[VAR_11] = FUNC_0(VAR_8->sid_buf[VAR_11 + 1]);


 FUNC_7(VAR_8, &VAR_8->atrq);
 FUNC_7(VAR_8, &VAR_8->atrs);
 FUNC_6(VAR_8, &VAR_8->arrs, -1);
 FUNC_6(VAR_8, &VAR_8->arrq, -1);
 FUNC_4(VAR_9);
 FUNC_5(VAR_9, VAR_10, VAR_12);
 FUNC_3(VAR_10, VAR_0);
}
