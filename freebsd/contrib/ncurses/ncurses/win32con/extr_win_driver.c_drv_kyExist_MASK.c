
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int keylist ;
typedef int WORD ;
struct TYPE_2__ {int rmap; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;
typedef int LONG ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int *,int ,size_t,int,int ) ;
 int FUNC_8 (int) ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_9(TERMINAL_CONTROL_BLOCK * VAR_5, int VAR_6)
{
    SCREEN *VAR_7;
    WORD VAR_8;
    void *VAR_9;
    bool VAR_10 = VAR_0;
    LONG VAR_11 = FUNC_1(0, (WORD) VAR_6);

    FUNC_0();
    FUNC_4();

    FUNC_0();

    FUNC_5((FUNC_6("win32con::drv_kyExist(%p, %d)"), VAR_5, VAR_6));
    VAR_9 = FUNC_7(&VAR_11,
    FUNC_3(VAR_5)->rmap,
    (size_t) (VAR_2 + VAR_1),
    sizeof(keylist[0]),
    VAR_4);
    if (VAR_9) {
 VAR_11 = *((LONG *) VAR_9);
 VAR_8 = FUNC_2(VAR_11);
 if (!(VAR_8 & 0x8000))
     VAR_10 = VAR_3;
    }
    FUNC_8(VAR_10);
}
