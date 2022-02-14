
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int h_Spinlock; int freeMemSize; } ;
typedef TYPE_1__ t_MM ;
typedef scalar_t__ t_Handle ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

uint64_t FUNC_5(t_Handle VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
    t_MM *VAR_4 = (t_MM *)VAR_1;
    uint64_t VAR_5 = VAR_2 + VAR_3;
    uint32_t VAR_6;

    FUNC_0(VAR_4);

    VAR_6 = FUNC_3(VAR_4->h_Spinlock);

    if ( FUNC_2( VAR_4, VAR_2, VAR_5 ) != VAR_0 )
    {
        FUNC_4(VAR_4->h_Spinlock, VAR_6);
        return (uint64_t)(0);
    }

    if ( FUNC_1 ( VAR_4, VAR_2, VAR_5 ) != VAR_0 )
    {
        FUNC_4(VAR_4->h_Spinlock, VAR_6);
        return (uint64_t)(0);
    }


    VAR_4->freeMemSize += VAR_3;

    FUNC_4(VAR_4->h_Spinlock, VAR_6);

    return (VAR_3);
}
