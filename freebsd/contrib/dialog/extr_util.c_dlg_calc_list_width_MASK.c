
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ no_items; scalar_t__ no_tags; } ;
struct TYPE_4__ {int name; int text; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(int VAR_1, DIALOG_LISTITEM * VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;
    int VAR_7 = ((VAR_0.no_tags ? 1 : 0)
  + (VAR_0.no_items ? 2 : 0));

    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
 switch (VAR_7) {
 case 0:

 case 1:
     if ((VAR_3 = FUNC_0(VAR_2[VAR_4].name)) > VAR_5)
  VAR_5 = VAR_3;
     if ((VAR_3 = FUNC_0(VAR_2[VAR_4].text)) > VAR_6)
  VAR_6 = VAR_3;
     break;
 case 2:

 case 3:
     if ((VAR_3 = FUNC_0(VAR_2[VAR_4].name)) > VAR_5)
  VAR_5 = VAR_3;
     break;
 }
    }
    return VAR_5 + VAR_6;
}
