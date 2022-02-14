
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_9__ {int * items; TYPE_1__* list; } ;
struct TYPE_8__ {int top_index; int * win; } ;
typedef TYPE_1__ MY_DATA ;
typedef int DIALOG_LISTITEM ;
typedef TYPE_2__ ALL_DATA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int,int) ;
 scalar_t__ FUNC_7 (int *,char) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(ALL_DATA * VAR_1,
      int VAR_2,
      int VAR_3)
{
    MY_DATA *VAR_4 = VAR_1->list + VAR_3;
    DIALOG_LISTITEM *VAR_5 = (FUNC_5(VAR_1, VAR_2)
          ? VAR_1->items + VAR_2
          : 0);
    WINDOW *VAR_6 = VAR_4->win;
    int VAR_7, VAR_8;
    int VAR_9 = 0;
    int VAR_10 = FUNC_2(VAR_1, VAR_4->top_index, VAR_3);
    int VAR_11 = FUNC_1(VAR_6);

    FUNC_0(("! print_1_list %d %s, top %d\n", VAR_2, FUNC_4(VAR_3), VAR_10));
    for (VAR_7 = VAR_8 = 0; VAR_8 < VAR_11; VAR_7++) {
 int VAR_12 = VAR_7 + VAR_10;
 if (VAR_12 < 0) {
     continue;
 } else if (FUNC_3(VAR_4, VAR_12)) {
     FUNC_6(VAR_1,
         VAR_6,
         FUNC_3(VAR_4, VAR_12),
         VAR_8, FUNC_3(VAR_4, VAR_12) == VAR_5);
     VAR_9 = ++VAR_8;
 } else {
     break;
 }
    }
    if (FUNC_8(VAR_6, VAR_9, 0) != VAR_0) {
 while (FUNC_7(VAR_6, ' ') != VAR_0) {
     ;
 }
    }
    (void) FUNC_9(VAR_6);
}
