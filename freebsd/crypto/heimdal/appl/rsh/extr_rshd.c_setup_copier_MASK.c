
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int ,int,int ,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_7 (int VAR_3)
{
    int VAR_4[2], VAR_5[2], VAR_6[2];
    pid_t VAR_7;

    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    FUNC_5(VAR_6);
    VAR_7 = FUNC_3 ();
    if (VAR_7 < 0)
 FUNC_2 (VAR_2, "fork", "Could not create child process.");
    if (VAR_7 == 0) {
 FUNC_0 (VAR_4[1]);
 FUNC_0 (VAR_5[0]);
 FUNC_0 (VAR_6[0]);
 FUNC_1 (VAR_4[0], VAR_1);
 FUNC_1 (VAR_5[1], VAR_2);
 FUNC_1 (VAR_6[1], VAR_0);
 FUNC_0 (VAR_4[0]);
 FUNC_0 (VAR_5[1]);
 FUNC_0 (VAR_6[1]);
    } else {
 FUNC_0 (VAR_4[0]);
 FUNC_0 (VAR_5[1]);
 FUNC_0 (VAR_6[1]);

 if (FUNC_4 (VAR_2, "", 1) != 1)
     FUNC_2 (VAR_2, "net_write", "Write failure.");

 FUNC_6 (VAR_1, VAR_4[1],
       VAR_2, VAR_5[0],
       VAR_0, VAR_6[0],
       VAR_3);
    }
}
