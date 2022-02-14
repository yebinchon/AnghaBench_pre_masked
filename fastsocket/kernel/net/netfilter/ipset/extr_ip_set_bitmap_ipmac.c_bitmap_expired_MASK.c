
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipmac_telem {int timeout; } ;
struct bitmap_ipmac {int dummy; } ;


 struct ipmac_telem* FUNC_0 (struct bitmap_ipmac const*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool
FUNC_2(const struct bitmap_ipmac *VAR_0, u32 VAR_1)
{
 const struct ipmac_telem *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_2->timeout);
}
