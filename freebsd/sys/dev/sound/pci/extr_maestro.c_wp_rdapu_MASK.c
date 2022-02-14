
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int16_t ;
struct agg_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (struct agg_info*,int ) ;
 scalar_t__ FUNC_2 (struct agg_info*,unsigned int) ;
 int FUNC_3 (struct agg_info*,int ,unsigned int) ;

__attribute__((used)) static u_int16_t
FUNC_4(struct agg_info *VAR_2, unsigned VAR_3, u_int16_t VAR_4)
{
 FUNC_3(VAR_2, VAR_0, VAR_4 | (VAR_3 << 4));
 if (FUNC_2(VAR_2, VAR_4 | (VAR_3 << 4)) != 0)
  FUNC_0(VAR_2->dev, "wp_rdapu() indexing timed out.\n");
 return FUNC_1(VAR_2, VAR_1);
}
