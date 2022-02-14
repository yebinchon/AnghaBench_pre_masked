
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rlimit {int dummy; } ;
struct __setrlimit_args {int which; int rlp; } ;


 int FUNC_0 (int ,struct rlimit*,int) ;
 int FUNC_1 (struct thread*,int ,struct rlimit*) ;

int
FUNC_2(struct thread *VAR_0, struct __setrlimit_args *VAR_1)
{
 struct rlimit VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1->rlp, &VAR_2, sizeof(struct rlimit))))
  return (VAR_3);
 VAR_3 = FUNC_1(VAR_0, VAR_1->which, &VAR_2);
 return (VAR_3);
}
