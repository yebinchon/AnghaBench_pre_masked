
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int text; int name; } ;
struct TYPE_6__ {char const* title; scalar_t__* prompt; int height; int old_height; int width; int old_width; int item_no; int len_name; int len_text; int min_width; int dialog; int caption; scalar_t__ min_height; TYPE_3__* list; } ;
typedef TYPE_1__ DIALOG_MIXEDGAUGE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char const*,scalar_t__*,int*,int*,scalar_t__,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 TYPE_3__* FUNC_9 (int ,size_t) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char const*) ;
 int FUNC_15 (int,int,int,int) ;
 int FUNC_16 (int ,scalar_t__*,int,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int ,int,int,int,int) ;
 int FUNC_19 (TYPE_1__*,int ,int) ;
 int FUNC_20 (int ,int,int,int,int,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_25(DIALOG_MIXEDGAUGE * VAR_12,
       int *VAR_13,
       const char *VAR_14,
       const char *VAR_15,
       int VAR_16,
       int VAR_17,
       int VAR_18,
       char **VAR_19)
{
    int VAR_20, VAR_21, VAR_22;

    if (!*VAR_13) {
 FUNC_4(0);

 FUNC_19(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->title = VAR_14;
 VAR_12->prompt = FUNC_3(VAR_15);
 VAR_12->height = VAR_12->old_height = VAR_16;
 VAR_12->width = VAR_12->old_width = VAR_17;
 VAR_12->item_no = VAR_18;

 VAR_12->list = FUNC_9(VAR_0, (size_t) VAR_18);
 FUNC_2(VAR_12->list, "dialog_mixedgauge");

 VAR_12->len_name = 0;
 VAR_12->len_text = 15;

 for (VAR_20 = 0; VAR_20 < VAR_18; ++VAR_20) {
     int VAR_23 = (int) FUNC_22(FUNC_0(VAR_20));
     if (VAR_12->len_name < VAR_23)
  VAR_12->len_name = VAR_23;
     VAR_12->list[VAR_20].name = FUNC_0(VAR_20);
     VAR_12->list[VAR_20].text = FUNC_1(VAR_20);
 }

 VAR_12->min_height = VAR_5 + VAR_18;
 VAR_12->min_width = VAR_6 + VAR_12->len_name + VAR_3 + VAR_12->len_text;

 if (VAR_12->prompt != 0 && *(VAR_12->prompt) != 0)
     VAR_12->min_height += (2 * VAR_4);



    }
    FUNC_6(VAR_12->title, VAR_12->prompt,
    &(VAR_12->height),
    &(VAR_12->width),
    VAR_12->min_height,
    VAR_12->min_width);
    FUNC_17(VAR_12->height, VAR_12->width);
    FUNC_10(VAR_12->height, VAR_12->width);


    VAR_22 = FUNC_7(VAR_12->width);
    VAR_21 = FUNC_8(VAR_12->height);

    VAR_12->dialog = FUNC_15(VAR_12->height, VAR_12->width, VAR_21, VAR_22);

    (void) FUNC_23(VAR_12->dialog);
    FUNC_12(VAR_12->dialog,
    0, 0,
    VAR_12->height,
    VAR_12->width,
    VAR_10, VAR_9, VAR_8);

    FUNC_14(VAR_12->dialog, VAR_12->title);
    FUNC_13(VAR_12->dialog, VAR_2);

    if ((VAR_12->prompt != 0 && *(VAR_12->prompt) != 0)
 && FUNC_24(VAR_12->dialog, VAR_12->item_no, 0) != VAR_1) {
 VAR_12->caption = FUNC_18(VAR_12->dialog,
          VAR_12->height - VAR_12->item_no - (2 * VAR_4),
          VAR_12->width,
          VAR_21 + VAR_12->item_no + (2 * VAR_4),
          VAR_22);
 FUNC_5(VAR_12->caption, VAR_10);
 FUNC_16(VAR_12->caption, VAR_12->prompt, VAR_12->height, VAR_12->width);
    }

    FUNC_20(VAR_12->dialog,
       VAR_12->height - 4,
       2 + VAR_4,
       2 + VAR_4,
       VAR_12->width - 2 * (2 + VAR_4),
       VAR_10,
       VAR_9);

    *VAR_13 += 1;
}
