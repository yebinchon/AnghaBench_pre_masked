
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socketpair_args {int rsv; int protocol; int type; int domain; } ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct thread*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,int*) ;

int
FUNC_3(struct thread *VAR_0, struct socketpair_args *VAR_1)
{
 int VAR_2, VAR_3[2];

 VAR_2 = FUNC_2(VAR_0, VAR_1->domain, VAR_1->type,
     VAR_1->protocol, VAR_3);
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_2 = FUNC_0(VAR_3, VAR_1->rsv, 2 * sizeof(int));
 if (VAR_2 != 0) {
  (void)FUNC_1(VAR_0, VAR_3[0]);
  (void)FUNC_1(VAR_0, VAR_3[1]);
 }
 return (VAR_2);
}
