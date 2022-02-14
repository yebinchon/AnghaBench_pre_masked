
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct iort_its_entry* its; } ;
struct iort_node {int nentries; TYPE_1__ entries; scalar_t__ usecount; } ;
struct iort_its_entry {int pxm; scalar_t__ xref; int its_id; } ;
typedef int UINT32 ;
struct TYPE_7__ {int ItsCount; int * Identifiers; } ;
struct TYPE_6__ {scalar_t__ NodeData; } ;
typedef TYPE_2__ ACPI_IORT_NODE ;
typedef TYPE_3__ ACPI_IORT_ITS_GROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iort_its_entry* FUNC_0 (int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct iort_node *VAR_3, ACPI_IORT_NODE *VAR_4)
{
 struct iort_its_entry *VAR_5;
 ACPI_IORT_ITS_GROUP *VAR_6;
 UINT32 *VAR_7;
 int VAR_8;

 VAR_6 = (ACPI_IORT_ITS_GROUP *)VAR_4->NodeData;
 VAR_3->nentries = VAR_6->ItsCount;
 VAR_3->usecount = 0;
 VAR_5 = FUNC_0(sizeof(*VAR_5) * VAR_3->nentries, VAR_0, VAR_1 | VAR_2);
 VAR_3->entries.its = VAR_5;
 VAR_7 = &VAR_6->Identifiers[0];
 for (VAR_8 = 0; VAR_8 < VAR_3->nentries; VAR_8++, VAR_5++, VAR_7++) {
  VAR_5->its_id = *VAR_7;
  VAR_5->pxm = -1;
  VAR_5->xref = 0;
 }
}
