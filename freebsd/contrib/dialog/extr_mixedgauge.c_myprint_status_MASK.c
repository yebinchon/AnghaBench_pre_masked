
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_5__ {int height; int width; int len_text; int item_no; TYPE_1__* list; int * dialog; } ;
struct TYPE_4__ {int name; int text; } ;
typedef TYPE_2__ DIALOG_MIXEDGAUGE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (char const*,char*,float*) ;
 char* FUNC_6 (int ,char**) ;
 scalar_t__ FUNC_7 (char const*) ;
 int VAR_4 ;
 int FUNC_8 (int *,char) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(DIALOG_MIXEDGAUGE * VAR_5)
{
    WINDOW *VAR_6 = VAR_5->dialog;
    int VAR_7 = VAR_5->height;
    int VAR_8 = VAR_5->width;

    int VAR_9 = VAR_2;
    int VAR_10;
    int VAR_11 = VAR_5->len_text - 2;
    int VAR_12 = VAR_8 - VAR_5->len_text - 1;
    int VAR_13 = VAR_7;
    int VAR_14 = 0, VAR_15 = 0;
    int VAR_16, VAR_17;
    float VAR_18;
    const char *VAR_19 = "";
    char *VAR_20 = 0;

    VAR_13 -= (2 * VAR_2);
    FUNC_4(VAR_6, VAR_14, VAR_15);
    for (VAR_10 = 0; VAR_10 < VAR_5->item_no; ++VAR_10) {
 chtype VAR_21 = VAR_0;

 VAR_9 = VAR_10 + VAR_2 + 1;
 if (VAR_9 > VAR_13)
     break;

 VAR_19 = FUNC_6(VAR_5->list[VAR_10].text, &VAR_20);
 if (VAR_19 == 0 || *VAR_19 == 0)
     continue;

 (void) FUNC_11(VAR_6, VAR_9, 2 * VAR_2);
 FUNC_1(VAR_6, VAR_3);
 FUNC_2(VAR_6, VAR_5->list[VAR_10].name, VAR_12, &VAR_21);

 (void) FUNC_11(VAR_6, VAR_9, VAR_12);
 (void) FUNC_8(VAR_6, '[');
 (void) FUNC_11(VAR_6, VAR_9, VAR_12 + (VAR_11 - (int) FUNC_7(VAR_19)) / 2);
 if (VAR_20) {
     (void) FUNC_11(VAR_6, VAR_9, VAR_12 + 1);
     FUNC_1(VAR_6, VAR_4);
     for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
  (void) FUNC_8(VAR_6, ' ');

     (void) FUNC_11(VAR_6, VAR_9, VAR_12 + (VAR_11 - (int) FUNC_7(VAR_19)) / 2);
     (void) FUNC_9(VAR_6, VAR_19);

     if ((VAR_4 & VAR_1) != 0) {
  FUNC_0(VAR_6, VAR_1);
     } else {
  FUNC_1(VAR_6, VAR_1);
     }
     (void) FUNC_11(VAR_6, VAR_9, VAR_12 + 1);

     if (FUNC_5(VAR_19, "%f%%", &VAR_18) != 1)
  VAR_18 = 0.0;
     VAR_17 = (int) ((VAR_11 * (VAR_18 + 0.5)) / 100.0);
     for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  chtype VAR_22 = FUNC_10(VAR_6);
  if (VAR_4 & VAR_1) {
      VAR_22 &= ~VAR_1;
  }
  (void) FUNC_8(VAR_6, VAR_22);
     }
     FUNC_3(VAR_20);

 } else {
     (void) FUNC_11(VAR_6, VAR_9, VAR_12 + (VAR_11 - (int) FUNC_7(VAR_19)) / 2);
     (void) FUNC_9(VAR_6, VAR_19);
 }
 (void) FUNC_11(VAR_6, VAR_9, VAR_8 - 3);
 FUNC_1(VAR_6, VAR_3);
 (void) FUNC_8(VAR_6, ']');
 (void) FUNC_12(VAR_6);
    }
    if (VAR_6 != 0)
 FUNC_11(VAR_6, VAR_14, VAR_15);
}
