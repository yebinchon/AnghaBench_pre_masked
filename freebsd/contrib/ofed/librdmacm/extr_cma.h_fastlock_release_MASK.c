
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sem; int cnt; } ;
typedef TYPE_1__ fastlock_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(fastlock_t *VAR_0)
{
 if (FUNC_0(&VAR_0->cnt, 1) > 1)
  FUNC_1(&VAR_0->sem);
}
