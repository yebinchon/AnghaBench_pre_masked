
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nidcnt; int* nid_arr; } ;
typedef TYPE_1__ nid_cb_st ;
typedef int etmp ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, int VAR_3, void *VAR_4)
{
    nid_cb_st *VAR_5 = VAR_4;
    size_t VAR_6;
    int VAR_7;
    char VAR_8[20];
    if (VAR_2 == ((void*)0))
        return 0;
    if (VAR_5->nidcnt == VAR_0)
        return 0;
    if (VAR_3 > (int)(sizeof(VAR_8) - 1))
        return 0;
    FUNC_3(VAR_8, VAR_2, VAR_3);
    VAR_8[VAR_3] = 0;
    VAR_7 = FUNC_0(VAR_8);
    if (VAR_7 == VAR_1)
        VAR_7 = FUNC_2(VAR_8);
    if (VAR_7 == VAR_1)
        VAR_7 = FUNC_1(VAR_8);
    if (VAR_7 == VAR_1)
        return 0;
    for (VAR_6 = 0; VAR_6 < VAR_5->nidcnt; VAR_6++)
        if (VAR_5->nid_arr[VAR_6] == VAR_7)
            return 0;
    VAR_5->nid_arr[VAR_5->nidcnt++] = VAR_7;
    return 1;
}
