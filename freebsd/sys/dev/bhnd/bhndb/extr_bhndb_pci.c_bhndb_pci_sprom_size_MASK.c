
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhndb_regwin {int win_size; } ;
struct bhndb_pci_softc {int dev; int parent; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 int FUNC_0 (int,int ) ;
 struct bhndb_regwin* FUNC_1 (struct bhndb_pci_softc*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static bus_size_t
FUNC_4(struct bhndb_pci_softc *VAR_3)
{
 const struct bhndb_regwin *VAR_4;
 uint32_t VAR_5;
 bus_size_t VAR_6;

 VAR_4 = FUNC_1(VAR_3);


 if (VAR_4 == ((void*)0))
  return (0);


 VAR_5 = FUNC_3(VAR_3->parent, VAR_1, 4);
 if (VAR_5 & VAR_0)
  return (0);

 switch (VAR_5 & VAR_2) {
 case 130:
  VAR_6 = (1 * 1024);
  break;

 case 129:
  VAR_6 = (4 * 1024);
  break;

 case 131:
  VAR_6 = (16 * 1024);
  break;

 case 128:
 default:
  FUNC_2(VAR_3->dev, "invalid PCI sprom size 0x%x\n", VAR_5);
  return (0);
 }




 VAR_6 = FUNC_0(VAR_6, VAR_4->win_size);

 return (VAR_6);
}
