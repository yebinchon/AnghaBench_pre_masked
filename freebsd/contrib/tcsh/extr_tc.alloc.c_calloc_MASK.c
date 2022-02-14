
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int memalign_t ;


 int FUNC_0 (char*,int ,size_t volatile) ;
 char* FUNC_1 (size_t) ;

memalign_t
FUNC_2(size_t VAR_0, size_t VAR_1)
{

    char *VAR_2;
    volatile size_t VAR_3;

    VAR_0 *= VAR_1;
    VAR_2 = FUNC_1(VAR_0);

    VAR_3 = VAR_0;
    FUNC_0(VAR_2, 0, VAR_3);

    return ((memalign_t) VAR_2);






}
