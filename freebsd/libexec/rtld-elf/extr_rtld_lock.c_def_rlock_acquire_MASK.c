
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
typedef TYPE_1__ Lock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
    Lock *VAR_3 = (Lock *)VAR_2;

    FUNC_0(&VAR_3->lock, VAR_0);
    while (VAR_3->lock & VAR_1)
     ;
}
