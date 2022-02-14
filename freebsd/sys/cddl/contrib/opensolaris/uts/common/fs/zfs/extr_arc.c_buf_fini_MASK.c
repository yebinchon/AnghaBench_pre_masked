
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ht_mask; TYPE_1__* ht_locks; int ht_table; } ;
struct TYPE_3__ {int ht_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_5;

 FUNC_1(VAR_2.ht_table,
     (VAR_2.ht_mask + 1) * sizeof (void *));
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(&VAR_2.ht_locks[VAR_5].ht_lock);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_1);
}
