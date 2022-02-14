
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agg_info {int dummy; } ;


 int FUNC_0 (struct agg_info*,int ,int) ;
 int FUNC_1 (struct agg_info*,int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct agg_info *VAR_1, int VAR_2, int VAR_3)
{
 u_int32_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, 4);
 VAR_4 &= ~(0xfU << VAR_2);
 VAR_4 |= (0xfU & VAR_3) << VAR_2;
 FUNC_1(VAR_1, VAR_0, VAR_4, 4);
}
