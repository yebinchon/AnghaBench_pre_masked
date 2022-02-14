
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dsa_switch {int dsa_port_mask; int phys_port_mask; TYPE_1__* dst; } ;
struct TYPE_2__ {scalar_t__ tag_protocol; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct dsa_switch*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 u16 VAR_4;







 if (FUNC_2(VAR_1, VAR_2) || VAR_1->dsa_port_mask & (1 << VAR_2))
  FUNC_1(VAR_3, 0x01, 0x003e);
 else
  FUNC_1(VAR_3, 0x01, 0x0003);






 FUNC_1(VAR_3, 0x02, 0x0000);
 VAR_4 = 0x0433;
 if (FUNC_2(VAR_1, VAR_2)) {
  if (VAR_1->dst->tag_protocol == FUNC_4(VAR_0))
   VAR_4 |= 0x3300;
  else
   VAR_4 |= 0x0100;
 }
 if (VAR_1->dsa_port_mask & (1 << VAR_2))
  VAR_4 |= 0x0100;
 if (VAR_2 == FUNC_3(VAR_1))
  VAR_4 |= 0x000c;
 FUNC_1(VAR_3, 0x04, VAR_4);





 FUNC_1(VAR_3, 0x05, FUNC_2(VAR_1, VAR_2) ? 0x8000 : 0x0000);







 VAR_4 = (VAR_2 & 0xf) << 12;
 if (FUNC_2(VAR_1, VAR_2))
  VAR_4 |= VAR_1->phys_port_mask;
 else
  VAR_4 |= 1 << FUNC_3(VAR_1);
 FUNC_1(VAR_3, 0x06, VAR_4);





 FUNC_1(VAR_3, 0x07, 0x0000);
 FUNC_1(VAR_3, 0x08, 0x2080);




 FUNC_1(VAR_3, 0x09, 0x0001);




 FUNC_1(VAR_3, 0x0a, 0x0000);







 FUNC_1(VAR_3, 0x0b, 1 << VAR_2);





 FUNC_1(VAR_3, 0x0c, 0x0000);




 FUNC_1(VAR_3, 0x0d, 0x0000);




 FUNC_1(VAR_3, 0x0f, VAR_0);





 FUNC_1(VAR_3, 0x18, 0x3210);





 FUNC_1(VAR_3, 0x19, 0x7654);

 return 0;
}
