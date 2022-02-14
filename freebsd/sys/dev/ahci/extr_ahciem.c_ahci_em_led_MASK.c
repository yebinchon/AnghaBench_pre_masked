
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_led {int num; int dev; } ;
struct ahci_enclosure {int** status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct ahci_enclosure* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, int VAR_4)
{
 struct ahci_led *VAR_5;
 struct ahci_enclosure *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = (struct ahci_led *)VAR_3;
 VAR_6 = FUNC_1(VAR_5->dev);
 VAR_7 = VAR_5->num / VAR_0;
 VAR_8 = VAR_5->num % VAR_0;

 if (VAR_8 == 0) {
  if (VAR_4)
   VAR_6->status[VAR_7][2] |= 0x80;
  else
   VAR_6->status[VAR_7][2] &= ~0x80;
 } else if (VAR_8 == 1) {
  if (VAR_4)
   VAR_6->status[VAR_7][2] |= VAR_2;
  else
   VAR_6->status[VAR_7][2] &= ~VAR_2;
 } else if (VAR_8 == 2) {
  if (VAR_4)
   VAR_6->status[VAR_7][3] |= VAR_1;
  else
   VAR_6->status[VAR_7][3] &= VAR_1;
 }
 FUNC_0(VAR_5->dev, VAR_7);
}
