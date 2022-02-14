
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _mouse_type; int _mouse_mask; } ;
typedef TYPE_1__ SCREEN ;


 int VAR_0 ;





 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(SCREEN *VAR_2)

{
    FUNC_0(VAR_0, ("_nc_mouse_resume() called"));

    switch (VAR_2->_mouse_type) {
    case 128:

 if (VAR_2->_mouse_mask)
     FUNC_1(VAR_2, VAR_1);
 break;
    case 131:
 break;
    }
}
