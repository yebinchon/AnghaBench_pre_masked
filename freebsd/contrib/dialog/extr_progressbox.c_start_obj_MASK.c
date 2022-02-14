
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int win; } ;
struct TYPE_5__ {char* prompt; int high; int text; TYPE_1__ obj; scalar_t__ wide; } ;
typedef TYPE_2__ MY_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,char*,int*,scalar_t__*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int,scalar_t__,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int,scalar_t__,int,int) ;
 int FUNC_11 (int ,char*,int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (int ,int,scalar_t__,int,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static void
FUNC_23(MY_OBJ * VAR_8, const char *VAR_9, const char *VAR_10)
{
    int VAR_11, VAR_12, VAR_13;
    int VAR_14;

    VAR_8->prompt = FUNC_13(VAR_10);
    FUNC_15(VAR_8->prompt);
    FUNC_2(VAR_9, VAR_8->prompt, &VAR_8->high, &VAR_8->wide, VAR_3, VAR_4);

    FUNC_12(VAR_8->high, VAR_8->wide);
    FUNC_6(VAR_8->high, VAR_8->wide);

    VAR_12 = FUNC_3(VAR_8->wide);
    VAR_11 = FUNC_4(VAR_8->high);
    VAR_13 = VAR_8->high - (2 * VAR_2);

    VAR_8->obj.win = FUNC_10(VAR_8->high, VAR_8->wide, VAR_11, VAR_12);

    FUNC_7(VAR_8->obj.win,
    0, 0,
    VAR_8->high, VAR_8->wide,
    VAR_7,
    VAR_6,
    VAR_5);
    FUNC_9(VAR_8->obj.win, VAR_9);
    FUNC_8(VAR_8->obj.win, VAR_1);

    if (VAR_8->prompt[0] != '\0') {
 int VAR_15, VAR_16;

 FUNC_1(VAR_8->obj.win, VAR_7);
 FUNC_11(VAR_8->obj.win, VAR_8->prompt, VAR_8->high, VAR_8->wide);
 FUNC_18(VAR_8->obj.win, VAR_15, VAR_16);
 (void) VAR_16;
 ++VAR_15;
 FUNC_20(VAR_8->obj.win, VAR_15, VAR_2);
 for (VAR_14 = 0; VAR_14 < FUNC_16(VAR_8->obj.win) - 2 * VAR_2; VAR_14++)
     (void) FUNC_19(VAR_8->obj.win, FUNC_5(VAR_0));
 VAR_11 += VAR_15;
 VAR_13 -= VAR_15;
    }


    VAR_8->text = FUNC_14(VAR_8->obj.win,
          VAR_13,
          VAR_8->wide - (2 * VAR_2),
          VAR_11 + VAR_2,
          VAR_12 + VAR_2);

    (void) FUNC_22(VAR_8->obj.win);

    (void) FUNC_20(VAR_8->obj.win, FUNC_17(VAR_8->text), (VAR_2 + 1));
    (void) FUNC_21(VAR_8->obj.win);

    FUNC_0(VAR_8->text, FUNC_17(VAR_8->text), FUNC_16(VAR_8->text), VAR_7);
}
