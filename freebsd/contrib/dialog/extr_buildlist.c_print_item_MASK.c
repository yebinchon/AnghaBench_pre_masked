
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_8__ {scalar_t__ no_items; int no_tags; } ;
struct TYPE_7__ {int item_x; int check_x; } ;
struct TYPE_6__ {char* name; char* text; int help; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;
typedef TYPE_2__ ALL_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,int,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static void
FUNC_7(ALL_DATA * VAR_4,
    WINDOW *VAR_5,
    DIALOG_LISTITEM * VAR_6,
    int VAR_7,
    int VAR_8)
{
    chtype VAR_9 = FUNC_1(VAR_5);
    int VAR_10;
    bool VAR_11 = (!VAR_2.no_tags && !VAR_2.no_items);
    bool VAR_12 = VAR_1;
    int VAR_13 = (VAR_4->item_x - VAR_4->check_x - 1);
    const char *VAR_14 = (VAR_2.no_items
   ? VAR_6->name
   : VAR_6->text);


    FUNC_0(VAR_5, VAR_3);
    (void) FUNC_6(VAR_5, VAR_7, 0);
    for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_5); VAR_10++)
 (void) FUNC_5(VAR_5, ' ');

    (void) FUNC_6(VAR_5, VAR_7, VAR_4->check_x);
    FUNC_0(VAR_5, VAR_3);

    if (VAR_11) {
 FUNC_3(VAR_5, VAR_6->name, VAR_13, VAR_12, VAR_8);
 (void) FUNC_5(VAR_5, ' ');
 VAR_12 = VAR_0;
    }

    (void) FUNC_6(VAR_5, VAR_7, VAR_4->item_x);
    VAR_13 = (FUNC_4(VAR_5) - VAR_4->item_x + 1);
    FUNC_3(VAR_5, VAR_14, VAR_13, VAR_12, VAR_8);

    if (VAR_8) {
 FUNC_2(VAR_6->help);
    }
    FUNC_0(VAR_5, VAR_9);
}
