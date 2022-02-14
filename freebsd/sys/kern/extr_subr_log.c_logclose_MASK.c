
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ sc_state; int sc_callout; int sc_sigio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{

 FUNC_1(&VAR_1.sc_sigio);

 FUNC_2(&VAR_2);
 FUNC_0(&VAR_1.sc_callout);
 VAR_1.sc_state = 0;
 VAR_0 = 0;
 FUNC_3(&VAR_2);

 return (0);
}
