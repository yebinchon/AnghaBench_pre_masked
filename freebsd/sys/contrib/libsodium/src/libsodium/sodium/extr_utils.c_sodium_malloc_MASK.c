
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 void* FUNC_0 (size_t const) ;
 int FUNC_1 (void*,int,size_t const) ;

__attribute__((malloc)) void *
FUNC_2(const size_t VAR_1)
{
    void *VAR_2;

    if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_1(VAR_2, (int) VAR_0, VAR_1);

    return VAR_2;
}
