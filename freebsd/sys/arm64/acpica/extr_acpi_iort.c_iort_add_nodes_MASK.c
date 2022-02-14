
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int smmu_v3; int smmu; int pci_rc; } ;
struct iort_node {int type; TYPE_1__ data; int node_offset; } ;
struct TYPE_7__ {int Type; scalar_t__ NodeData; } ;
typedef int ACPI_IORT_SMMU_V3 ;
typedef int ACPI_IORT_SMMU ;
typedef int ACPI_IORT_ROOT_COMPLEX ;
typedef TYPE_2__ ACPI_IORT_NODE ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct iort_node*,int ) ;
 int FUNC_1 (struct iort_node*,int ) ;
 int FUNC_2 (struct iort_node*,TYPE_2__*) ;
 int FUNC_3 (struct iort_node*,TYPE_2__*) ;
 int VAR_3 ;
 struct iort_node* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(ACPI_IORT_NODE *VAR_7, u_int VAR_8)
{
 ACPI_IORT_ROOT_COMPLEX *VAR_9;
 ACPI_IORT_SMMU *VAR_10;
 ACPI_IORT_SMMU_V3 *VAR_11;
 struct iort_node *VAR_12;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_0, VAR_1 | VAR_2);
 VAR_12->type = VAR_7->Type;
 VAR_12->node_offset = VAR_8;


 switch(VAR_7->Type) {
 case 130:
  VAR_9 = (ACPI_IORT_ROOT_COMPLEX *)VAR_7->NodeData;
  FUNC_5(&VAR_12->data.pci_rc, VAR_9, sizeof(*VAR_9));
  FUNC_2(VAR_12, VAR_7);
  FUNC_0(&VAR_5, VAR_12, VAR_4);
  break;
 case 129:
  VAR_10 = (ACPI_IORT_SMMU *)VAR_7->NodeData;
  FUNC_5(&VAR_12->data.smmu, VAR_10, sizeof(*VAR_10));
  FUNC_2(VAR_12, VAR_7);
  FUNC_0(&VAR_6, VAR_12, VAR_4);
  break;
 case 128:
  VAR_11 = (ACPI_IORT_SMMU_V3 *)VAR_7->NodeData;
  FUNC_5(&VAR_12->data.smmu_v3, VAR_11, sizeof(*VAR_11));
  FUNC_2(VAR_12, VAR_7);
  FUNC_0(&VAR_6, VAR_12, VAR_4);
  break;
 case 131:
  FUNC_3(VAR_12, VAR_7);
  FUNC_0(&VAR_3, VAR_12, VAR_4);
  break;
 default:
  FUNC_6("ACPI: IORT: Dropping unhandled type %u\n",
      VAR_7->Type);
  FUNC_1(VAR_12, VAR_0);
  break;
 }
}
