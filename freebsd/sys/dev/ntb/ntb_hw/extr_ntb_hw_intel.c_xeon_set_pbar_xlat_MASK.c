
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_softc {struct ntb_pci_bar_info* bar_info; } ;
struct ntb_pci_bar_info {int pbarxlat_off; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;


 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ntb_softc *VAR_2, uint64_t VAR_3, enum ntb_bar VAR_4)
{
 struct ntb_pci_bar_info *VAR_5;

 VAR_5 = &VAR_2->bar_info[VAR_4];
 if (FUNC_0(VAR_2, VAR_1) && VAR_4 >= VAR_0) {
  FUNC_2(4, VAR_5->pbarxlat_off, VAR_3);
  VAR_3 = FUNC_1(4, VAR_5->pbarxlat_off);
 } else {
  FUNC_2(8, VAR_5->pbarxlat_off, VAR_3);
  VAR_3 = FUNC_1(8, VAR_5->pbarxlat_off);
 }
 (void)VAR_3;
}
