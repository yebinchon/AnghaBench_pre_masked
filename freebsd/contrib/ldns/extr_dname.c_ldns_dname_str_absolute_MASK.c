
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;

bool
FUNC_3(const char *VAR_0)
{
        const char* VAR_1;
 if(VAR_0 && FUNC_1(VAR_0, ".") == 0)
  return 1;
        if(!VAR_0 || FUNC_2(VAR_0) < 2)
                return 0;
        if(VAR_0[FUNC_2(VAR_0) - 1] != '.')
                return 0;
        if(VAR_0[FUNC_2(VAR_0) - 2] != '\\')
                return 1;

        for(VAR_1=VAR_0; *VAR_1; VAR_1++) {
                if(*VAR_1 == '\\') {
                        if(VAR_1[1] && VAR_1[2] && VAR_1[3]
                                && FUNC_0((unsigned char)VAR_1[1])
    && FUNC_0((unsigned char)VAR_1[2])
    && FUNC_0((unsigned char)VAR_1[3]))
                                VAR_1 += 3;
                        else if(!VAR_1[1] || FUNC_0((unsigned char)VAR_1[1]))
                                return 0;
                        else VAR_1++;
                }
                else if(!*(VAR_1+1) && *VAR_1 == '.')
                        return 1;
        }
        return 0;
}
