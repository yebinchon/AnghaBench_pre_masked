
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snd_midi {scalar_t__ hiwat; int qlock; int lock; int wsel; int rsel; int outq; int inq; } ;
struct cdev {struct snd_midi* si_drv1; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct thread*,int *) ;

int
FUNC_5(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct snd_midi *VAR_7 = VAR_4->si_drv1;
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return 0;

 VAR_8 = 0;

 FUNC_2(&VAR_7->lock);
 FUNC_2(&VAR_7->qlock);

 if (VAR_5 & (VAR_0 | VAR_2))
  if (!FUNC_1(VAR_7->inq))
   VAR_5 |= VAR_5 & (VAR_0 | VAR_2);

 if (VAR_5 & (VAR_1 | VAR_3))
  if (FUNC_0(VAR_7->outq) < VAR_7->hiwat)
   VAR_5 |= VAR_5 & (VAR_1 | VAR_3);

 if (VAR_8 == 0) {
  if (VAR_5 & (VAR_0 | VAR_2))
   FUNC_4(VAR_6, &VAR_7->rsel);

  if (VAR_5 & (VAR_1 | VAR_3))
   FUNC_4(VAR_6, &VAR_7->wsel);
 }
 FUNC_3(&VAR_7->lock);
 FUNC_3(&VAR_7->qlock);

 return (VAR_8);
}
