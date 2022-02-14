
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int sc_dev_opened; int sc_lock; } ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{

 FUNC_1(&VAR_0->sc_lock);
 FUNC_0(VAR_0->sc_dev_opened, ("not opened?"));
 VAR_0->sc_dev_opened = 0;
 FUNC_2(&VAR_0->sc_lock);

 return (0);
}
