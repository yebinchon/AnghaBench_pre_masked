
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_lock {int count; unsigned int locktype; int signature; int * lock; } ;
struct TYPE_2__ {int (* free ) (int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct debug_lock*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, unsigned VAR_4)
{
 struct debug_lock *VAR_5 = VAR_3;
 FUNC_0(VAR_5->count == 0);
 FUNC_0(VAR_4 == VAR_5->locktype);
 FUNC_0(VAR_0 == VAR_5->signature);
 if (VAR_2.free) {
  VAR_2.free(VAR_5->lock,
      VAR_5->locktype|VAR_1);
 }
 VAR_5->lock = ((void*)0);
 VAR_5->count = -100;
 VAR_5->signature = 0x12300fda;
 FUNC_1(VAR_5);
}
