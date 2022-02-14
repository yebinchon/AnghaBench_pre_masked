
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int sc_dev_opened; int sc_lock; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{

 FUNC_0(&VAR_1->sc_lock);
 if (VAR_1->sc_dev_opened) {
  FUNC_1(&VAR_1->sc_lock);
  return (VAR_0);
 }

 VAR_1->sc_dev_opened = 1;
 FUNC_1(&VAR_1->sc_lock);

 return (0);
}
