
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int h_App; int (* f_Exception ) (int ,int ) ;int h_Fm; } ;
typedef TYPE_1__ t_FmPort ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(t_Handle VAR_3, uint32_t VAR_4)
{
    t_FmPort *VAR_5 = (t_FmPort*)VAR_3;

    FUNC_0(((VAR_4 & (VAR_1 | VAR_0)) && FUNC_1(VAR_5->h_Fm)) ||
                !FUNC_1(VAR_5->h_Fm));

    if (VAR_4 & VAR_1)
        FUNC_2(VAR_5);
    if ((VAR_4 & VAR_0) && VAR_5->f_Exception)
        VAR_5->f_Exception(VAR_5->h_App, VAR_2);
}
