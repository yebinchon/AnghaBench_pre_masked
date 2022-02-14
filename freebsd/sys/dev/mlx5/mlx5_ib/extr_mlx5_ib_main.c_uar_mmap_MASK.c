
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; int vm_pgoff; } ;
struct mlx5_uuar_info {unsigned long num_uars; TYPE_1__* uars; } ;
struct mlx5_ib_ucontext {struct mlx5_uuar_info uuari; } ;
struct mlx5_ib_dev {int dummy; } ;
typedef int phys_addr_t ;
typedef int pgprot_t ;
typedef enum mlx5_ib_mmap_cmd { ____Placeholder_mlx5_ib_mmap_cmd } mlx5_ib_mmap_cmd ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,unsigned long,...) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int,unsigned long long,int*,int ) ;
 int FUNC_4 (struct vm_area_struct*,struct mlx5_ib_ucontext*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mlx5_ib_dev*,int ) ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_5, enum mlx5_ib_mmap_cmd VAR_6,
      struct vm_area_struct *VAR_7,
      struct mlx5_ib_ucontext *VAR_8)
{
 struct mlx5_uuar_info *VAR_9 = &VAR_8->uuari;
 int VAR_10;
 unsigned long VAR_11;
 phys_addr_t VAR_12, VAR_13;
 pgprot_t VAR_14;

 switch (VAR_6) {
 case 128:





   return -VAR_2;


 case 129:

  VAR_14 = FUNC_8(VAR_7->vm_page_prot);
  break;
 case 130:
  VAR_14 = FUNC_7(VAR_7->vm_page_prot);
  break;
 default:
  return -VAR_1;
 }

 if (VAR_7->vm_end - VAR_7->vm_start != VAR_4)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_7->vm_pgoff);
 if (VAR_11 >= VAR_9->num_uars)
  return -VAR_1;

 VAR_12 = FUNC_9(VAR_5, VAR_9->uars[VAR_11].index);
 FUNC_2(VAR_5, "uar idx 0x%lx, pfn %pa\n", VAR_11, &VAR_12);

 VAR_7->vm_page_prot = VAR_14;
 VAR_10 = FUNC_1(VAR_7, VAR_7->vm_start, VAR_12,
     VAR_4, VAR_7->vm_page_prot);
 if (VAR_10) {
  FUNC_3(VAR_5, "io_remap_pfn_range failed with error=%d, vm_start=0x%llx, pfn=%pa, mmap_cmd=%s\n",
       VAR_10, (unsigned long long)VAR_7->vm_start, &VAR_12, FUNC_5(VAR_6));
  return -VAR_0;
 }

 VAR_13 = VAR_12 << VAR_3;
 FUNC_2(VAR_5, "mapped %s at 0x%llx, PA %pa\n", FUNC_5(VAR_6),
      (unsigned long long)VAR_7->vm_start, &VAR_13);

 return FUNC_4(VAR_7, VAR_8);
}
