
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(int VAR_3)
{
    VAR_2 = 1;

    if (VAR_3 >= 0) {
 VAR_1 = VAR_3;
    } else {
 if (FUNC_2(VAR_0) &&
    FUNC_0(VAR_0)) {
     VAR_1 = 1;
 } else if (FUNC_3(VAR_0) &&
    FUNC_1(VAR_0)) {
     VAR_1 = 0;
 }
 VAR_3 = VAR_1 ? 0 : 1;
    }

    if (VAR_3 == 1) {
 if (FUNC_2(VAR_0) &&
     FUNC_0(VAR_0)) {
     FUNC_4("Already operating in binary mode with remote host.\n");
 } else {
     FUNC_4("Negotiating binary mode with remote host.\n");
     FUNC_5(3);
 }
    } else {
 if (FUNC_3(VAR_0) &&
     FUNC_1(VAR_0)) {
     FUNC_4("Already in network ascii mode with remote host.\n");
 } else {
     FUNC_4("Negotiating network ascii mode with remote host.\n");
     FUNC_6(3);
 }
    }
    return 1;
}
