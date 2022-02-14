
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_range {int dummy; } ;
typedef int phandle_t ;


 int FUNC_0 (struct mtk_pci_range*) ;
 int FUNC_1 (int ,struct mtk_pci_range*,struct mtk_pci_range*) ;

__attribute__((used)) static int
FUNC_2(phandle_t VAR_0, struct mtk_pci_range *VAR_1,
    struct mtk_pci_range *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)) != 0) {
  return (VAR_3);
 }

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 return (0);
}
