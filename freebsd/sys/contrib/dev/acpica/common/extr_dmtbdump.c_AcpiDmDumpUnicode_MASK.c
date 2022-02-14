
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (void*,int,int,int,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3 (
    void *VAR_0,
    UINT32 VAR_1,
    UINT32 VAR_2)
{
    UINT8 *VAR_3;
    UINT32 VAR_4;
    UINT32 VAR_5;


    VAR_3 = ((UINT8 *) VAR_0) + VAR_1;
    VAR_4 = VAR_2 - 2;



    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 2)
    {
        if (!FUNC_2 (VAR_3[VAR_5]))
        {
            goto DumpRawBuffer;
        }
    }



    for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5 += 2)
    {
        if (VAR_3[VAR_5])
        {
            goto DumpRawBuffer;
        }
    }



    FUNC_1 ("\"");
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 2)
    {
        FUNC_1 ("%c", VAR_3[VAR_5]);
    }

    FUNC_1 ("\"\n");
    return;

DumpRawBuffer:
    FUNC_0 (VAR_0, VAR_1, VAR_2,
        VAR_1, ((void*)0));
    FUNC_1 ("\n");
}
