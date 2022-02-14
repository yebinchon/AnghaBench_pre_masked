
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int num_ports; } ;
struct mthca_dev {int mthca_flags; int ib_dev; int driver_uar; int kar; int driver_pd; TYPE_1__ limits; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mthca_dev*,int) ;
 int FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*) ;
 int FUNC_6 (struct mthca_dev*) ;
 int FUNC_7 (struct mthca_dev*) ;
 int FUNC_8 (struct mthca_dev*) ;
 int FUNC_9 (struct mthca_dev*) ;
 int FUNC_10 (struct mthca_dev*) ;
 int FUNC_11 (struct mthca_dev*) ;
 int FUNC_12 (struct mthca_dev*) ;
 int FUNC_13 (struct mthca_dev*) ;
 int FUNC_14 (struct mthca_dev*) ;
 int FUNC_15 (struct mthca_dev*) ;
 int FUNC_16 (struct mthca_dev*,int *) ;
 int FUNC_17 (struct mthca_dev*,int *) ;
 int FUNC_18 (struct mthca_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 struct mthca_dev* FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_24(struct pci_dev *VAR_1)
{
 struct mthca_dev *VAR_2 = FUNC_21(VAR_1);
 int VAR_3;

 if (VAR_2) {
  FUNC_15(VAR_2);
  FUNC_18(VAR_2);

  for (VAR_3 = 1; VAR_3 <= VAR_2->limits.num_ports; ++VAR_3)
   FUNC_2(VAR_2, VAR_3);

  FUNC_6(VAR_2);
  FUNC_3(VAR_2);
  FUNC_9(VAR_2);
  FUNC_10(VAR_2);
  FUNC_4(VAR_2);
  FUNC_14(VAR_2);
  FUNC_5(VAR_2);

  FUNC_16(VAR_2, &VAR_2->driver_pd);

  FUNC_7(VAR_2);
  FUNC_8(VAR_2);

  FUNC_1(VAR_2->kar);
  FUNC_17(VAR_2, &VAR_2->driver_uar);
  FUNC_11(VAR_2);
  FUNC_12(VAR_2);
  FUNC_13(VAR_2);

  if (VAR_2->mthca_flags & VAR_0)
   FUNC_20(VAR_1);

  FUNC_0(&VAR_2->ib_dev);
  FUNC_22(VAR_1);
  FUNC_19(VAR_1);
  FUNC_23(VAR_1, ((void*)0));
 }
}
