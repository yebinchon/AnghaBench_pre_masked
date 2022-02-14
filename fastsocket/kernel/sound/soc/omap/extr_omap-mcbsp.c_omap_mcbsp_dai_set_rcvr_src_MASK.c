
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp_data {scalar_t__ bus_id; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_mcbsp_data *VAR_2,
           int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u16 VAR_6 = VAR_1;

 if (FUNC_0())
  return -VAR_0;
 if (VAR_2->bus_id != 0)
  return -VAR_0;

 switch (VAR_3) {
 case 130:
  VAR_5 = 1;
 case 131:
  VAR_4 = 3;
  break;
 case 128:
  VAR_5 = 1;
 case 129:
  VAR_4 = 4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5)
  FUNC_2(FUNC_1(VAR_6) | (1 << VAR_4), VAR_6);
 else
  FUNC_2(FUNC_1(VAR_6) & ~(1 << VAR_4), VAR_6);

 return 0;
}
