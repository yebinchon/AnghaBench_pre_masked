
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ default_item; } ;
struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

int
FUNC_1(DIALOG_FORMITEM * VAR_1)
{
    int VAR_2 = 0;

    if (VAR_0.default_item != 0) {
 int VAR_3 = 0;
 while (VAR_1->name != 0) {
     if (!FUNC_0(VAR_0.default_item, VAR_1->name)) {
  VAR_2 = VAR_3;
  break;
     }
     ++VAR_1;
     VAR_3++;
 }
    }
    return VAR_2;
}
