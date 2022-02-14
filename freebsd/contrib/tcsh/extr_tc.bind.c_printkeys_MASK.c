
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct KeyFuncs {scalar_t__ func; scalar_t__ name; } ;
struct TYPE_3__ {int len; scalar_t__* buf; } ;
typedef scalar_t__ KEYCMD ;
typedef scalar_t__ Char ;
typedef TYPE_1__ CStr ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct KeyFuncs* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(KEYCMD *VAR_6, int VAR_7, int VAR_8)
{
    struct KeyFuncs *VAR_9;
    Char VAR_10[2], VAR_11[2];
    CStr VAR_12, VAR_13;
    unsigned char *VAR_14;
    VAR_12.buf = VAR_10;
    VAR_13.buf = VAR_11;

    VAR_10[0] = (Char) VAR_7;
    VAR_10[1] = 0;
    VAR_11[0] = (Char) VAR_8;
    VAR_11[1] = 0;
    VAR_12.len = 1;
    VAR_13.len = 1;

    VAR_14 = FUNC_3(&VAR_12, VAR_4);
    FUNC_1(VAR_14, VAR_5);
    if (VAR_6[VAR_7] == VAR_2) {
 if (VAR_7 == VAR_8)
     FUNC_4(FUNC_0(20, 10, "%-15s->  is undefined\n"), VAR_14);
 FUNC_2(VAR_14);
 return;
    }

    for (VAR_9 = VAR_3; VAR_9->name; VAR_9++) {
 if (VAR_9->func == VAR_6[VAR_7]) {
     if (VAR_7 == VAR_8)
  FUNC_4("%-15s->  %s\n", VAR_14, VAR_9->name);
     else {
  unsigned char *VAR_15;

  VAR_15 = FUNC_3(&VAR_13, VAR_4);
  FUNC_1(VAR_15, VAR_5);
  FUNC_4("%-4s to %-7s->  %s\n", VAR_14, VAR_15, VAR_9->name);
     }
     FUNC_2(VAR_14);
     return;
 }
    }
    FUNC_4(FUNC_0(20, 11, "BUG!!! %s isn't bound to anything.\n"), VAR_14);
    if (VAR_6 == VAR_1)
 FUNC_4("CcKeyMap[%d] == %d\n", VAR_7, VAR_1[VAR_7]);
    else
 FUNC_4("CcAltMap[%d] == %d\n", VAR_7, VAR_0[VAR_7]);
    FUNC_2(VAR_14);
}
