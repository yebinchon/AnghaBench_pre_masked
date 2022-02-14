
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int hmcdBasePtr; } ;
typedef TYPE_1__ t_Hmtd ;
struct TYPE_5__ {scalar_t__ physicalMuramBase; int h_Hc; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(uint8_t *VAR_1, uint8_t *VAR_2, uint8_t *VAR_3,
                      t_FmPcd *VAR_4)
{
    t_Error VAR_5;


    FUNC_1(VAR_1, (uint8_t*)VAR_2, 16);

    FUNC_3(
            ((t_Hmtd *)VAR_1)->hmcdBasePtr,
            (uint32_t)(FUNC_4(VAR_3) - ((t_FmPcd*)VAR_4)->physicalMuramBase));

    VAR_5 = FUNC_0(
            VAR_4->h_Hc,
            (uint32_t)(FUNC_4(VAR_2) - VAR_4->physicalMuramBase),
            (uint32_t)(FUNC_4(VAR_1) - VAR_4->physicalMuramBase));
    if (VAR_5)
        FUNC_2(VAR_0, VAR_5, ("Failed in dynamic manip change, continued to the rest of the owners."));
}
