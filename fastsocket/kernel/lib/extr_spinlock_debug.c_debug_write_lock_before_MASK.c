
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; scalar_t__ owner; scalar_t__ owner_cpu; } ;
typedef TYPE_1__ rwlock_t ;


 int FUNC_0 (int,TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(rwlock_t *VAR_2)
{
 FUNC_0(VAR_2->magic != VAR_0, VAR_2, "bad magic");
 FUNC_0(VAR_2->owner == VAR_1, VAR_2, "recursion");
 FUNC_0(VAR_2->owner_cpu == FUNC_1(),
       VAR_2, "cpu recursion");
}
