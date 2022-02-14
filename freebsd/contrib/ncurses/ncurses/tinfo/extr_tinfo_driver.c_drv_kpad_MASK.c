
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int _tried; } ;
struct TYPE_6__ {TYPE_2__* csp; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_2__ SCREEN ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_5, int VAR_6)
{
    int VAR_7 = VAR_0;
    SCREEN *VAR_8;

    FUNC_0();

    VAR_8 = VAR_5->csp;

    if (VAR_8) {
 if (VAR_6) {
     (void) FUNC_1(VAR_8, "keypad_xmit", VAR_4);
 } else if (!VAR_6 && VAR_3) {
     (void) FUNC_1(VAR_8, "keypad_local", VAR_3);
 }
 if (VAR_6 && !VAR_8->_tried) {
     FUNC_2(VAR_8);
     VAR_8->_tried = VAR_2;
 }
 VAR_7 = VAR_1;
    }

    return VAR_7;
}
