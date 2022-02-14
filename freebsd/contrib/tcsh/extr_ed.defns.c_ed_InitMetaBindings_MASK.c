
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* buf; int len; } ;
typedef scalar_t__ KEYCMD ;
typedef size_t Char ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 size_t FUNC_1 (int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(void)
{
    Char VAR_9[3];
    int VAR_10;
    CStr VAR_11;
    KEYCMD *VAR_12;

    VAR_12 = VAR_2;
    for (VAR_10 = 0; VAR_10 <= 0377 && VAR_2[FUNC_1(VAR_10)] != VAR_4; VAR_10++)
 continue;
    if (VAR_10 > 0377) {
 for (VAR_10 = 0; VAR_10 <= 0377 && VAR_1[FUNC_1(VAR_10)] != VAR_4; VAR_10++)
     continue;
 if (VAR_10 > 0377) {
     VAR_10 = '\033';
     if (VAR_7)
  VAR_12 = VAR_1;
 }
 else {
     VAR_12 = VAR_1;
 }
    }
    VAR_9[0] = (Char)FUNC_1(VAR_10);
    VAR_9[2] = 0;
    VAR_11.buf = VAR_9;
    VAR_11.len = 2;
    for (VAR_10 = 0200; VAR_10 <= 0377; VAR_10++) {
 if (VAR_12[FUNC_1(VAR_10)] != VAR_3 && VAR_12[FUNC_1(VAR_10)] != VAR_5 && VAR_12[FUNC_1(VAR_10)] != VAR_6) {
     VAR_9[1] = FUNC_1(VAR_10 & VAR_0);
     FUNC_0(&VAR_11, FUNC_2((int) VAR_12[FUNC_1(VAR_10)]), VAR_8);
 }
    }
    VAR_12[VAR_9[0]] = VAR_6;
}
