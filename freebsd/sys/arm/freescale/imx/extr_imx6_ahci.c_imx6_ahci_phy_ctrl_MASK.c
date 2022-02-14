
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ahci_controller {int r_mem; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct ahci_controller* VAR_4, uint32_t VAR_5, bool VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;
 bool VAR_9;

 VAR_7 = FUNC_0(VAR_4->r_mem, VAR_1);
 if (VAR_6) {
  VAR_7 |= VAR_5;
 } else {
  VAR_7 &= ~VAR_5;
 }
 FUNC_1(VAR_4->r_mem, VAR_1, VAR_7);

 for (VAR_8 = 5000; VAR_8 > 0; --VAR_8) {
  VAR_7 = FUNC_0(VAR_4->r_mem, VAR_2);
  VAR_9 = (VAR_7 & VAR_3) == VAR_3;
  if(VAR_9 == VAR_6) {
   break;
  }
  FUNC_2(100);
 }

 if (VAR_8 > 0) {
  return (0);
 }

 return (VAR_0);
}
