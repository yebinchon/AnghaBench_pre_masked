
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_pci_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mtk_pci_softc*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct mtk_pci_softc *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = VAR_6 = 0;

 while (VAR_6++ < VAR_1) {
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  if (VAR_5 & VAR_3)
   FUNC_0(100000);
  else
   break;
 }

 if (VAR_6 >= VAR_1)
  return (VAR_0);

 return (0);
}
