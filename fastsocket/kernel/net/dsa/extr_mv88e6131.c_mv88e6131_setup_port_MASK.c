
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {int dsa_port_mask; int phys_port_mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 u16 VAR_3;







 if (FUNC_2(VAR_0, VAR_1) || VAR_0->dsa_port_mask & (1 << VAR_1))
  FUNC_1(VAR_2, 0x01, 0x003e);
 else
  FUNC_1(VAR_2, 0x01, 0x0003);
 VAR_3 = 0x0433;
 if (VAR_1 == FUNC_3(VAR_0))
  VAR_3 |= 0x0104;
 if (VAR_0->dsa_port_mask & (1 << VAR_1))
  VAR_3 |= 0x0100;
 FUNC_1(VAR_2, 0x04, VAR_3);





 FUNC_1(VAR_2, 0x05, FUNC_2(VAR_0, VAR_1) ? 0x8000 : 0x0000);







 VAR_3 = (VAR_1 & 0xf) << 12;
 if (FUNC_2(VAR_0, VAR_1))
  VAR_3 |= VAR_0->phys_port_mask;
 else
  VAR_3 |= 1 << FUNC_3(VAR_0);
 FUNC_1(VAR_2, 0x06, VAR_3);





 FUNC_1(VAR_2, 0x07, 0x0000);
 VAR_3 = 0x0080 | FUNC_3(VAR_0);
 if (VAR_1 == FUNC_3(VAR_0))
  VAR_3 |= 0x0040;
 FUNC_1(VAR_2, 0x08, VAR_3);




 FUNC_1(VAR_2, 0x09, 0x0000);




 FUNC_1(VAR_2, 0x0a, 0x0000);







 FUNC_1(VAR_2, 0x0b, 1 << VAR_1);





 FUNC_1(VAR_2, 0x18, 0x3210);





 FUNC_1(VAR_2, 0x19, 0x7654);

 return 0;
}
