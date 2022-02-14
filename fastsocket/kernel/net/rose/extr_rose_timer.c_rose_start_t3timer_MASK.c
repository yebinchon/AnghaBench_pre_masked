
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {unsigned long data; scalar_t__ expires; int * function; } ;
struct rose_sock {TYPE_1__ timer; scalar_t__ t3; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 struct rose_sock* FUNC_2 (struct sock*) ;
 int VAR_1 ;

void FUNC_3(struct sock *VAR_2)
{
 struct rose_sock *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_3->timer);

 VAR_3->timer.data = (unsigned long)VAR_2;
 VAR_3->timer.function = &VAR_1;
 VAR_3->timer.expires = VAR_0 + VAR_3->t3;

 FUNC_0(&VAR_3->timer);
}
