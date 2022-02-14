
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;
typedef int seqc_t ;
typedef int cap_rights_t ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct thread*,int,struct file**,int ,int *,int *) ;
 int * FUNC_2 (struct filedesc*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct filedesc*,int,int ) ;
 int FUNC_6 (struct file*,struct thread*) ;

int
FUNC_7(struct thread *VAR_2, int VAR_3, cap_rights_t *VAR_4, u_char *VAR_5,
    struct file **VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6, 0, VAR_4, ((void*)0));
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_1;
 return (VAR_7);
}
