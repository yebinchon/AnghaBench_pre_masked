
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pci_dev {int dummy; } ;
struct mlx4_dev {int flags; int * dev_vfs; TYPE_1__* persist; } ;
struct TYPE_2__ {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*,...) ;
 int FUNC_6 (struct mlx4_dev*,char*,...) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int VAR_4 ;

__attribute__((used)) static u64 FUNC_8(struct mlx4_dev *VAR_5, struct pci_dev *VAR_6,
        u8 VAR_7, int VAR_8, int VAR_9)
{
 u64 VAR_10 = VAR_5->flags;
 int VAR_11 = 0;

 if (VAR_9) {
  VAR_5->dev_vfs = FUNC_2(VAR_7, sizeof(*VAR_5->dev_vfs),
           VAR_0);
  if (!VAR_5->dev_vfs)
   goto free_mem;
  return VAR_10;
 }

 FUNC_1(&VAR_4);
 if (VAR_5->flags & VAR_3) {
  if (VAR_8 != VAR_7) {
   FUNC_5(VAR_5, "SR-IOV was already enabled, but with num_vfs (%d) different than requested (%d)\n",
     VAR_8, VAR_7);
   VAR_7 = VAR_8;
  }
 }

 VAR_5->dev_vfs = FUNC_4(VAR_7 * sizeof(*VAR_5->dev_vfs), VAR_0);
 if (((void*)0) == VAR_5->dev_vfs) {
  FUNC_5(VAR_5, "Failed to allocate memory for VFs\n");
  goto disable_sriov;
 }

 if (!(VAR_5->flags & VAR_3)) {
  FUNC_6(VAR_5, "Enabling SR-IOV with %d VFs\n", VAR_7);
  VAR_11 = FUNC_7(VAR_6, VAR_7);
 }
 if (VAR_11) {
  FUNC_5(VAR_5, "Failed to enable SR-IOV, continuing without SR-IOV (err = %d)\n",
    VAR_11);
  goto disable_sriov;
 } else {
  FUNC_6(VAR_5, "Running in master mode\n");
  VAR_10 |= VAR_3 |
   VAR_1;
  VAR_10 &= ~VAR_2;
  VAR_5->persist->num_vfs = VAR_7;
 }
 return VAR_10;

disable_sriov:
 FUNC_0(&VAR_4);
free_mem:
 VAR_5->persist->num_vfs = 0;
 FUNC_3(VAR_5->dev_vfs);
        VAR_5->dev_vfs = ((void*)0);
 return VAR_10 & ~VAR_1;
}
