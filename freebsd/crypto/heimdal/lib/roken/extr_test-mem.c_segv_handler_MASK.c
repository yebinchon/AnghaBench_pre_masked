
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int RETSIGTYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static RETSIGTYPE
FUNC_5(int VAR_2)
{
    int VAR_3;
    char VAR_4[] = "SIGSEGV i current test: ";

    VAR_3 = FUNC_2("/dev/stdout", VAR_0, 0600);
    if (VAR_3 >= 0) {
 (void)FUNC_4(VAR_3, VAR_4, sizeof(VAR_4) - 1);
 (void)FUNC_4(VAR_3, VAR_1, FUNC_3(VAR_1));
 (void)FUNC_4(VAR_3, "\n", 1);
 FUNC_1(VAR_3);
    }
    FUNC_0(1);
}
