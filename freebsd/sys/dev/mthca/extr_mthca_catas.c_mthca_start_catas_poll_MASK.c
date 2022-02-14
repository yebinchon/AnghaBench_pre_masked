
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_4__ {int addr; int size; TYPE_2__ timer; int list; int * map; } ;
struct mthca_dev {TYPE_1__ catas_err; int pdev; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct mthca_dev*,char*,unsigned long long,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_2 ;

void FUNC_7(struct mthca_dev *VAR_3)
{
 phys_addr_t VAR_4;

 FUNC_2(&VAR_3->catas_err.timer);
 VAR_3->catas_err.map = ((void*)0);

 VAR_4 = FUNC_6(VAR_3->pdev, 0) +
  ((FUNC_5(VAR_3->pdev, 0) - 1) &
   VAR_3->catas_err.addr);

 VAR_3->catas_err.map = FUNC_3(VAR_4, VAR_3->catas_err.size * 4);
 if (!VAR_3->catas_err.map) {
  FUNC_4(VAR_3, "couldn't map catastrophic error region "
      "at 0x%llx/0x%x\n", (unsigned long long) VAR_4,
      VAR_3->catas_err.size * 4);
  return;
 }

 VAR_3->catas_err.timer.data = (unsigned long) VAR_3;
 VAR_3->catas_err.timer.function = VAR_2;
 VAR_3->catas_err.timer.expires = VAR_1 + VAR_0;
 FUNC_0(&VAR_3->catas_err.list);
 FUNC_1(&VAR_3->catas_err.timer);
}
