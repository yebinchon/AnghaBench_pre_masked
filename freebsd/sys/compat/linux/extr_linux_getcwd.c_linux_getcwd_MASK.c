
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct linux_getcwd_args {int bufsize; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct thread*,char*,int ,int,int ) ;
 char* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct thread *VAR_5, struct linux_getcwd_args *VAR_6)
{
 char *VAR_7;
 int VAR_8, VAR_9;




 if (VAR_6->bufsize < 2)
  return (VAR_0);

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3);

 VAR_8 = FUNC_2(VAR_5, VAR_7, VAR_4, VAR_6->bufsize,
     VAR_1);
 if (VAR_8 == 0) {
  VAR_9 = FUNC_4(VAR_7) + 1;
  VAR_8 = FUNC_0(VAR_7, VAR_6->buf, VAR_9);
  if (VAR_8 == 0)
   VAR_5->td_retval[0] = VAR_9;
 }

 FUNC_1(VAR_7, VAR_2);
 return (VAR_8);
}
