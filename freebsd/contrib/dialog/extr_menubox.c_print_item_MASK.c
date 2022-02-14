
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
struct TYPE_7__ {int item_x; int tag_x; int menu_width; } ;
struct TYPE_6__ {char* name; char* text; int help; } ;
typedef int const Mode ;
typedef TYPE_1__ DIALOG_LISTITEM ;
typedef TYPE_2__ ALL_DATA ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

 int VAR_3 ;

 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int,int,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,int,int,int const) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,char*,int,char*) ;

__attribute__((used)) static void
FUNC_8(ALL_DATA * VAR_9,
    WINDOW *VAR_10,
    DIALOG_LISTITEM * VAR_11,
    int VAR_12,
    Mode VAR_13,
    bool VAR_14)
{
    chtype VAR_15 = FUNC_3(VAR_10);
    int VAR_16;
    int VAR_17 = (VAR_9->item_x - VAR_9->tag_x - VAR_1);
    int VAR_18 = VAR_9->menu_width;
    int VAR_19 = VAR_9->item_x;
    int VAR_20 = FUNC_0(VAR_12);
    bool VAR_21 = (!VAR_5.no_tags && !VAR_5.no_items);
    bool VAR_22 = VAR_3;
    chtype VAR_23;
    const char *VAR_24 = (VAR_5.no_items
   ? VAR_11->name
   : VAR_11->text);

    switch (VAR_13) {
    default:
    case 128:
 VAR_23 = VAR_6;
 break;
    case 129:
 VAR_23 = VAR_7;
 break;
    case 130:
 VAR_23 = VAR_4;
 break;
    }


    if (VAR_14) {
 FUNC_1(VAR_10, (VAR_13 != 128) ? VAR_7 : VAR_6);
 for (VAR_16 = VAR_20 - 1; VAR_16 < VAR_20 + VAR_2 - 1; VAR_16++) {
     FUNC_6(VAR_10, VAR_16, 0);
     FUNC_7(VAR_10, "%*s", VAR_18, " ");
 }
    } else {
 FUNC_1(VAR_10, VAR_8);
 FUNC_6(VAR_10, VAR_20, 0);
 FUNC_7(VAR_10, "%*s", VAR_18, " ");
    }


    if (VAR_21) {
 (void) FUNC_6(VAR_10, VAR_20, VAR_9->tag_x);
 FUNC_5(VAR_10, VAR_11->name, VAR_17, VAR_22, VAR_13);
 VAR_22 = VAR_0;
    }


    (void) FUNC_6(VAR_10, VAR_20, VAR_19);
    if (VAR_14) {
 VAR_18 -= 1;
 FUNC_2(VAR_10, VAR_20 - 1, VAR_19, VAR_2, VAR_18 - VAR_19 - VAR_9->tag_x,
       VAR_23,
       VAR_23);
 VAR_18 -= 1;
 ++VAR_19;
    }


    FUNC_6(VAR_10, VAR_20, VAR_19);
    FUNC_5(VAR_10, VAR_24, VAR_18 - VAR_19, VAR_22, VAR_13);

    if (VAR_13) {
 FUNC_4(VAR_11->help);
    }
    FUNC_1(VAR_10, VAR_15);
}
