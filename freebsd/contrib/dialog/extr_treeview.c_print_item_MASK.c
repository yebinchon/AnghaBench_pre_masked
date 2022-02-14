
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_8__ {scalar_t__ no_items; } ;
struct TYPE_7__ {int check_x; int use_width; int item_x; scalar_t__ is_check; int * list; } ;
struct TYPE_6__ {char* name; char* text; size_t state; int help; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;
typedef TYPE_2__ ALL_DATA ;


 char VAR_0 ;
 int VAR_1 ;
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,char*,char const) ;

__attribute__((used)) static void
FUNC_8(ALL_DATA * VAR_9,
    DIALOG_LISTITEM * VAR_10,
    const char *VAR_11,
    int VAR_12,
    int VAR_13,
    int VAR_14)
{
    WINDOW *VAR_15 = VAR_9->list;
    chtype VAR_16 = FUNC_1(VAR_15);
    int VAR_17;
    bool VAR_18 = VAR_2;
    int VAR_19 = (FUNC_4(VAR_15) - VAR_9->check_x + 1);
    const char *VAR_20 = (VAR_5.no_items
   ? VAR_10->name
   : VAR_10->text);


    FUNC_0(VAR_15, VAR_8);
    (void) FUNC_6(VAR_15, VAR_13, 0);
    for (VAR_17 = 0; VAR_17 < VAR_9->use_width; VAR_17++)
 (void) FUNC_5(VAR_15, ' ');

    (void) FUNC_6(VAR_15, VAR_13, VAR_9->check_x);
    FUNC_0(VAR_15, VAR_14 ? VAR_4 : VAR_3);
    (void) FUNC_7(VAR_15,
     VAR_9->is_check ? "[%c]" : "(%c)",
     VAR_11[VAR_10->state]);
    FUNC_0(VAR_15, VAR_8);

    FUNC_0(VAR_15, VAR_14 ? VAR_7 : VAR_6);
    for (VAR_17 = 0; VAR_17 < VAR_12; ++VAR_17) {
 int VAR_21;
 (void) FUNC_6(VAR_15, VAR_13, VAR_9->item_x + VAR_1 * VAR_17);
 (void) FUNC_5(VAR_15, VAR_0);
 for (VAR_21 = VAR_1 - 1; VAR_21 > 0; --VAR_21)
     (void) FUNC_5(VAR_15, ' ');
    }
    (void) FUNC_6(VAR_15, VAR_13, VAR_9->item_x + VAR_1 * VAR_12);

    FUNC_3(VAR_15, VAR_20, VAR_19, VAR_18, VAR_14);

    if (VAR_14) {
 FUNC_2(VAR_10->help);
    }
    FUNC_0(VAR_15, VAR_16);
}
