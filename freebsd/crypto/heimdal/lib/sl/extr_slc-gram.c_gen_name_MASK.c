
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0)
{
    char *VAR_1;
    for(VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++)
 if(!FUNC_0((unsigned char)*VAR_1))
     *VAR_1 = '_';
}
