
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pcicfg_iov {int iov_pos; TYPE_2__* iov_cdev; int * iov_schema; } ;
struct TYPE_3__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int nvlist_t ;
typedef int device_t ;
struct TYPE_4__ {struct pci_devinfo* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct pcicfg_iov*,int ) ;
 int VAR_11 ;
 TYPE_2__* FUNC_6 (int *,int ,int ,int ,int,char*,char const*) ;
 struct pcicfg_iov* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int*) ;
 int * FUNC_12 (int **,int **) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,int) ;

int
FUNC_15(device_t VAR_12, device_t VAR_13, nvlist_t *VAR_14,
    nvlist_t *VAR_15, const char *VAR_16)
{
 device_t VAR_17;
 struct pci_devinfo *VAR_18;
 struct pcicfg_iov *VAR_19;
 nvlist_t *VAR_20;
 uint32_t VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_18 = FUNC_1(VAR_13);
 VAR_17 = FUNC_2(VAR_12);
 VAR_20 = ((void*)0);

 VAR_22 = FUNC_11(VAR_13, VAR_8, &VAR_23);

 if (VAR_22 != 0)
  return (VAR_22);

 VAR_21 = FUNC_14(VAR_13, VAR_23, 4);
 if (FUNC_0(VAR_21) != 1) {
  if (VAR_10)
   FUNC_4(VAR_13,
       "Unsupported version of SR-IOV (%d) detected\n",
       FUNC_0(VAR_21));

  return (VAR_2);
 }

 VAR_19 = FUNC_7(sizeof(*VAR_18->cfg.iov), VAR_5, VAR_6 | VAR_7);

 FUNC_8(&VAR_4);
 if (VAR_18->cfg.iov != ((void*)0)) {
  VAR_22 = VAR_0;
  goto cleanup;
 }
 VAR_19->iov_pos = VAR_23;

 VAR_20 = FUNC_12(&VAR_14, &VAR_15);
 if (VAR_20 == ((void*)0)) {
  VAR_22 = VAR_1;
  goto cleanup;
 }

 VAR_22 = FUNC_13(VAR_20);
 if (VAR_22 != 0)
  goto cleanup;
 VAR_19->iov_schema = VAR_20;

 VAR_19->iov_cdev = FUNC_6(&VAR_11, FUNC_3(VAR_13),
     VAR_9, VAR_3, 0600, "iov/%s", VAR_16);

 if (VAR_19->iov_cdev == ((void*)0)) {
  VAR_22 = VAR_1;
  goto cleanup;
 }

 VAR_18->cfg.iov = VAR_19;
 VAR_19->iov_cdev->si_drv1 = VAR_18;
 FUNC_9(&VAR_4);

 return (0);

cleanup:
 FUNC_10(VAR_20);
 FUNC_10(VAR_14);
 FUNC_10(VAR_15);
 FUNC_5(VAR_19, VAR_5);
 FUNC_9(&VAR_4);
 return (VAR_22);
}
