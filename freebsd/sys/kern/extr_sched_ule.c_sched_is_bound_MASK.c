
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int ts_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct thread*) ;

int
FUNC_2(struct thread *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 return (FUNC_1(VAR_2)->ts_flags & VAR_1);
}
