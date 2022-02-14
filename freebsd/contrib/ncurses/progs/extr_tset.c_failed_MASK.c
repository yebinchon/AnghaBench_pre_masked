
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 char* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2)
{
    char VAR_3[VAR_0];
    size_t VAR_4 = FUNC_4(VAR_1) + 2;

    if ((int) VAR_4 < (int) sizeof(VAR_3) - 12) {
 FUNC_1(VAR_3, VAR_1, sizeof(VAR_3));
 FUNC_0(VAR_3, ": ", sizeof(VAR_3));
    } else {
 FUNC_1(VAR_3, "tset: ", sizeof(VAR_3));
    }
    FUNC_3(FUNC_5(VAR_3, VAR_2, sizeof(VAR_3) - FUNC_4(VAR_3) - 2));
    FUNC_2();

}
