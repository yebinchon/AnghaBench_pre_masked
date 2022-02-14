
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;
 char* FUNC_2 (char*,char*,char**) ;

__attribute__((used)) static size_t
FUNC_3(char *VAR_1, uint32_t *VAR_2)
{
    char *VAR_3;
    unsigned VAR_4 = 0;
    const char *VAR_5;
    unsigned VAR_6;

    for(VAR_5 = FUNC_2(VAR_1, " ", &VAR_3);
 VAR_5 != ((void*)0);
 VAR_5 = FUNC_2(((void*)0), " ", &VAR_3)) {
 if (VAR_4 >= VAR_0) {
     FUNC_0(1, "increase MAX_LENGTH_CANON");
 }
 if (FUNC_1(VAR_5, "%x", &VAR_6) != 1) {
     FUNC_0(1, "failed to parse hex: %s", VAR_5);
 }
 VAR_2[VAR_4] = VAR_6;
 ++VAR_4;
    }
    return VAR_4;
}
