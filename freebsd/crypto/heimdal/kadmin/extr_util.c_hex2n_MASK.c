
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2 (char VAR_0)
{
    static char VAR_1[] = "0123456789abcdef";
    const char *VAR_2;

    VAR_2 = FUNC_0 (VAR_1, FUNC_1((unsigned char)VAR_0));
    if (VAR_2 == ((void*)0))
 return -1;
    else
 return VAR_2 - VAR_1;
}
