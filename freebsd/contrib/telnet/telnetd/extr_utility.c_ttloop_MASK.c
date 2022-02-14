
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;

void
FUNC_7()
{

    FUNC_0(VAR_1, FUNC_3("td: ttloop\r\n"));
    if (VAR_7 - VAR_2 > 0) {
 FUNC_2();
    }
    VAR_3 = FUNC_4(VAR_4, VAR_5, sizeof VAR_5);
    if (VAR_3 < 0) {
 FUNC_5(VAR_0, "ttloop:  read: %m");
 FUNC_1(1);
    } else if (VAR_3 == 0) {
 FUNC_5(VAR_0, "ttloop:  peer died: %m");
 FUNC_1(1);
    }
    FUNC_0(VAR_1, FUNC_3("td: ttloop read %d chars\r\n", VAR_3));
    VAR_6 = VAR_5;
    FUNC_6();
    if (VAR_3 > 0) {
 VAR_9 = VAR_8 = VAR_10;
 FUNC_6();
    }
}
