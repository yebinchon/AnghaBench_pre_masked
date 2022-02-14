
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rusage32 {int dummy; } ;
struct rusage {int dummy; } ;
struct freebsd32_getrusage_args {int rusage; int who; } ;
typedef int s32 ;


 int FUNC_0 (struct rusage32*,int ,int) ;
 int FUNC_1 (struct rusage*,struct rusage32*) ;
 int FUNC_2 (struct thread*,int ,struct rusage*) ;

int
FUNC_3(struct thread *VAR_0, struct freebsd32_getrusage_args *VAR_1)
{
 struct rusage32 VAR_2;
 struct rusage VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1->who, &VAR_3);
 if (VAR_4 == 0) {
  FUNC_1(&VAR_3, &VAR_2);
  VAR_4 = FUNC_0(&VAR_2, VAR_1->rusage, sizeof(VAR_2));
 }
 return (VAR_4);
}
