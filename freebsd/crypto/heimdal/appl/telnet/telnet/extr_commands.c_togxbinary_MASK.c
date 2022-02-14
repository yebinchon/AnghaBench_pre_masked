
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_2)
{
    VAR_1 = 1;

    if (VAR_2 == -1)
 VAR_2 = FUNC_0(VAR_0) ? 0 : 1;

    if (VAR_2 == 1) {
 if (FUNC_0(VAR_0)) {
     FUNC_2("Already transmitting in binary mode.\r\n");
 } else {
     FUNC_2("Negotiating binary mode on output.\r\n");
     FUNC_3(2);
 }
    } else {
 if (FUNC_1(VAR_0)) {
     FUNC_2("Already transmitting in network ascii mode.\r\n");
 } else {
     FUNC_2("Negotiating network ascii mode on output.\r\n");
     FUNC_4(2);
 }
    }
    return 1;
}
