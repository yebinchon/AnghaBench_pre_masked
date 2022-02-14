
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**) ;
 int FUNC_1 (char*,char*,int*) ;

__attribute__((used)) static size_t
FUNC_2(char **VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    int VAR_4;
    char *VAR_5 = FUNC_0(VAR_0);
    VAR_3 = 0;
    while(*VAR_5 && VAR_3 < VAR_2) {
 if(FUNC_1(VAR_5, "%02x", &VAR_4) != 1)
     break;
 VAR_1[VAR_3++] = VAR_4;
 VAR_5 += 2;
    }
    return VAR_3;
}
