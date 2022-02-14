
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (struct timer_list*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct work_struct*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct work_struct*) ;
 int FUNC_5 (struct work_struct*) ;

__attribute__((used)) static int FUNC_6(struct work_struct *VAR_0,
    struct timer_list* VAR_1)
{
 int VAR_2;

 do {
  VAR_2 = (VAR_1 && FUNC_1(FUNC_0(VAR_1)));
  if (!VAR_2)
   VAR_2 = FUNC_2(VAR_0);
  FUNC_4(VAR_0);
 } while (FUNC_3(VAR_2 < 0));

 FUNC_5(VAR_0);
 return VAR_2;
}
