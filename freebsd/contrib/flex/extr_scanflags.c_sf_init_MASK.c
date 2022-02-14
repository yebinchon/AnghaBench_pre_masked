
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ scanflags_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;

void
FUNC_4 (void)
{
    FUNC_1(VAR_1 == ((void*)0));
    VAR_1 = (scanflags_t*) FUNC_2 ( sizeof(scanflags_t) * (VAR_0 = 32));
    if (!VAR_1)
        FUNC_3(FUNC_0("Unable to allocate %ld of stack"),
            (void *)(uintptr_t)sizeof(scanflags_t));
    VAR_1[VAR_2] = 0;
}
