
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dev {int list; int opened; int flags; } ;


 int FUNC_0 (char*,struct rfcomm_dev*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct rfcomm_dev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct rfcomm_dev *VAR_2)
{
 FUNC_0("dev %p", VAR_2);

 FUNC_1(FUNC_5(VAR_0, &VAR_2->flags));

 if (FUNC_2(&VAR_2->opened) > 0)
  return;

 FUNC_6(&VAR_1);
 FUNC_3(&VAR_2->list);
 FUNC_7(&VAR_1);

 FUNC_4(VAR_2);
}
