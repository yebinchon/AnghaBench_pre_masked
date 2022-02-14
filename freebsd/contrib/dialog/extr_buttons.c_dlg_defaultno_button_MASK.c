
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nocancel; scalar_t__ defaultno; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(void)
{
    int VAR_2 = 0;

    if (VAR_1.defaultno && !VAR_1.nocancel) {
 while (FUNC_1(VAR_2) != VAR_0)
     ++VAR_2;
    }
    FUNC_0(("# dlg_defaultno_button() = %d\n", VAR_2));
    return VAR_2;
}
