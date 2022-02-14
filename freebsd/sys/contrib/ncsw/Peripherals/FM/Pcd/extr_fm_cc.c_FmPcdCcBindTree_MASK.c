
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int ccTreeBaseAddr; } ;
typedef TYPE_1__ t_FmPcdCcTree ;
struct TYPE_5__ {scalar_t__ physicalMuramBase; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

t_Error FUNC_5(t_Handle VAR_3, t_Handle VAR_4,
                        t_Handle VAR_5, uint32_t *VAR_6,
                        t_Handle VAR_7)
{
    t_FmPcd *VAR_8 = (t_FmPcd*)VAR_3;
    t_FmPcdCcTree *VAR_9 = (t_FmPcdCcTree *)VAR_5;
    t_Error VAR_10 = VAR_1;

    FUNC_1(VAR_3, VAR_0);
    FUNC_1(VAR_5, VAR_0);



    VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_7, VAR_5, VAR_2);

    if (VAR_10 == VAR_1)
        FUNC_3(VAR_9, VAR_2);

    *VAR_6 = (uint32_t)(FUNC_4(
            FUNC_2(VAR_9->ccTreeBaseAddr))
            - VAR_8->physicalMuramBase);

    return VAR_10;
}
