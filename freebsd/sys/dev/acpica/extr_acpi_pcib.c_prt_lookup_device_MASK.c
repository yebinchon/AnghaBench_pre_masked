
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct prt_lookup_request {scalar_t__ pr_slot; scalar_t__ pr_pin; TYPE_1__* pr_entry; } ;
struct TYPE_3__ {scalar_t__ Pin; int Address; } ;
typedef TYPE_1__ ACPI_PCI_ROUTING_TABLE ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(ACPI_PCI_ROUTING_TABLE *VAR_0, void *VAR_1)
{
    struct prt_lookup_request *VAR_2;

    VAR_2 = (struct prt_lookup_request *)VAR_1;
    if (VAR_2->pr_entry != ((void*)0))
 return;
    if (FUNC_0(VAR_0->Address) == VAR_2->pr_slot &&
 VAR_0->Pin == VAR_2->pr_pin)
     VAR_2->pr_entry = VAR_0;
}
