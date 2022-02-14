
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int hdl; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_4(TERMINAL_CONTROL_BLOCK * VAR_5)
{
    bool VAR_6 = VAR_0;

    FUNC_0();
    if (FUNC_3(VAR_5)) {
 WORD VAR_7 = VAR_1 | VAR_3 | VAR_2;
 FUNC_1(VAR_5->hdl, VAR_7);
 FUNC_2(VAR_5);
 VAR_6 = VAR_4;
    }
    return VAR_6;
}
