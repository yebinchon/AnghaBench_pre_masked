
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adapter {int hw; } ;


 int FUNC_0 (int *,int,int,int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_0)
{
 u16 VAR_1;
 int VAR_2, VAR_3, VAR_4 = 0;


 FUNC_1("\nInterface EEPROM Dump:\n");
 FUNC_1("Offset\n0x0000  ");
 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 32; VAR_2++, VAR_3++) {
  if (VAR_3 == 8) {
   VAR_3 = 0; ++VAR_4;
   FUNC_1("\n0x00%x0  ",VAR_4);
  }
  FUNC_0(&VAR_0->hw, VAR_2, 1, &VAR_1);
  FUNC_1("%04x ", VAR_1);
 }
 FUNC_1("\n");
}
