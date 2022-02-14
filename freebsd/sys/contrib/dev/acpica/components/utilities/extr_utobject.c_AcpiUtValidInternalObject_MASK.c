
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOLEAN
FUNC_4 (
    void *VAR_4)
{

    FUNC_1 (VAR_3);




    if (!VAR_4)
    {
        FUNC_0 ((VAR_0, "**** Null Object Ptr\n"));
        return (VAR_1);
    }



    switch (FUNC_2 (VAR_4))
    {
    case 128:



        return (VAR_2);

    default:

        FUNC_0 ((VAR_0,
            "%p is not an ACPI operand obj [%s]\n",
            VAR_4, FUNC_3 (VAR_4)));
        break;
    }

    return (VAR_1);
}
