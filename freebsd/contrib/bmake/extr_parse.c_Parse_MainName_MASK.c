
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int name; int cohorts; } ;
typedef int Lst ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,int ) ;
 TYPE_1__* VAR_4 ;

Lst
FUNC_5(void)
{
    Lst VAR_5;

    VAR_5 = FUNC_2(VAR_0);

    if (VAR_4 == ((void*)0)) {
 FUNC_3("no target to make.");

    } else if (VAR_4->type & VAR_2) {
 (void)FUNC_0(VAR_5, VAR_4);
 FUNC_1(VAR_5, VAR_4->cohorts, VAR_1);
    }
    else
 (void)FUNC_0(VAR_5, VAR_4);
    FUNC_4(".TARGETS", VAR_4->name, VAR_3);
    return (VAR_5);
}
