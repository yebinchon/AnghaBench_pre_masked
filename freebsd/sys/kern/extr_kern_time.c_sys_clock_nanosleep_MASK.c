
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct clock_nanosleep_args {int rmtp; int rqtp; int flags; int clock_id; } ;


 int FUNC_0 (struct thread*,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_0, struct clock_nanosleep_args *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1->clock_id, VAR_1->flags, VAR_1->rqtp,
     VAR_1->rmtp);
 return (FUNC_0(VAR_0, VAR_2));
}
