
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fmPortsLst; scalar_t__ ccTreeBaseAddr; } ;
typedef TYPE_1__ t_FmPcdCcTree ;
typedef int t_FmPcd ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(t_FmPcdCcTree *VAR_0, t_FmPcd *VAR_1)
{
    if (VAR_0)
    {
        if (VAR_0->ccTreeBaseAddr)
        {
            FUNC_0(FUNC_1(VAR_1),
                             FUNC_3(VAR_0->ccTreeBaseAddr));
            VAR_0->ccTreeBaseAddr = 0;
        }

        FUNC_2(&VAR_0->fmPortsLst);

        FUNC_4(VAR_0);
    }
}
