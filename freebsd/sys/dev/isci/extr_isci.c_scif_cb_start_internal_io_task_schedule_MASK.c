
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* SCI_START_INTERNAL_IO_ROUTINE ) (void*) ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int FUNCPTR ;



void
FUNC_0(SCI_CONTROLLER_HANDLE_T VAR_0,
    FUNCPTR VAR_1, void *VAR_2)
{



 SCI_START_INTERNAL_IO_ROUTINE VAR_3 =
     (SCI_START_INTERNAL_IO_ROUTINE)VAR_1;

 VAR_3(VAR_2);
}
