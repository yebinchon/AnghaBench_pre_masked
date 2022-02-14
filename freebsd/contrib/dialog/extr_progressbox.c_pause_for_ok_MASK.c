
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nocancel; } ;
struct TYPE_8__ {int win; } ;
struct TYPE_9__ {TYPE_1__ obj; int wide; scalar_t__ high; } ;
typedef TYPE_2__ MY_OBJ ;
typedef int DLG_KEYS_BINDING ;





 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;

 void* VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,char const**,int,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (char const**,int) ;
 int FUNC_8 (int) ;
 char** FUNC_9 () ;
 int FUNC_10 (char const**,int) ;
 int FUNC_11 (int ,char*,char const**) ;
 int FUNC_12 (int ,char*,int *) ;
 scalar_t__ FUNC_13 (int,int,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (TYPE_2__*,void*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_20(MY_OBJ * VAR_9, const char *VAR_10, const char *VAR_11)
{

    static DLG_KEYS_BINDING VAR_12[] = {
 130,
 131,
 128,
 132
    };


    int VAR_13;
    int VAR_14 = 0, VAR_15;
    int VAR_16 = VAR_1;
    const char **VAR_17 = FUNC_9();
    int VAR_18;
    bool VAR_19 = VAR_8.nocancel;
    bool VAR_20 = VAR_4;

    VAR_8.nocancel = VAR_4;
    VAR_13 = FUNC_2();


  restart:


    FUNC_12(VAR_9->obj.win, "progressbox", VAR_12);
    FUNC_11(VAR_9->obj.win, "progressbox", VAR_17);

    FUNC_3(VAR_9->obj.win, VAR_6, VAR_5, VAR_7);

    while (VAR_16 == VAR_1) {
 if (VAR_20) {
     VAR_20 = VAR_2;
     if (VAR_13 < 0)
  VAR_13 = 0;
     FUNC_4(VAR_9->obj.win,
        VAR_9->high - 2, 0,
        VAR_17, VAR_13,
        VAR_2, VAR_9->wide);
 }

 VAR_14 = FUNC_6(VAR_9->obj.win, &VAR_15);
 if (FUNC_13(VAR_14, VAR_15, &VAR_16))
     break;

 if (!VAR_15 && (VAR_18 = FUNC_1(VAR_14, VAR_17)) >= 0) {
     VAR_16 = FUNC_8(VAR_18);
     break;
 }

 if (VAR_15) {
     switch (VAR_14) {
     case 134:
  VAR_13 = FUNC_7(VAR_17, VAR_13);
  VAR_20 = VAR_4;
  break;
     case 133:
  VAR_13 = FUNC_10(VAR_17, VAR_13);
  VAR_20 = VAR_4;
  break;
     case 135:
  VAR_16 = FUNC_8(VAR_13);
  break;

     case 129:
  FUNC_15(VAR_9->obj.win);
  FUNC_18(VAR_9);
  FUNC_19(VAR_9, VAR_10, VAR_11);
  FUNC_17(VAR_9, VAR_4);
  VAR_20 = VAR_4;
  goto restart;

     default:
  if (FUNC_16(VAR_14)) {
      VAR_16 = FUNC_8(VAR_14 - VAR_3);
      if (VAR_16 < 0)
   VAR_16 = VAR_0;
  } else {
      FUNC_0();
  }
  break;
     }

 } else {
     FUNC_0();
 }
    }
    FUNC_5();
    FUNC_14(VAR_9->obj.win);

    VAR_8.nocancel = VAR_19;
    return VAR_16;
}
