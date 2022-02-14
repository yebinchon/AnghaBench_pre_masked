
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spinlock_t ;
struct TYPE_4__ {long long counter; } ;
typedef TYPE_1__ atomic64_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

long long FUNC_3(long long VAR_0, atomic64_t *VAR_1)
{
 unsigned long VAR_2;
 spinlock_t *VAR_3 = FUNC_0(VAR_1);
 long long VAR_4;

 FUNC_1(VAR_3, VAR_2);
 VAR_4 = VAR_1->counter -= VAR_0;
 FUNC_2(VAR_3, VAR_2);
 return VAR_4;
}
