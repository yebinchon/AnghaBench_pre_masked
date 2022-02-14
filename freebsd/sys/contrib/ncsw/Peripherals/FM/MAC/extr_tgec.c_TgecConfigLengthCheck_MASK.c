
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int no_length_check_enable; struct TYPE_3__* p_TgecDriverParam; } ;
typedef TYPE_1__ t_Tgec ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static t_Error FUNC_2(t_Handle VAR_3, bool VAR_4)
{
    t_Tgec *VAR_5 = (t_Tgec *)VAR_3;

    FUNC_1(VAR_4);

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_TgecDriverParam, VAR_1);

    VAR_5->p_TgecDriverParam->no_length_check_enable = !VAR_4;

    return VAR_2;
}
