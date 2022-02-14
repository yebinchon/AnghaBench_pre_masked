
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* string; void* error; } ;
typedef TYPE_1__ ERR_STRING_DATA ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 void* FUNC_2 (unsigned long,int ,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

const char *FUNC_5(unsigned long VAR_2)
{
    ERR_STRING_DATA VAR_3, *VAR_4 = ((void*)0);
    unsigned long VAR_5, VAR_6;

    if (!FUNC_3(&VAR_1, VAR_0)) {
        return ((void*)0);
    }

    VAR_5 = FUNC_0(VAR_2);
    VAR_6 = FUNC_1(VAR_2);
    VAR_3.error = FUNC_2(VAR_5, 0, VAR_6);
    VAR_4 = FUNC_4(&VAR_3);
    if (!VAR_4) {
        VAR_3.error = FUNC_2(0, 0, VAR_6);
        VAR_4 = FUNC_4(&VAR_3);
    }
    return ((VAR_4 == ((void*)0)) ? ((void*)0) : VAR_4->string);
}
