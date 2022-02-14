
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct targ_softc {TYPE_1__ read_select; int user_ccb_queue; int abort_queue; int work_queue; int pending_ccb_queue; int * path; int * periph; int state; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct targ_softc*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct targ_softc* FUNC_3 (int,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct targ_softc *VAR_9;


 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0,
        VAR_1 | VAR_2);
 VAR_9->state = VAR_3;
 VAR_9->periph = ((void*)0);
 VAR_9->path = ((void*)0);

 FUNC_0(&VAR_9->pending_ccb_queue);
 FUNC_0(&VAR_9->work_queue);
 FUNC_0(&VAR_9->abort_queue);
 FUNC_0(&VAR_9->user_ccb_queue);
 FUNC_2(&VAR_9->read_select.si_note, ((void*)0));

 FUNC_1(VAR_9, VAR_4);
 return (0);
}
