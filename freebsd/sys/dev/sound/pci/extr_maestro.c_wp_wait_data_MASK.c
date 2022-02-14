
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct agg_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct agg_info*,int ,int) ;
 int FUNC_1 (struct agg_info*,int ,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct agg_info *VAR_2, u_int16_t VAR_3)
{
 unsigned VAR_4 = 0;

 while (FUNC_0(VAR_2, VAR_1, 2) != VAR_3) {
  if (++VAR_4 == 1000) {
   return VAR_0;
  }
  FUNC_1(VAR_2, VAR_1, VAR_3, 2);
 }

 return 0;
}
