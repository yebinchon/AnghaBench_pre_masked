
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {scalar_t__ kaio_count; int kaio_liojoblist; int kaio_all; int kaio_done; } ;
struct kaiocb {int jobflags; scalar_t__ lioj_count; int cred; scalar_t__ fd_file; int ksi; int klist; int lioj_ksi; int lioj_finished_count; struct kaiocb* lio; struct proc* userproc; } ;
struct aioliojob {int jobflags; scalar_t__ lioj_count; int cred; scalar_t__ fd_file; int ksi; int klist; int lioj_ksi; int lioj_finished_count; struct aioliojob* lio; struct proc* userproc; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*,int ) ;
 int FUNC_2 (struct kaioinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (int *,struct kaiocb*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 struct proc* VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,struct kaiocb*) ;

__attribute__((used)) static int
FUNC_13(struct kaiocb *VAR_10)
{
 struct kaioinfo *VAR_11;
 struct aioliojob *VAR_12;
 struct proc *VAR_13;

 VAR_13 = VAR_10->userproc;
 FUNC_3(VAR_5 == VAR_13);
 VAR_11 = VAR_13->p_aioinfo;
 FUNC_3(VAR_11 != ((void*)0));

 FUNC_1(VAR_11, VAR_1);
 FUNC_3(VAR_10->jobflags & VAR_0);

 FUNC_7(&VAR_8, 1);

 VAR_11->kaio_count--;
 FUNC_3(VAR_11->kaio_count >= 0);

 FUNC_6(&VAR_11->kaio_done, VAR_10, VAR_9);
 FUNC_6(&VAR_11->kaio_all, VAR_10, VAR_4);

 VAR_12 = VAR_10->lio;
 if (VAR_12) {
  VAR_12->lioj_count--;
  VAR_12->lioj_finished_count--;

  if (VAR_12->lioj_count == 0) {
   FUNC_6(&VAR_11->kaio_liojoblist, VAR_12, VAR_7);

   FUNC_10(&VAR_12->klist, VAR_6, 1);
   FUNC_4(VAR_13);
   FUNC_11(&VAR_12->lioj_ksi);
   FUNC_5(VAR_13);
   FUNC_12(VAR_3, VAR_12);
  }
 }


 FUNC_10(&VAR_10->klist, VAR_6, 1);
 FUNC_4(VAR_13);
 FUNC_11(&VAR_10->ksi);
 FUNC_5(VAR_13);

 FUNC_2(VAR_11);
 if (VAR_10->fd_file)
  FUNC_9(VAR_10->fd_file, VAR_6);
 FUNC_8(VAR_10->cred);
 FUNC_12(VAR_2, VAR_10);
 FUNC_0(VAR_11);

 return (0);
}
