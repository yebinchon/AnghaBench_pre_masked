
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct pdfork_args {int fdp; int flags; } ;
struct fork_req {int fr_flags; int* fr_pidp; int* fr_pd_fd; int fr_pd_flags; } ;
typedef int fr ;
typedef int fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fork_req*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct thread*,struct fork_req*) ;

int
FUNC_3(struct thread *VAR_3, struct pdfork_args *VAR_4)
{
 struct fork_req VAR_5;
 int VAR_6, VAR_7, VAR_8;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.fr_flags = VAR_0 | VAR_1 | VAR_2;
 VAR_5.fr_pidp = &VAR_8;
 VAR_5.fr_pd_fd = &VAR_7;
 VAR_5.fr_pd_flags = VAR_4->flags;





 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_6 == 0) {
  VAR_3->td_retval[0] = VAR_8;
  VAR_3->td_retval[1] = 0;
  VAR_6 = FUNC_1(&VAR_7, VAR_4->fdp, sizeof(VAR_7));
 }
 return (VAR_6);
}
