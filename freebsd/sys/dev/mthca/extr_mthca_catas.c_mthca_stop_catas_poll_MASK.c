
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; scalar_t__ map; int timer; } ;
struct mthca_dev {TYPE_1__ catas_err; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mthca_dev *VAR_1)
{
 FUNC_0(&VAR_1->catas_err.timer);

 if (VAR_1->catas_err.map)
  FUNC_1(VAR_1->catas_err.map);

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_1->catas_err.list);
 FUNC_4(&VAR_0);
}
