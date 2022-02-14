
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;



void
FUNC_5 (
    char *VAR_2)
{
    UINT32 VAR_3;


    FUNC_4 (VAR_2);
    VAR_3 = FUNC_1 (VAR_2, VAR_1);
    if (VAR_3 == VAR_0)
    {
        FUNC_3 ("Invalid or unsupported argument\n");
        return;
    }

    switch (VAR_3)
    {
    case 129:

        FUNC_2 ();
        break;

    case 128:

        FUNC_0 (((void*)0));
        break;

    default:
        break;
    }
}
