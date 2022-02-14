
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct work_struct {int entry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct work_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct work_struct*) ;
 int FUNC_5 (struct workqueue_struct*,int) ;

int
FUNC_6(int VAR_1, struct workqueue_struct *VAR_2, struct work_struct *VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_3(VAR_0, FUNC_4(VAR_3))) {
  FUNC_0(!FUNC_2(&VAR_3->entry));
  FUNC_1(FUNC_5(VAR_2, VAR_1), VAR_3);
  VAR_4 = 1;
 }
 return VAR_4;
}
