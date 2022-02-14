
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int empty ;
typedef char chtype ;
typedef int cchar_t ;
struct TYPE_16__ {int _maxy; int _curx; int _cury; int _leaveok; TYPE_1__* _line; void* _clear; } ;
struct TYPE_15__ {TYPE_2__* drv; } ;
struct TYPE_14__ {int (* hwcur ) (TYPE_3__*,int ,int ,int ,int ) ;} ;
struct TYPE_13__ {char* text; int firstchar; int lastchar; } ;
typedef TYPE_3__ TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 void* VAR_1 ;
 int FUNC_3 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_3__*,int,int,char*,int) ;
 int FUNC_10 (char*,char*,size_t) ;
 int FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *,int*,int ,int ,int ) ;
 int FUNC_18 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_19 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_20(TERMINAL_CONTROL_BLOCK * VAR_4)
{
    int VAR_5 = VAR_0;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    SCREEN *VAR_13;

    FUNC_0();
    FUNC_6();

    FUNC_7((FUNC_8("win32con::drv_doupdate(%p)"), VAR_4));
    if (FUNC_12(VAR_4)) {

 VAR_11 = FUNC_14(VAR_13);
 VAR_12 = FUNC_15(VAR_13);
 VAR_7 = FUNC_11(VAR_12, FUNC_4(VAR_13)->_maxy + 1);

 if ((FUNC_1(VAR_13)->_clear || FUNC_4(VAR_13)->_clear)) {
     int VAR_14;
     chtype VAR_15[VAR_11];

     for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  VAR_15[VAR_14] = ' ';


     for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_9(VAR_4, VAR_6, 0, VAR_15, VAR_11);
  FUNC_10(VAR_15,
         FUNC_1(VAR_13)->_line[VAR_6].text,
         (size_t) VAR_11 * sizeof(VAR_15[0]));
     }
     FUNC_1(VAR_13)->_clear = VAR_1;
     FUNC_4(VAR_13)->_clear = VAR_1;
     FUNC_19(FUNC_4(VAR_13));
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
     VAR_9 = FUNC_4(VAR_13)->_line[VAR_6].firstchar;
     if (VAR_9 != VAR_3) {
  VAR_10 = FUNC_4(VAR_13)->_line[VAR_6].lastchar;
  VAR_8 = VAR_10 - VAR_9 + 1;
  if (VAR_8 > 0) {
      FUNC_10(&FUNC_1(VAR_13)->_line[VAR_6].text[VAR_9],
      &FUNC_4(VAR_13)->_line[VAR_6].text[VAR_9],
      (size_t) VAR_8 * sizeof(FUNC_1(VAR_13)->_line[VAR_6].text[VAR_9]));
      FUNC_9(VAR_4,
         VAR_6,
         VAR_9,
         &FUNC_1(VAR_13)->_line[VAR_6].text[VAR_9], VAR_8);


      if (VAR_6 <= FUNC_4(VAR_13)->_maxy) {
   FUNC_3(FUNC_4(VAR_13), VAR_6);
      }
      if (VAR_6 <= FUNC_1(VAR_13)->_maxy) {
   FUNC_3(FUNC_1(VAR_13), VAR_6);
      }
  }

     }
 }


 for (VAR_6 = VAR_7; VAR_6 <= FUNC_4(VAR_13)->_maxy; VAR_6++) {
     FUNC_3(FUNC_4(VAR_13), VAR_6);
 }
 for (VAR_6 = VAR_7; VAR_6 <= FUNC_1(VAR_13)->_maxy; VAR_6++) {
     FUNC_3(FUNC_1(VAR_13), VAR_6);
 }

 if (!FUNC_4(VAR_13)->_leaveok) {
     FUNC_1(VAR_13)->_curx = FUNC_4(VAR_13)->_curx;
     FUNC_1(VAR_13)->_cury = FUNC_4(VAR_13)->_cury;

     VAR_4->drv->hwcur(VAR_4,
       0, 0,
       FUNC_1(VAR_13)->_cury, FUNC_1(VAR_13)->_curx);
 }
 FUNC_16(VAR_4);
 VAR_5 = VAR_2;
    }
    FUNC_13(VAR_5);
}
