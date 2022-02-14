
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct delayed_work {int work; } ;


 int FUNC_0 (int,struct workqueue_struct*,struct delayed_work*,unsigned long) ;
 int FUNC_1 (struct workqueue_struct*,int *) ;

int FUNC_2(struct workqueue_struct *VAR_0,
   struct delayed_work *VAR_1, unsigned long VAR_2)
{
 if (VAR_2 == 0)
  return FUNC_1(VAR_0, &VAR_1->work);

 return FUNC_0(-1, VAR_0, VAR_1, VAR_2);
}
