
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_channel {int pm_level; int mtx; int r_mem; int unit; int r_irq; int ih; int reset_timer; int pm_timer; int sim; int path; scalar_t__ resetting; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct mvs_channel* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_5)
{
 struct mvs_channel *VAR_6 = FUNC_5(VAR_5);

 FUNC_7(&VAR_6->mtx);
 FUNC_12(VAR_0, VAR_6->path, ((void*)0));

 if (VAR_6->resetting) {
  VAR_6->resetting = 0;
  FUNC_15(VAR_6->sim, VAR_4);
 }
 FUNC_14(VAR_6->path);
 FUNC_13(FUNC_4(VAR_6->sim));
 FUNC_3(VAR_6->sim, VAR_4);
 FUNC_8(&VAR_6->mtx);

 if (VAR_6->pm_level > 3)
  FUNC_2(&VAR_6->pm_timer);
 FUNC_2(&VAR_6->reset_timer);
 FUNC_1(VAR_5, VAR_6->r_irq, VAR_6->ih);
 FUNC_0(VAR_5, VAR_2, VAR_1, VAR_6->r_irq);

 FUNC_9(VAR_5);
 FUNC_11(VAR_5);
 FUNC_10(VAR_5);

 FUNC_0(VAR_5, VAR_3, VAR_6->unit, VAR_6->r_mem);
 FUNC_6(&VAR_6->mtx);
 return (0);
}
