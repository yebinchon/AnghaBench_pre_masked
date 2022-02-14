
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int mtx; int sigio; int cv; scalar_t__ async; scalar_t__ nonblock; scalar_t__ inuse; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{

 FUNC_2(&VAR_0.mtx);
 VAR_0.inuse = 0;
 VAR_0.nonblock = 0;
 VAR_0.async = 0;
 FUNC_0(&VAR_0.cv);
 FUNC_1(&VAR_0.sigio);
 FUNC_3(&VAR_0.mtx);
 return (0);
}
