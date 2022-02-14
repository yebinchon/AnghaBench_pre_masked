
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int inUse; int scId; struct TYPE_8__* h_FmMacsec; } ;
typedef TYPE_1__ t_SecYSc ;
typedef TYPE_1__ t_FmMacsecSecY ;
typedef int t_Error ;
typedef scalar_t__ e_ScType ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static t_Error FUNC_4(t_FmMacsecSecY *VAR_5, t_SecYSc *VAR_6, e_ScType VAR_7)
{
    t_Error VAR_8 = VAR_0;

    FUNC_0(VAR_5);
    FUNC_0(VAR_5->h_FmMacsec);
    FUNC_0(VAR_6);

    if (VAR_7 == VAR_4)
    {
        if ((VAR_8 = FUNC_1(VAR_5->h_FmMacsec, VAR_6->scId)) != VAR_0)
            FUNC_3(VAR_2, VAR_8, VAR_3);
    }
    else
        if ((VAR_8 = FUNC_2(VAR_5->h_FmMacsec, VAR_6->scId)) != VAR_0)
            FUNC_3(VAR_2, VAR_8, VAR_3);

    VAR_6->inUse = VAR_1;

    return VAR_8;
}
