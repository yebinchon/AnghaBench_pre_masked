
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_intr_arg {int cause; int arg; } ;
struct mvs_channel {scalar_t__ resetting; scalar_t__ resetpolldiv; int dev; int reset_timer; } ;
struct cam_sim {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct cam_sim*) ;
 int FUNC_2 (struct mvs_intr_arg*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct cam_sim *VAR_0)
{
 struct mvs_channel *VAR_1 = (struct mvs_channel *)FUNC_1(VAR_0);
 struct mvs_intr_arg VAR_2;

 VAR_2.arg = VAR_1->dev;
 VAR_2.cause = 2 | 4;
 FUNC_2(&VAR_2);
 if (VAR_1->resetting != 0 &&
     (--VAR_1->resetpolldiv <= 0 || !FUNC_0(&VAR_1->reset_timer))) {
  VAR_1->resetpolldiv = 1000;
  FUNC_3(VAR_1->dev);
 }
}
