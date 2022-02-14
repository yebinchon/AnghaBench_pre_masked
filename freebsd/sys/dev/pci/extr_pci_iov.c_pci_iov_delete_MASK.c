
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pcicfg_iov {int iov_flags; scalar_t__ iov_num_vfs; int rman; TYPE_2__* iov_bar; scalar_t__ iov_pos; } ;
struct TYPE_3__ {int dev; struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
struct cdev {struct pci_devinfo* si_drv1; } ;
typedef int device_t ;
struct TYPE_4__ {int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_devinfo*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (struct pci_devinfo*,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int **,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (struct pcicfg_iov*,int ) ;
 int FUNC_15 (int ,int ,int ,scalar_t__,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(struct cdev *VAR_12)
{
 device_t VAR_13, VAR_14, VAR_15, *VAR_16;
 struct pci_devinfo *VAR_17;
 struct pcicfg_iov *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 uint32_t VAR_22;

 FUNC_11(&VAR_2);
 VAR_17 = VAR_12->si_drv1;
 VAR_18 = VAR_17->cfg.iov;
 VAR_14 = VAR_17->cfg.dev;
 VAR_13 = FUNC_8(VAR_14);
 VAR_16 = ((void*)0);

 if (VAR_18->iov_flags & VAR_3) {
  FUNC_12(&VAR_2);
  return (VAR_0);
 }

 if (VAR_18->iov_num_vfs == 0) {
  FUNC_12(&VAR_2);
  return (VAR_1);
 }

 VAR_18->iov_flags |= VAR_3;

 VAR_20 = FUNC_6(VAR_13, &VAR_16, &VAR_21);

 if (VAR_20 != 0)
  goto out;

 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  VAR_15 = VAR_16[VAR_19];

  if (!FUNC_14(VAR_18, VAR_15))
   continue;

  VAR_20 = FUNC_5(VAR_15);
  if (VAR_20 != 0) {
   FUNC_9(VAR_14,
      "Could not disable SR-IOV: failed to detach VF %s\n",
       FUNC_7(VAR_15));
   goto out;
  }
 }

 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  VAR_15 = VAR_16[VAR_19];

  if (FUNC_14(VAR_18, VAR_15))
   FUNC_4(VAR_13, VAR_15);
 }
 FUNC_3(VAR_14);

 VAR_22 = FUNC_0(VAR_17, VAR_9, 2);
 VAR_22 &= ~(VAR_6 | VAR_7);
 FUNC_1(VAR_17, VAR_9, VAR_22, 2);
 FUNC_1(VAR_17, VAR_10, 0, 2);

 VAR_18->iov_num_vfs = 0;

 for (VAR_19 = 0; VAR_19 <= VAR_8; VAR_19++) {
  if (VAR_18->iov_bar[VAR_19].res != ((void*)0)) {
   FUNC_15(VAR_13, VAR_14, VAR_11,
       VAR_18->iov_pos + FUNC_2(VAR_19),
       VAR_18->iov_bar[VAR_19].res);
   FUNC_13(VAR_13, VAR_14, VAR_11,
       VAR_18->iov_pos + FUNC_2(VAR_19));
   VAR_18->iov_bar[VAR_19].res = ((void*)0);
  }
 }

 if (VAR_18->iov_flags & VAR_4) {
  FUNC_16(&VAR_18->rman);
  VAR_18->iov_flags &= ~VAR_4;
 }

 VAR_20 = 0;
out:
 FUNC_10(VAR_16, VAR_5);
 VAR_18->iov_flags &= ~VAR_3;
 FUNC_12(&VAR_2);
 return (VAR_20);
}
