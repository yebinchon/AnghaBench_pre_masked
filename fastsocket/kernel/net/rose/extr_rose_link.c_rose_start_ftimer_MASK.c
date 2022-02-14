
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; scalar_t__ expires; int * function; } ;
struct rose_neigh {TYPE_1__ ftimer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct rose_neigh *VAR_3)
{
 FUNC_1(&VAR_3->ftimer);

 VAR_3->ftimer.data = (unsigned long)VAR_3;
 VAR_3->ftimer.function = &VAR_1;
 VAR_3->ftimer.expires =
  VAR_0 + FUNC_2(VAR_2);

 FUNC_0(&VAR_3->ftimer);
}
