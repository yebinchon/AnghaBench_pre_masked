
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,int *,size_t*) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int *,int *,size_t) ;
 size_t FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (char*,char*,char**) ;

__attribute__((used)) static int
FUNC_9(char *VAR_1, unsigned VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    uint32_t VAR_5[VAR_0];
    size_t VAR_6;
    uint32_t VAR_7[VAR_0];
    size_t VAR_8;
    uint32_t *VAR_9;
    size_t VAR_10;
    int VAR_11;

    VAR_4 = FUNC_8(VAR_1, ";", &VAR_3);
    if (VAR_4 == ((void*)0))
 return 0;

    VAR_6 = FUNC_6(VAR_4, VAR_5);
    if (FUNC_8(((void*)0), ";", &VAR_3) == ((void*)0))
 return 0;
    if (FUNC_8(((void*)0), ";", &VAR_3) == ((void*)0))
 return 0;
    VAR_4 = FUNC_8(((void*)0), ";", &VAR_3);
    if (VAR_4 == ((void*)0))
 return 0;
    VAR_8 = FUNC_6(VAR_4, VAR_7);
    if (FUNC_8(((void*)0), ";", &VAR_3) == ((void*)0))
 return 0;
    VAR_4 = VAR_3;

    VAR_10 = VAR_0;
    VAR_9 = FUNC_4(VAR_10 * sizeof(uint32_t));
    if (VAR_9 == ((void*)0) && VAR_10 != 0)
 FUNC_2(1, "malloc");
    VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_9, &VAR_10);
    if (VAR_11) {
 FUNC_7("wind_stringprep_normalize %s failed\n", VAR_4);
 FUNC_3(VAR_9);
 return 1;
    }
    if (VAR_8 != VAR_10) {
 FUNC_7("%u: wrong out len (%s)\n", VAR_2, VAR_4);
 FUNC_1("Expected", VAR_7, VAR_8);
 FUNC_1("Received", VAR_9, VAR_10);
 FUNC_3(VAR_9);
 return 1;
    }
    if (FUNC_5(VAR_7, VAR_9, VAR_8 * sizeof(uint32_t)) != 0) {
 FUNC_7("%u: wrong out data (%s)\n", VAR_2, VAR_4);
 FUNC_1("Expected", VAR_7, VAR_8);
 FUNC_1("Received", VAR_9, VAR_10);
 FUNC_3(VAR_9);
 return 1;
    }
    FUNC_3(VAR_9);
    return 0;
}
