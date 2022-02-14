
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int events; int h_App; int (* f_Event ) (int ,int ) ;} ;
typedef TYPE_1__ t_FmMacsecSecY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(t_Handle VAR_3, uint32_t VAR_4)
{
    t_FmMacsecSecY *VAR_5 = (t_FmMacsecSecY *)VAR_3;

    FUNC_1(VAR_4);
    FUNC_0(VAR_5, VAR_0);

    if (VAR_5->events & VAR_1)
        VAR_5->f_Event(VAR_5->h_App, VAR_2);
}
