
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct pcicfg_iov {int iov_flags; int iov_num_vfs; int rman; TYPE_2__* iov_bar; scalar_t__ iov_pos; } ;
struct pci_iov_arg {int dummy; } ;
struct TYPE_3__ {int dev; struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
struct cdev {struct pci_devinfo* si_drv1; } ;
typedef int nvlist_t ;
typedef int device_t ;
struct TYPE_4__ {int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_devinfo*,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct pci_devinfo*,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int VAR_15 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct pci_devinfo*) ;
 int FUNC_15 (struct pci_devinfo*,int *,int,int) ;
 int FUNC_16 (int ,int,int *) ;
 int FUNC_17 (int ,struct pcicfg_iov*) ;
 int FUNC_18 (struct pcicfg_iov*,struct pci_iov_arg*,int **) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct pci_devinfo*) ;
 int FUNC_21 (int ,int ,int ,scalar_t__,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int) ;

__attribute__((used)) static int
FUNC_24(struct cdev *VAR_16, struct pci_iov_arg *VAR_17)
{
 device_t VAR_18, VAR_19;
 struct pci_devinfo *VAR_20;
 struct pcicfg_iov *VAR_21;
 nvlist_t *VAR_22;
 int VAR_23, VAR_24;
 uint16_t VAR_25, VAR_26;
 uint16_t VAR_27, VAR_28;
 uint16_t VAR_29;
 uint16_t VAR_30, VAR_31;
 int VAR_32;

 FUNC_6(&VAR_3);
 VAR_20 = VAR_16->si_drv1;
 VAR_21 = VAR_20->cfg.iov;
 VAR_19 = VAR_20->cfg.dev;
 VAR_18 = FUNC_5(VAR_19);
 VAR_32 = 0;
 VAR_22 = ((void*)0);

 if ((VAR_21->iov_flags & VAR_4) || VAR_21->iov_num_vfs != 0) {
  FUNC_7(&VAR_3);
  return (VAR_0);
 }
 VAR_21->iov_flags |= VAR_4;

 VAR_24 = FUNC_18(VAR_21, VAR_17, &VAR_22);
 if (VAR_24 != 0)
  goto out;

 VAR_30 = FUNC_13(VAR_22);
 VAR_31 = FUNC_0(VAR_20, VAR_11, 2);
 if (VAR_30 > VAR_31) {
  VAR_24 = VAR_1;
  goto out;
 }

 VAR_24 = FUNC_14(VAR_20);
 if (VAR_24 != 0)
  goto out;

 VAR_24 = FUNC_19(VAR_18);
 if (VAR_24 != 0)
  goto out;

 VAR_24 = FUNC_16(VAR_19, VAR_30, VAR_22);
 if (VAR_24 != 0)
  goto out;
 VAR_32 = 1;

 FUNC_1(VAR_20, VAR_10, VAR_30, 2);

 VAR_25 = FUNC_0(VAR_20, VAR_12, 2);
 VAR_26 = FUNC_0(VAR_20, VAR_13, 2);

 VAR_27 = FUNC_12(VAR_19) + VAR_25;
 VAR_28 = VAR_27 + (VAR_30 - 1) * VAR_26;


 if (FUNC_11(VAR_19) != FUNC_4(VAR_28)) {
  VAR_24 = VAR_2;
  goto out;
 }

 VAR_29 = FUNC_0(VAR_20, VAR_9, 2);
 VAR_29 &= ~(VAR_6 | VAR_7);
 FUNC_1(VAR_20, VAR_9, VAR_29, 2);

 VAR_24 = FUNC_17(VAR_19, VAR_21);
 if (VAR_24 != 0)
  goto out;

 VAR_21->iov_num_vfs = VAR_30;

 VAR_24 = FUNC_20(VAR_20);
 if (VAR_24 != 0)
  goto out;

 VAR_29 = FUNC_0(VAR_20, VAR_9, 2);
 VAR_29 |= VAR_6 | VAR_7;
 FUNC_1(VAR_20, VAR_9, VAR_29, 2);


 FUNC_9("iov", FUNC_23(VAR_15, 10));
 FUNC_15(VAR_20, VAR_22, VAR_27, VAR_26);

 FUNC_8(VAR_22);
 VAR_21->iov_flags &= ~VAR_4;
 FUNC_7(&VAR_3);

 return (0);
out:
 if (VAR_32)
  FUNC_3(VAR_19);

 for (VAR_23 = 0; VAR_23 <= VAR_8; VAR_23++) {
  if (VAR_21->iov_bar[VAR_23].res != ((void*)0)) {
   FUNC_21(VAR_18, VAR_19, VAR_14,
       VAR_21->iov_pos + FUNC_2(VAR_23),
       VAR_21->iov_bar[VAR_23].res);
   FUNC_10(VAR_18, VAR_19, VAR_14,
       VAR_21->iov_pos + FUNC_2(VAR_23));
   VAR_21->iov_bar[VAR_23].res = ((void*)0);
  }
 }

 if (VAR_21->iov_flags & VAR_5) {
  FUNC_22(&VAR_21->rman);
  VAR_21->iov_flags &= ~VAR_5;
 }

 FUNC_8(VAR_22);
 VAR_21->iov_num_vfs = 0;
 VAR_21->iov_flags &= ~VAR_4;
 FUNC_7(&VAR_3);
 return (VAR_24);
}
