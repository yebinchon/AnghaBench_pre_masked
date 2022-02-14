
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_2__ {int readq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 priv_p VAR_5 = (priv_p )VAR_2->si_drv1;
 int VAR_6 = 0;

 if (VAR_3 & (VAR_0 | VAR_1) &&
     !FUNC_0(&VAR_5->readq))
  VAR_6 |= VAR_3 & (VAR_0 | VAR_1);

 return (VAR_6);
}
