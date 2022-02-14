
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; scalar_t__ expires; int * function; } ;
struct lapb_cb {TYPE_1__ t1timer; scalar_t__ t1; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct lapb_cb *VAR_2)
{
 FUNC_1(&VAR_2->t1timer);

 VAR_2->t1timer.data = (unsigned long)VAR_2;
 VAR_2->t1timer.function = &VAR_1;
 VAR_2->t1timer.expires = VAR_0 + VAR_2->t1;

 FUNC_0(&VAR_2->t1timer);
}
