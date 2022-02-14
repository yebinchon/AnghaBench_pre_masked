
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agg_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct agg_info *VAR_3, int VAR_4, int VAR_5)
{
 u_int32_t VAR_6;

 VAR_6 = FUNC_0(VAR_3->dev, VAR_0, 4);
 if (VAR_4 < 16) {
  if (VAR_5 == VAR_1)
   VAR_6 &= ~(1 << VAR_4);
  else
   VAR_6 |= (1 << VAR_4);
  if (VAR_5 == VAR_1 || VAR_5 == VAR_2)
   VAR_6 |= (0x10000 << VAR_4);
  else
   VAR_6 &= ~(0x10000 << VAR_4);
  FUNC_1(VAR_3->dev, VAR_0, VAR_6, 4);
 }
}
