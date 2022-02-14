
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_frame; } ;
struct reg {int dummy; } ;


 int FUNC_0 (struct reg*,int ,int) ;

int
FUNC_1(struct thread *VAR_0, struct reg *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->td_frame, sizeof(struct reg));
 return (0);
}
