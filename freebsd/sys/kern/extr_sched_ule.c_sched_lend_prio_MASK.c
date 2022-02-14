
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct thread {int td_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;

void
FUNC_1(struct thread *VAR_1, u_char VAR_2)
{

 VAR_1->td_flags |= VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
