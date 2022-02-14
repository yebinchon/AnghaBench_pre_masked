
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _mouse_initialized; int _mouse_type; scalar_t__ _mouse_events; int _mouse_eventp; } ;
typedef TYPE_1__ SCREEN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_5(SCREEN *VAR_4)

{
    bool VAR_5 = VAR_1;
    int VAR_6;

    if (VAR_4 != 0) {
 if (!VAR_4->_mouse_initialized) {
     VAR_4->_mouse_initialized = VAR_3;

     FUNC_3(VAR_2, ("_nc_mouse_init() called"));

     VAR_4->_mouse_eventp = FUNC_0(VAR_4);
     for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(VAR_4->_mouse_events + VAR_6);

     FUNC_4(VAR_4);

     FUNC_2(("_nc_mouse_init() set mousetype to %d", VAR_4->_mouse_type));
 }
 VAR_5 = VAR_4->_mouse_initialized;
    }
    return VAR_5;
}
