
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockopt {int sopt_level; int sopt_name; size_t sopt_valsize; struct thread* sopt_td; void* sopt_val; int sopt_dir; } ;
struct socket {int dummy; } ;
struct file {struct socket* f_data; } ;
typedef size_t socklen_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct socket*,struct sockopt*) ;

int
FUNC_5(struct thread *VAR_3, int VAR_4, int VAR_5, int VAR_6, void *VAR_7,
    enum uio_seg VAR_8, socklen_t *VAR_9)
{
 struct socket *VAR_10;
 struct file *VAR_11;
 struct sockopt VAR_12;
 int VAR_13;

 if (VAR_7 == ((void*)0))
  *VAR_9 = 0;
 if ((int)*VAR_9 < 0)
  return (VAR_0);

 VAR_12.sopt_dir = VAR_1;
 VAR_12.sopt_level = VAR_5;
 VAR_12.sopt_name = VAR_6;
 VAR_12.sopt_val = VAR_7;
 VAR_12.sopt_valsize = (size_t)*VAR_9;
 switch (VAR_8) {
 case 128:
  VAR_12.sopt_td = VAR_3;
  break;
 case 129:
  VAR_12.sopt_td = ((void*)0);
  break;
 default:
  FUNC_3("kern_getsockopt called with bad valseg");
 }

 FUNC_0(VAR_4);
 VAR_13 = FUNC_2(VAR_3, VAR_4, &VAR_2,
     &VAR_11, ((void*)0), ((void*)0));
 if (VAR_13 == 0) {
  VAR_10 = VAR_11->f_data;
  VAR_13 = FUNC_4(VAR_10, &VAR_12);
  *VAR_9 = VAR_12.sopt_valsize;
  FUNC_1(VAR_11, VAR_3);
 }
 return (VAR_13);
}
