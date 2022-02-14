
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, const char *VAR_1)
{
    FILE *VAR_2;
    VAR_2 = FUNC_2(VAR_0, "w");
    if(VAR_2 == ((void*)0)) {
 FUNC_5(VAR_0);
 FUNC_0(1, "fopen");
    }
    if(FUNC_3(VAR_1, 1, FUNC_4(VAR_1), VAR_2) != FUNC_4(VAR_1))
 FUNC_0(1, "short write");
    if(FUNC_1(VAR_2) != 0) {
 FUNC_5(VAR_0);
 FUNC_0(1, "fclose");
    }
}
