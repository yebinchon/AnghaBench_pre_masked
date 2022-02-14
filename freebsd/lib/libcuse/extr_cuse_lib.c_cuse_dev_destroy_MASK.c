
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct cuse_dev*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct cuse_dev*) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,int ,struct cuse_dev**) ;

void
FUNC_5(struct cuse_dev *VAR_4)
{
 int VAR_5;

 if (VAR_2 < 0)
  return;

 FUNC_0();
 FUNC_2(&VAR_3, VAR_4, VAR_1);
 FUNC_1();

 VAR_5 = FUNC_4(VAR_2, VAR_0, &VAR_4);
 if (VAR_5)
  return;

 FUNC_3(VAR_4);
}
