
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pci_range {int pci_hi; int pci; int host; int size; } ;
typedef int ssize_t ;
typedef int size_cells ;
typedef int phandle_t ;
typedef int pci_address_cells ;
typedef int host_address_cells ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ) ;
 int* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(phandle_t VAR_2, struct ofw_pci_range *VAR_3)
{
 int VAR_4 = 1, VAR_5 = 3, VAR_6 = 2;
 cell_t *VAR_7;
 ssize_t VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_0(FUNC_2(VAR_2), "#address-cells", &VAR_4,
     sizeof(VAR_4));
 FUNC_0(VAR_2, "#address-cells", &VAR_5,
     sizeof(VAR_5));
 FUNC_0(VAR_2, "#size-cells", &VAR_6, sizeof(VAR_6));

 VAR_8 = FUNC_1(VAR_2, "ranges");
 if (VAR_8 <= 0)
  return (-1);
 VAR_9 = VAR_8 / sizeof(cell_t) /
     (VAR_5 + VAR_4 + VAR_6);

 VAR_7 = FUNC_4(VAR_8, VAR_0, VAR_1);
 FUNC_0(VAR_2, "ranges", VAR_7, VAR_8);

 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_3[VAR_10].pci_hi = VAR_7[VAR_11++];
  VAR_3[VAR_10].pci = 0;
  for (VAR_12 = 0; VAR_12 < VAR_5 - 1; VAR_12++) {
   VAR_3[VAR_10].pci <<= 32;
   VAR_3[VAR_10].pci |= VAR_7[VAR_11++];
  }
  VAR_3[VAR_10].host = 0;
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   VAR_3[VAR_10].host <<= 32;
   VAR_3[VAR_10].host |= VAR_7[VAR_11++];
  }
  VAR_3[VAR_10].size = 0;
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_3[VAR_10].size <<= 32;
   VAR_3[VAR_10].size |= VAR_7[VAR_11++];
  }
 }

 FUNC_3(VAR_7, VAR_0);
 return (VAR_9);
}
