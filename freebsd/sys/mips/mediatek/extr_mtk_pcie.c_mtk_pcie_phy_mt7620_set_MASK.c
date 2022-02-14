
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_pci_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mtk_pci_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct mtk_pci_softc*) ;

__attribute__((used)) static int
FUNC_3(struct mtk_pci_softc *VAR_4, uint32_t VAR_5,
    uint32_t VAR_6)
{
 uint32_t VAR_7;

 if (FUNC_2(VAR_4))
  return (VAR_0);

 VAR_7 = VAR_3 | ((VAR_5 & 0xff) << VAR_2) |
     (VAR_6 & 0xff);
 FUNC_1(VAR_4, VAR_1, VAR_7);
 FUNC_0(1000);

 if (FUNC_2(VAR_4))
  return (VAR_0);

 return (0);
}
