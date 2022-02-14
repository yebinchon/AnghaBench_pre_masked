
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rlimit {int dummy; } ;
struct __getrlimit_args {scalar_t__ which; int rlp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rlimit*,int ,int) ;
 int FUNC_1 (struct thread*,scalar_t__,struct rlimit*) ;

int
FUNC_2(struct thread *VAR_2, struct __getrlimit_args *VAR_3)
{
 struct rlimit VAR_4;
 int VAR_5;

 if (VAR_3->which >= VAR_1)
  return (VAR_0);
 FUNC_1(VAR_2, VAR_3->which, &VAR_4);
 VAR_5 = FUNC_0(&VAR_4, VAR_3->rlp, sizeof(struct rlimit));
 return (VAR_5);
}
