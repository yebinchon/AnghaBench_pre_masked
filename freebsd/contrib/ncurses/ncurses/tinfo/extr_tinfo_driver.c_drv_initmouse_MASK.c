
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int term_names; } ;
struct TYPE_8__ {TYPE_1__ type; } ;
struct TYPE_7__ {int _keytry; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef TYPE_2__ SCREEN ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(TERMINAL_CONTROL_BLOCK * VAR_4)
{
    SCREEN *VAR_5;

    FUNC_0();
    FUNC_1();


    if (VAR_5 != 0) {
 if (VAR_2 != 0) {
     if (!FUNC_5(VAR_2, VAR_3)
  || FUNC_6(FUNC_2(VAR_5)->type.term_names, "xterm") != 0) {
  FUNC_4(VAR_5);
     }
 } else if (FUNC_6(FUNC_2(VAR_5)->type.term_names, "xterm") != 0) {
     if (FUNC_3(&(VAR_5->_keytry), VAR_3, VAR_0) == VAR_1)
  FUNC_4(VAR_5);
 }
    }
}
