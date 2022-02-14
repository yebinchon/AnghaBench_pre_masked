
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;


 int FUNC_0 (struct sc_info*,int,int) ;
 int FUNC_1 (struct sc_info*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_0,
  int VAR_1, int VAR_2, u_int32_t VAR_3, u_int32_t VAR_4)
{
 u_int32_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, 4);
 VAR_5 &= ~(VAR_3 << VAR_2);
 VAR_5 |= VAR_4 << VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_5, 4);
}
