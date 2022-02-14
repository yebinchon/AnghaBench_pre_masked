
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
struct filedesc {int * fd_cdir; } ;
struct export_fd_buf {int remainder; struct sbuf* sb; struct filedesc* fdp; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (int *,int ,int ,struct export_fd_buf*) ;
 int FUNC_5 (struct filedesc*) ;
 struct filedesc* FUNC_6 (struct proc*) ;
 int FUNC_7 (struct export_fd_buf*,int ) ;
 struct export_fd_buf* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct proc *VAR_6, struct sbuf *VAR_7, ssize_t VAR_8)
{
 struct filedesc *VAR_9;
 struct export_fd_buf *VAR_10;
 int VAR_11;

 FUNC_2(VAR_6, VAR_3);

 VAR_9 = FUNC_6(VAR_6);
 FUNC_3(VAR_6);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_4, VAR_5);
 VAR_10->fdp = VAR_9;
 VAR_10->sb = VAR_7;
 VAR_10->remainder = VAR_8;

 FUNC_0(VAR_9);
 if (VAR_9->fd_cdir == ((void*)0))
  VAR_11 = VAR_0;
 else {
  FUNC_9(VAR_9->fd_cdir);
  VAR_11 = FUNC_4(VAR_9->fd_cdir, VAR_2,
      VAR_1, VAR_10);
 }
 FUNC_1(VAR_9);
 FUNC_5(VAR_9);
 FUNC_7(VAR_10, VAR_4);
 return (VAR_11);
}
