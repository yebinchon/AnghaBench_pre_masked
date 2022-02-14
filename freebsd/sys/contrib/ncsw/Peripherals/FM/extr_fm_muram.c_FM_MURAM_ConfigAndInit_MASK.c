
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* t_Handle ;
struct TYPE_7__ {uintptr_t baseAddr; struct TYPE_7__* h_Mem; int size; } ;
typedef TYPE_1__ t_FmMuram ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__**,uintptr_t,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

t_Handle FUNC_5(uintptr_t VAR_5, uint32_t VAR_6)
{
    t_Handle VAR_7;
    t_FmMuram *VAR_8;

    if (!VAR_5)
    {
        FUNC_1(VAR_4, VAR_1, ("baseAddress 0 is not supported"));
        return ((void*)0);
    }

    if (VAR_5%4)
    {
        FUNC_1(VAR_4, VAR_1, ("baseAddress not 4 bytes aligned!"));
        return ((void*)0);
    }


    VAR_8 = (t_FmMuram *) FUNC_3(sizeof(t_FmMuram));
    if (!VAR_8)
    {
        FUNC_1(VAR_4, VAR_2, ("FM MURAM driver structure"));
        return ((void*)0);
    }
    FUNC_4(VAR_8, 0, sizeof(t_FmMuram));


    if ((FUNC_0(&VAR_7, VAR_5, VAR_6) != VAR_3) || (!VAR_7))
    {
        FUNC_2(VAR_8);
        FUNC_1(VAR_4, VAR_0, ("FM-MURAM partition!!!"));
        return ((void*)0);
    }


    VAR_8->baseAddr = VAR_5;
    VAR_8->size = VAR_6;
    VAR_8->h_Mem = VAR_7;

    return VAR_8;
}
