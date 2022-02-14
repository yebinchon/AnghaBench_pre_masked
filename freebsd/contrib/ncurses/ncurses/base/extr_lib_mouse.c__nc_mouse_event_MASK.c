
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int type; int buttons; int y; int x; } ;
struct TYPE_9__ {int z; int y; int x; int bstate; int id; } ;
struct TYPE_8__ {int _mouse_type; int _mouse_fd; size_t _sysmouse_head; size_t _sysmouse_tail; size_t _drv_mouse_head; size_t _drv_mouse_tail; TYPE_2__* _mouse_eventp; TYPE_2__* _drv_mouse_fifo; TYPE_2__* _sysmouse_fifo; } ;
typedef TYPE_1__ SCREEN ;
typedef TYPE_2__ MEVENT ;
typedef TYPE_3__ Gpm_Event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;





 void* FUNC_1 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,char**,int) ;

__attribute__((used)) static bool
FUNC_5(SCREEN *VAR_16)
{
    MEVENT *VAR_17 = VAR_16->_mouse_eventp;
    bool VAR_18 = VAR_6;

    (void) VAR_17;

    switch (VAR_16->_mouse_type) {
    case 128:
 break;
    case 131:
 break;
    }

    return VAR_18;
}
