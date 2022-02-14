
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(char *VAR_2)
{
    char *VAR_3;
    int VAR_4;






    FUNC_5(VAR_0, VAR_1);



    for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 (void) FUNC_1(VAR_4);
    if (FUNC_4("/dev/null", 2) != 0) {
 VAR_3 = "open /dev/null: %m";
    } else if (FUNC_2(0) != 1 || FUNC_2(0) != 2) {
 VAR_3 = "dup: %m";
    } else {
 (void) FUNC_3("/bin/sh", "sh", "-c", VAR_2, (char *) 0);
 VAR_3 = "execl /bin/sh: %m";
    }



    FUNC_6(VAR_3);
    FUNC_0(0);
}
