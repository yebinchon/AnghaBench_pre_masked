
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int kaio_mtx; struct proc* p_aioinfo; int kaio_sync_task; int kaio_task; int kaio_syncready; int kaio_syncqueue; int kaio_liojoblist; int kaio_jobqueue; int kaio_done; int kaio_all; scalar_t__ kaio_buffer_count; scalar_t__ kaio_count; scalar_t__ kaio_active_count; scalar_t__ kaio_flags; } ;
struct kaioinfo {int kaio_mtx; struct kaioinfo* p_aioinfo; int kaio_sync_task; int kaio_task; int kaio_syncready; int kaio_syncqueue; int kaio_liojoblist; int kaio_jobqueue; int kaio_done; int kaio_all; scalar_t__ kaio_buffer_count; scalar_t__ kaio_count; scalar_t__ kaio_active_count; scalar_t__ kaio_flags; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,struct proc*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct proc* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct proc*) ;

void
FUNC_10(struct proc *VAR_9)
{
 struct kaioinfo *VAR_10;

 VAR_10 = FUNC_8(VAR_5, VAR_2);
 FUNC_7(&VAR_10->kaio_mtx, "aiomtx", ((void*)0), VAR_0 | VAR_1);
 VAR_10->kaio_flags = 0;
 VAR_10->kaio_active_count = 0;
 VAR_10->kaio_count = 0;
 VAR_10->kaio_buffer_count = 0;
 FUNC_3(&VAR_10->kaio_all);
 FUNC_3(&VAR_10->kaio_done);
 FUNC_3(&VAR_10->kaio_jobqueue);
 FUNC_3(&VAR_10->kaio_liojoblist);
 FUNC_3(&VAR_10->kaio_syncqueue);
 FUNC_3(&VAR_10->kaio_syncready);
 FUNC_4(&VAR_10->kaio_task, 0, VAR_3, VAR_9);
 FUNC_4(&VAR_10->kaio_sync_task, 0, VAR_4, VAR_10);
 FUNC_1(VAR_9);
 if (VAR_9->p_aioinfo == ((void*)0)) {
  VAR_9->p_aioinfo = VAR_10;
  FUNC_2(VAR_9);
 } else {
  FUNC_2(VAR_9);
  FUNC_6(&VAR_10->kaio_mtx);
  FUNC_9(VAR_5, VAR_10);
 }

 while (VAR_7 < FUNC_0(VAR_8, VAR_6))
  FUNC_5(((void*)0));
}
