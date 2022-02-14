
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_pgoff; void* vm_page_prot; } ;
struct TYPE_6__ {int pfn; } ;
struct mlx4_ib_ucontext {TYPE_4__* hw_bar_info; TYPE_1__ uar; } ;
struct mlx4_ib_dev {TYPE_5__* dev; } ;
struct mlx4_clock_params {int offset; int bar; } ;
struct ib_ucontext {int device; } ;
struct TYPE_7__ {scalar_t__ bf_reg_size; int num_uars; } ;
struct TYPE_10__ {TYPE_3__* persist; TYPE_2__ caps; } ;
struct TYPE_9__ {scalar_t__ vma; } ;
struct TYPE_8__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,scalar_t__,int,scalar_t__,void*) ;
 int FUNC_1 (TYPE_5__*,struct mlx4_clock_params*) ;
 int FUNC_2 (struct vm_area_struct*,TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 struct mlx4_ib_dev* FUNC_6 (int ) ;
 struct mlx4_ib_ucontext* FUNC_7 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_8(struct ib_ucontext *VAR_7, struct vm_area_struct *VAR_8)
{
 struct mlx4_ib_dev *VAR_9 = FUNC_6(VAR_7->device);
 struct mlx4_ib_ucontext *VAR_10 = FUNC_7(VAR_7);

 if (VAR_8->vm_end - VAR_8->vm_start != VAR_6)
  return -VAR_1;

 if (VAR_8->vm_pgoff == 0) {

  if (VAR_10->hw_bar_info[VAR_4].vma)
   return -VAR_1;

  VAR_8->vm_page_prot = FUNC_4(VAR_8->vm_page_prot);

  if (FUNC_0(VAR_8, VAR_8->vm_start,
           FUNC_7(VAR_7)->uar.pfn,
           VAR_6, VAR_8->vm_page_prot))
   return -VAR_0;

  FUNC_2(VAR_8, &VAR_10->hw_bar_info[VAR_4]);

 } else if (VAR_8->vm_pgoff == 1 && VAR_9->dev->caps.bf_reg_size != 0) {

  if (VAR_10->hw_bar_info[VAR_2].vma)
   return -VAR_1;

  VAR_8->vm_page_prot = FUNC_5(VAR_8->vm_page_prot);

  if (FUNC_0(VAR_8, VAR_8->vm_start,
           FUNC_7(VAR_7)->uar.pfn +
           VAR_9->dev->caps.num_uars,
           VAR_6, VAR_8->vm_page_prot))
   return -VAR_0;

  FUNC_2(VAR_8, &VAR_10->hw_bar_info[VAR_2]);

 } else if (VAR_8->vm_pgoff == 3) {
  struct mlx4_clock_params VAR_11;
  int VAR_12;


  if (VAR_10->hw_bar_info[VAR_3].vma)
   return -VAR_1;

  VAR_12 = FUNC_1(VAR_9->dev, &VAR_11);

  if (VAR_12)
   return VAR_12;

  VAR_8->vm_page_prot = FUNC_4(VAR_8->vm_page_prot);
  if (FUNC_0(VAR_8, VAR_8->vm_start,
           (FUNC_3(VAR_9->dev->persist->pdev,
          VAR_11.bar) +
     VAR_11.offset)
           >> VAR_5,
           VAR_6, VAR_8->vm_page_prot))
   return -VAR_0;

  FUNC_2(VAR_8,
         &VAR_10->hw_bar_info[VAR_3]);
 } else {
  return -VAR_1;
 }

 return 0;
}
