
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ecr_base; } ;
struct TYPE_8__ {int eq_arm; int eq_set_ci_base; } ;
struct TYPE_10__ {TYPE_4__ tavor; TYPE_3__ arbel; } ;
struct TYPE_6__ {int clr_int_base; int eq_arm_base; int eq_set_ci_base; } ;
struct TYPE_7__ {TYPE_1__ arbel; } ;
struct mthca_dev {int clr_base; TYPE_5__ eq_regs; TYPE_2__ fw; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_dev*,char*) ;
 scalar_t__ FUNC_2 (struct mthca_dev*) ;
 scalar_t__ FUNC_3 (struct mthca_dev*,int,int,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mthca_dev *VAR_7)
{
 if (FUNC_2(VAR_7)) {







  if (FUNC_3(VAR_7, (FUNC_4(VAR_7->pdev, 0) - 1) &
      VAR_7->fw.arbel.clr_int_base, VAR_2,
      &VAR_7->clr_base)) {
   FUNC_1(VAR_7, "Couldn't map interrupt clear register, "
      "aborting.\n");
   return -VAR_0;
  }





  if (FUNC_3(VAR_7, ((FUNC_4(VAR_7->pdev, 0) - 1) &
     VAR_7->fw.arbel.eq_arm_base) + 4, 4,
      &VAR_7->eq_regs.arbel.eq_arm)) {
   FUNC_1(VAR_7, "Couldn't map EQ arm register, aborting.\n");
   FUNC_0(VAR_7->clr_base);
   return -VAR_0;
  }

  if (FUNC_3(VAR_7, (FUNC_4(VAR_7->pdev, 0) - 1) &
      VAR_7->fw.arbel.eq_set_ci_base,
      VAR_6,
      &VAR_7->eq_regs.arbel.eq_set_ci_base)) {
   FUNC_1(VAR_7, "Couldn't map EQ CI register, aborting.\n");
   FUNC_0(VAR_7->eq_regs.arbel.eq_arm);
   FUNC_0(VAR_7->clr_base);
   return -VAR_0;
  }
 } else {
  if (FUNC_3(VAR_7, VAR_1, VAR_2,
      &VAR_7->clr_base)) {
   FUNC_1(VAR_7, "Couldn't map interrupt clear register, "
      "aborting.\n");
   return -VAR_0;
  }

  if (FUNC_3(VAR_7, VAR_3,
      VAR_5 + VAR_4,
      &VAR_7->eq_regs.tavor.ecr_base)) {
   FUNC_1(VAR_7, "Couldn't map ecr register, "
      "aborting.\n");
   FUNC_0(VAR_7->clr_base);
   return -VAR_0;
  }
 }

 return 0;

}
