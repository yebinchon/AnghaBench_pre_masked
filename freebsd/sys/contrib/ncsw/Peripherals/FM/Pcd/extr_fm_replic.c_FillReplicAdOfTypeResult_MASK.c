
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int nia; int plcrProfile; } ;
typedef TYPE_1__ t_AdOfTypeResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, bool VAR_4)
{
    t_AdOfTypeResult *VAR_5 = (t_AdOfTypeResult*)VAR_3;
    uint32_t VAR_6;

    VAR_6 = FUNC_0(VAR_5->plcrProfile);
    if (VAR_4)

        FUNC_1(VAR_5->plcrProfile,(VAR_6 & ~VAR_2));
    else

        FUNC_1(VAR_5->plcrProfile, (VAR_6 |VAR_2));


    VAR_6 = FUNC_0(VAR_5->nia);
    FUNC_1(VAR_5->nia,
        (VAR_6 | VAR_1 | VAR_0 ));
}
