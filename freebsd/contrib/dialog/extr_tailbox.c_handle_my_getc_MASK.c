
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int input; } ;
struct TYPE_7__ {int hscroll; scalar_t__ old_hscroll; int buttons; } ;
typedef TYPE_1__ MY_OBJ ;
typedef TYPE_2__ DIALOG_CALLBACK ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_8(DIALOG_CALLBACK * VAR_6, int VAR_7, int VAR_8, int *VAR_9)
{
    MY_OBJ *VAR_10 = (MY_OBJ *) VAR_6;
    bool VAR_11 = VAR_3;

    if (!FUNC_7(VAR_6))
 return VAR_3;

    if (!VAR_8 && FUNC_2(VAR_7, VAR_10->buttons) == 0) {
 VAR_7 = 132;
 VAR_8 = VAR_5;
    }

    if (VAR_8) {
 switch (VAR_7) {
 case 132:
     *VAR_9 = VAR_1;
     VAR_11 = VAR_5;
     break;
 case 133:
     VAR_10->hscroll = 0;
     break;
 case 131:
     if (VAR_10->hscroll > 0) {
  VAR_10->hscroll -= 1;
     }
     break;
 case 130:
     if (VAR_10->hscroll < VAR_4)
  VAR_10->hscroll += 1;
     break;
 default:
     FUNC_0();
     break;
 }
 if ((VAR_10->hscroll != VAR_10->old_hscroll))
     FUNC_5(VAR_10);
    } else {
 switch (VAR_7) {
 case 129:
     FUNC_1(VAR_6->input);
     VAR_7 = FUNC_3(VAR_6->input);
     (void) FUNC_6(VAR_7, VAR_6->input);
     if (VAR_7 != VAR_2) {
  FUNC_4(VAR_6);
     }
     break;
 case 128:
     VAR_11 = VAR_5;
     *VAR_9 = VAR_0;
     break;
 default:
     FUNC_0();
     break;
 }
    }

    return !VAR_11;
}
