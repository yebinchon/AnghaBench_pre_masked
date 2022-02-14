
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
struct TYPE_7__ {int check_x; int use_width; scalar_t__ checkflag; int item_x; } ;
struct TYPE_6__ {char* name; char* text; size_t state; int help; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;
typedef TYPE_2__ ALL_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,int,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,char*,char const) ;

__attribute__((used)) static void
FUNC_8(ALL_DATA * VAR_7,
    WINDOW *VAR_8,
    DIALOG_LISTITEM * VAR_9,
    const char *VAR_10,
    int VAR_11,
    int VAR_12)
{
    chtype VAR_13 = FUNC_1(VAR_8);
    int VAR_14;
    bool VAR_15 = (!VAR_5.no_tags && !VAR_5.no_items);
    bool VAR_16 = VAR_2;
    int VAR_17 = (FUNC_4(VAR_8) - VAR_7->check_x + 1);
    const char *VAR_18 = (VAR_5.no_items
   ? VAR_9->name
   : VAR_9->text);


    FUNC_0(VAR_8, VAR_6);
    (void) FUNC_6(VAR_8, VAR_11, 0);
    for (VAR_14 = 0; VAR_14 < VAR_7->use_width; VAR_14++)
 (void) FUNC_5(VAR_8, ' ');

    (void) FUNC_6(VAR_8, VAR_11, VAR_7->check_x);
    FUNC_0(VAR_8, VAR_12 ? VAR_4 : VAR_3);
    (void) FUNC_7(VAR_8,
     (VAR_7->checkflag == VAR_1) ? "[%c]" : "(%c)",
     VAR_10[VAR_9->state]);
    FUNC_0(VAR_8, VAR_6);
    (void) FUNC_5(VAR_8, ' ');

    if (VAR_15) {
 FUNC_3(VAR_8, VAR_9->name, VAR_17, VAR_16, VAR_12);
 VAR_16 = VAR_0;
    }

    (void) FUNC_6(VAR_8, VAR_11, VAR_7->item_x);
    FUNC_3(VAR_8, VAR_18, VAR_17, VAR_16, VAR_12);

    if (VAR_12) {
 FUNC_2(VAR_9->help);
    }
    FUNC_0(VAR_8, VAR_13);
}
