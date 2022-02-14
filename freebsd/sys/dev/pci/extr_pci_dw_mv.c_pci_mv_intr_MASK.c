
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pci_mv_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 struct pci_mv_softc *VAR_5 = VAR_4;
 uint32_t VAR_6, VAR_7;


 VAR_6 = FUNC_0(VAR_5->dev, VAR_2);
 VAR_7 = FUNC_0(VAR_5->dev, VAR_3);
 if (VAR_6 == 0 || VAR_7 == 0)
  return(VAR_1);

 FUNC_1(VAR_5->dev, VAR_2, VAR_6);
 FUNC_1(VAR_5->dev, VAR_3, VAR_7);
 return (VAR_0);
}
