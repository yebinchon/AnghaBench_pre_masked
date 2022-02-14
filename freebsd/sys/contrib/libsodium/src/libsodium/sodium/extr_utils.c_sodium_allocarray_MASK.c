
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t) ;

__attribute__((malloc)) void *
FUNC_1(size_t VAR_3, size_t VAR_4)
{
    if (VAR_3 > (size_t) 0U && VAR_4 >= (size_t) VAR_1 / VAR_3) {
        VAR_2 = VAR_0;
        return ((void*)0);
    }
    return FUNC_0(VAR_3 * VAR_4);
}
