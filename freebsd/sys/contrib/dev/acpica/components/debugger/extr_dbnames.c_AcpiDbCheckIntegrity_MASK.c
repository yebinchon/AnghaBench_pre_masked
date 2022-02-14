
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Objects; int Nodes; int member_1; int member_0; } ;
typedef TYPE_1__ ACPI_INTEGRITY_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,void*,int *) ;

void
FUNC_2 (
    void)
{
    ACPI_INTEGRITY_INFO VAR_4 = {0,0};



    (void) FUNC_1 (VAR_1, VAR_0,
        VAR_2, VAR_3, ((void*)0), (void *) &VAR_4, ((void*)0));

    FUNC_0 ("Verified %u namespace nodes with %u Objects\n",
        VAR_4.Nodes, VAR_4.Objects);
}
