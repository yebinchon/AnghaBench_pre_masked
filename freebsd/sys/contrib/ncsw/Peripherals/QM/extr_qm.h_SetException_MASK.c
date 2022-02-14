
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int exceptions; } ;
typedef TYPE_1__ t_Qm ;
typedef int t_Error ;
typedef int e_QmExceptions ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static __inline__ t_Error FUNC_3(t_Qm *VAR_3, e_QmExceptions VAR_4, bool VAR_5)
{
    uint32_t VAR_6 = 0;

    FUNC_0(VAR_3);

    FUNC_1(VAR_6, VAR_4);
    if(VAR_6)
    {
        if (VAR_5)
            VAR_3->exceptions |= VAR_6;
        else
            VAR_3->exceptions &= ~VAR_6;
   }
    else
        FUNC_2(VAR_2, VAR_0, ("Undefined exception"));

    return VAR_1;
}
