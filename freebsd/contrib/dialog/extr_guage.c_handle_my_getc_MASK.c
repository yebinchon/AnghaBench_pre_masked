
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ input; } ;
typedef int MY_OBJ ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(DIALOG_CALLBACK * VAR_4, int VAR_5, int VAR_6, int *VAR_7)
{
    bool VAR_8 = VAR_3;

    *VAR_7 = VAR_0;
    if (VAR_4 != 0) {
 if (!VAR_6 && (VAR_5 == VAR_1)) {
     (void) FUNC_0(VAR_4);

     VAR_8 = (FUNC_1((MY_OBJ *) VAR_4) && (VAR_4->input != 0));
 }
    } else {
 VAR_8 = VAR_2;
    }
    return VAR_8;
}
