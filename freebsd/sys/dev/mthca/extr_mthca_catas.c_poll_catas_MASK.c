
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int timer; scalar_t__ map; } ;
struct mthca_dev {TYPE_1__ catas_err; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mthca_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct mthca_dev *VAR_3 = (struct mthca_dev *) VAR_2;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->catas_err.size; ++VAR_4)
  if (FUNC_2(VAR_3->catas_err.map + VAR_4)) {
   FUNC_0(VAR_3);
   return;
  }

 FUNC_1(&VAR_3->catas_err.timer,
    FUNC_3(VAR_1 + VAR_0));
}
