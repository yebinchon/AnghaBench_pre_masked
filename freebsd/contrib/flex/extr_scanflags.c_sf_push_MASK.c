
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scanflags_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int) ;

void
FUNC_1 (void)
{
    if (VAR_2 + 1 >= VAR_0)
        VAR_1 = (scanflags_t*) FUNC_0 ( (void*) VAR_1, sizeof(scanflags_t) * (VAR_0 += 32));


    VAR_1[VAR_2 + 1] = VAR_1[VAR_2];
    ++VAR_2;
}
