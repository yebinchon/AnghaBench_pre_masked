
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dev; } ;
struct fwohci_softc {int intmask; int itstat; int irstat; int intstat; TYPE_1__ fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct fwohci_softc*,int ) ;
 int FUNC_2 (struct fwohci_softc*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct fwohci_softc*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct fwohci_softc *VAR_11)
{
 uint32_t VAR_12, VAR_13, VAR_14;

 FUNC_0(&VAR_11->fc);
 VAR_12 = FUNC_1(VAR_11, VAR_2);
 if (VAR_12 == 0xffffffff) {
  if (!FUNC_4(VAR_11->fc.dev))
   return (VAR_0);
  FUNC_5(VAR_11->fc.dev, "device physically ejected?\n");
  return (VAR_1);
 }
 if (VAR_12)
  FUNC_2(VAR_11, VAR_3, VAR_12 & ~VAR_6);

 VAR_12 &= VAR_11->intmask;
 if (VAR_12 == 0)
  return (VAR_1);

 FUNC_3(&VAR_11->intstat, VAR_12);
 if (VAR_12 & VAR_4) {
  VAR_13 = FUNC_1(VAR_11, VAR_7);
  FUNC_2(VAR_11, VAR_8, VAR_13);
  FUNC_3(&VAR_11->irstat, VAR_13);
 }
 if (VAR_12 & VAR_5) {
  VAR_14 = FUNC_1(VAR_11, VAR_9);
  FUNC_2(VAR_11, VAR_10, VAR_14);
  FUNC_3(&VAR_11->itstat, VAR_14);
 }

 FUNC_6(VAR_11, VAR_12, -1);
 return (VAR_0);
}
