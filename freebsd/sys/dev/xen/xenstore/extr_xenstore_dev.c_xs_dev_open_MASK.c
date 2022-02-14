
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_dev_data {int watches; int transactions; int lock; } ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xs_dev_data*,int ) ;
 int FUNC_2 (struct xs_dev_data*,int ) ;
 struct xs_dev_data* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct xs_dev_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2, VAR_1|VAR_3);
 FUNC_4(&VAR_9->lock, "xsdev_lock", ((void*)0), VAR_0);
 FUNC_0(&VAR_9->transactions);
 FUNC_0(&VAR_9->watches);
 VAR_10 = FUNC_1(VAR_9, VAR_4);
 if (VAR_10 != 0)
  FUNC_2(VAR_9, VAR_2);

 return (VAR_10);
}
