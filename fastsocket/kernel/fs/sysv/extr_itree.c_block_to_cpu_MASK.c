
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysv_zone_t ;
struct sysv_sb_info {int s_block_base; } ;


 int FUNC_0 (struct sysv_sb_info*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct sysv_sb_info *VAR_0, sysv_zone_t VAR_1)
{
 return VAR_0->s_block_base + FUNC_0(VAR_0, VAR_1);
}
