
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ XML_Memory_Handling_Suite ;
typedef char XML_Char ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,TYPE_1__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(void)
{
    XML_Memory_Handling_Suite VAR_8 = {
        VAR_3,
        VAR_4,
        VAR_5
    };
    XML_Char VAR_9[2] = { ' ', '\0' };


    VAR_2 = VAR_0;
    VAR_7 = VAR_1;
    VAR_6 = FUNC_0(((void*)0), &VAR_8, VAR_9);
    if (VAR_6 == ((void*)0))
        FUNC_1("Parser not created");
}
