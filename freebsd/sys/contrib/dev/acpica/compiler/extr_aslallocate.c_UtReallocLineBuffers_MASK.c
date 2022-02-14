
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int,int) ;
 char* FUNC_4 (char*,int) ;

void
FUNC_5 (
    char **VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{

    *VAR_2 = FUNC_4 (*VAR_2, VAR_4);
    if (*VAR_2)
    {
        FUNC_2 (*VAR_2 + VAR_3, 0, VAR_4 - VAR_3);
        return;
    }

    FUNC_3 ("Could not increase line buffer size from %u to %u\n",
        VAR_3, VAR_4);

    FUNC_1 (VAR_0, VAR_1, ((void*)0), ((void*)0));
    FUNC_0 ();
}
