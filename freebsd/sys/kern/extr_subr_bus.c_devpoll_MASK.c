
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int mtx; int sel; int devq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5)
{
 int VAR_6 = 0;

 FUNC_1(&VAR_2.mtx);
 if (VAR_4 & (VAR_0 | VAR_1)) {
  if (!FUNC_0(&VAR_2.devq))
   VAR_6 = VAR_4 & (VAR_0 | VAR_1);
  else
   FUNC_3(VAR_5, &VAR_2.sel);
 }
 FUNC_2(&VAR_2.mtx);

 return (VAR_6);
}
