
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct seq_softc {int unit; scalar_t__ busy; int midi_number; int seq_lock; int mapper_cookie; int mapper; scalar_t__* midis; } ;
struct cdev {struct seq_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct seq_softc*) ;
 int FUNC_7 (struct seq_softc*) ;
 int FUNC_8 (struct seq_softc*) ;

int
FUNC_9(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 int VAR_5;
 struct seq_softc *VAR_6 = VAR_1->si_drv1;
 int VAR_7;

 if (VAR_6 == ((void*)0))
  return VAR_0;

 FUNC_0(2, FUNC_5("seq_close: unit %d.\n", VAR_6->unit));

 FUNC_3(&VAR_6->seq_lock);

 VAR_7 = VAR_0;
 if (VAR_6->busy == 0)
  goto err;

 FUNC_6(VAR_6);
 FUNC_7(VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_6->midi_number; VAR_5++)
  if (VAR_6->midis[VAR_5])
   FUNC_1(VAR_6->midis[VAR_5]);

 FUNC_2(VAR_6->mapper, VAR_6->mapper_cookie);

 FUNC_8(VAR_6);

 VAR_6->busy = 0;
 VAR_7 = 0;

err:
 FUNC_0(3, FUNC_5("seq_close: closed ret = %d.\n", VAR_7));
 FUNC_4(&VAR_6->seq_lock);
 return VAR_7;
}
