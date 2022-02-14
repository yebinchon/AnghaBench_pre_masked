
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pthread {int dummy; } ;
struct TYPE_4__ {TYPE_3__* thr_extra; } ;
typedef TYPE_1__ spinlock_t ;
struct TYPE_5__ {TYPE_1__* owner; int lock; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pthread*,int *) ;
 int FUNC_2 (struct pthread*,int *) ;
 struct pthread* FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(spinlock_t *VAR_4)
{
 struct pthread *VAR_5 = FUNC_3();

 FUNC_1(VAR_5, &VAR_3);
 if ((VAR_4->thr_extra == ((void*)0)) && (VAR_2 < VAR_0)) {
  VAR_4->thr_extra = &VAR_1[VAR_2];
  FUNC_4(&VAR_1[VAR_2].lock);
  VAR_1[VAR_2].owner = VAR_4;
  VAR_2++;
 }
 FUNC_2(VAR_5, &VAR_3);
 if (VAR_4->thr_extra == ((void*)0))
  FUNC_0("Warning: exceeded max spinlocks");
}
