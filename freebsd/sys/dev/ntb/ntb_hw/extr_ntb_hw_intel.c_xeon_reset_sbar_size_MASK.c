
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ntb_softc {scalar_t__ b2b_off; int device; struct ntb_pci_bar_info* bar_info; } ;
struct ntb_pci_bar_info {int ssz_off; int psz_off; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;


 int FUNC_0 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct ntb_softc *VAR_2, enum ntb_bar VAR_3,
    enum ntb_bar VAR_4)
{
 struct ntb_pci_bar_info *VAR_5;
 uint8_t VAR_6;

 if (!FUNC_0(VAR_2, VAR_1) && VAR_3 >= VAR_0)
  return;

 VAR_5 = &VAR_2->bar_info[VAR_3];
 VAR_6 = FUNC_1(VAR_2->device, VAR_5->psz_off, 1);
 if (VAR_3 == VAR_4) {
  if (VAR_2->b2b_off != 0)
   VAR_6--;
  else
   VAR_6 = 0;
 }
 FUNC_2(VAR_2->device, VAR_5->ssz_off, VAR_6, 1);
 VAR_6 = FUNC_1(VAR_2->device, VAR_5->ssz_off, 1);
 (void)VAR_6;
}
