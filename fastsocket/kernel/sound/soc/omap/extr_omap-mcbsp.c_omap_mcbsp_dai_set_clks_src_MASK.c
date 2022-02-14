
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp_data {int bus_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct omap_mcbsp_data *VAR_5,
           int VAR_6)
{
 int VAR_7;
 u16 VAR_8, VAR_9 = VAR_1;

 if (FUNC_0()) {

  if (FUNC_5(VAR_6 == VAR_4))
   return -VAR_0;
  else
   return 0;
 }

 if (FUNC_1() && VAR_5->bus_id > 1)
  return -VAR_0;

 if (FUNC_2())
  VAR_9 = VAR_3;

 switch (VAR_5->bus_id) {
 case 0:
  VAR_8 = VAR_2;
  VAR_7 = 2;
  break;
 case 1:
  VAR_8 = VAR_2;
  VAR_7 = 6;
  break;
 case 2:
  VAR_8 = VAR_9;
  VAR_7 = 0;
  break;
 case 3:
  VAR_8 = VAR_9;
  VAR_7 = 2;
  break;
 case 4:
  VAR_8 = VAR_9;
  VAR_7 = 4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6 == VAR_4)
  FUNC_4(FUNC_3(VAR_8) & ~(1 << VAR_7), VAR_8);
 else
  FUNC_4(FUNC_3(VAR_8) | (1 << VAR_7), VAR_8);

 return 0;
}
