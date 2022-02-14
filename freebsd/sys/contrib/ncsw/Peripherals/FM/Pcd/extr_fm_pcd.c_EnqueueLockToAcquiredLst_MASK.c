
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int node; } ;
typedef TYPE_1__ t_FmPcdLock ;
struct TYPE_6__ {int h_Spinlock; int acquiredLocksLst; } ;
typedef TYPE_2__ t_FmPcd ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(t_FmPcd *VAR_0, t_FmPcdLock *VAR_1)
{
    uint32_t VAR_2;

    VAR_2 = FUNC_1(VAR_0->h_Spinlock);
    FUNC_0(&VAR_1->node, &VAR_0->acquiredLocksLst);
    FUNC_2(VAR_0->h_Spinlock, VAR_2);
}
