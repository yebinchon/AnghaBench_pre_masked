
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int flag; int h_Spinlock; } ;
typedef TYPE_1__ t_FmPcdLock ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static __inline__ bool FUNC_3(t_FmPcdLock *VAR_2)
{
    uint32_t VAR_3;

    FUNC_0(VAR_2);
    VAR_3 = FUNC_1(VAR_2->h_Spinlock);
    if (VAR_2->flag)
    {
        FUNC_2(VAR_2->h_Spinlock, VAR_3);
        return VAR_0;
    }
    VAR_2->flag = VAR_1;
    FUNC_2(VAR_2->h_Spinlock, VAR_3);
    return VAR_1;
}
