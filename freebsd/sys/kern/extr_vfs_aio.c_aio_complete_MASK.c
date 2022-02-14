
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {int kaio_jobqueue; } ;
struct TYPE_3__ {int error; long status; } ;
struct TYPE_4__ {TYPE_1__ _aiocb_private; } ;
struct kaiocb {int jobflags; struct proc* userproc; TYPE_2__ uaiocb; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct kaiocb*,int ) ;
 int FUNC_4 (struct proc*,struct kaiocb*) ;
 int VAR_3 ;

void
FUNC_5(struct kaiocb *VAR_4, long VAR_5, int VAR_6)
{
 struct kaioinfo *VAR_7;
 struct proc *VAR_8;

 VAR_4->uaiocb._aiocb_private.error = VAR_6;
 VAR_4->uaiocb._aiocb_private.status = VAR_5;

 VAR_8 = VAR_4->userproc;
 VAR_7 = VAR_8->p_aioinfo;

 FUNC_0(VAR_7);
 FUNC_2(!(VAR_4->jobflags & VAR_1),
     ("duplicate aio_complete"));
 VAR_4->jobflags |= VAR_1;
 if ((VAR_4->jobflags & (VAR_2 | VAR_0)) == 0) {
  FUNC_3(&VAR_7->kaio_jobqueue, VAR_4, VAR_3);
  FUNC_4(VAR_8, VAR_4);
 }
 FUNC_1(VAR_7);
}
