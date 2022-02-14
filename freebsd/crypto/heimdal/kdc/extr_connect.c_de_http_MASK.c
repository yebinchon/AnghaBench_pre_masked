
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,char*,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
    unsigned char *VAR_1, *VAR_2;
    for(VAR_1 = VAR_2 = (unsigned char *)VAR_0; *VAR_1; VAR_1++, VAR_2++) {
 if(*VAR_1 == '%' && FUNC_0(VAR_1[1]) && FUNC_0(VAR_1[2])) {
     unsigned int VAR_3;
     if(FUNC_1((char *)VAR_1 + 1, "%2x", &VAR_3) != 1)
  return -1;
     *VAR_2 = VAR_3;
     VAR_1 += 2;
 } else
     *VAR_2 = *VAR_1;
    }
    *VAR_2 = '\0';
    return 0;
}
