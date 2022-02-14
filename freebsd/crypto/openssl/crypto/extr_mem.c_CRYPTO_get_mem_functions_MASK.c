
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void FUNC_0 (void*,char const*,int) ;
 void* FUNC_1 (size_t,char const*,int) ;
 void* FUNC_2 (void*,size_t,char const*,int) ;

void FUNC_3(
        void *(**VAR_0)(size_t, const char *, int),
        void *(**VAR_1)(void *, size_t, const char *, int),
        void (**VAR_2)(void *, const char *, int))
{
    if (VAR_0 != ((void*)0))
        *VAR_0 = FUNC_1;
    if (VAR_1 != ((void*)0))
        *VAR_1 = FUNC_2;
    if (VAR_2 != ((void*)0))
        *VAR_2 = FUNC_0;
}
