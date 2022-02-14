
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_conn {size_t state; int lock; int timeout; } ;
struct TYPE_2__ {int * timeout_table; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ip_vs_conn *VAR_2)
{
 FUNC_0(&VAR_2->lock);
 VAR_2->state = VAR_0;
 VAR_2->timeout = VAR_1.timeout_table[VAR_0];
 FUNC_1(&VAR_2->lock);
}
