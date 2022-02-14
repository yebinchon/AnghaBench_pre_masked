
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_button; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;

int
FUNC_2(void)
{
    int VAR_1, VAR_2;
    int VAR_3 = 0;

    if (VAR_0.default_button >= 0) {
 for (VAR_1 = 0; (VAR_2 = FUNC_1(VAR_1)) >= 0; VAR_1++) {
     if (VAR_2 == VAR_0.default_button) {
  VAR_3 = VAR_1;
  break;
     }
 }
    }
    FUNC_0(("# dlg_default_button() = %d\n", VAR_3));
    return VAR_3;
}
