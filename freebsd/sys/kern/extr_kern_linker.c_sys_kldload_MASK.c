
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct kldload_args {int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct thread*,char*,int*) ;
 char* FUNC_3 (int ,int ,int ) ;

int
FUNC_4(struct thread *VAR_3, struct kldload_args *VAR_4)
{
 char *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 VAR_3->td_retval[0] = -1;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 VAR_6 = FUNC_0(VAR_4->file, VAR_5, VAR_0, ((void*)0));
 if (VAR_6 == 0) {
  VAR_6 = FUNC_2(VAR_3, VAR_5, &VAR_7);
  if (VAR_6 == 0)
   VAR_3->td_retval[0] = VAR_7;
 }
 FUNC_1(VAR_5, VAR_1);
 return (VAR_6);
}
