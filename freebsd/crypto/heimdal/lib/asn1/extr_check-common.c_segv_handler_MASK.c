
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int RETSIGTYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static RETSIGTYPE
FUNC_5(int VAR_3)
{
    int VAR_4;
    char VAR_5[] = "SIGSEGV i current test: ";

    VAR_4 = FUNC_2("/dev/stdout", VAR_0, 0600);
    if (VAR_4 >= 0) {
 FUNC_4(VAR_4, VAR_5, sizeof(VAR_5));
 FUNC_4(VAR_4, VAR_2, FUNC_3(VAR_2));
 FUNC_4(VAR_4, " ", 1);
 FUNC_4(VAR_4, VAR_1, FUNC_3(VAR_1));
 FUNC_4(VAR_4, "\n", 1);
 FUNC_1(VAR_4);
    }
    FUNC_0(1);
}
