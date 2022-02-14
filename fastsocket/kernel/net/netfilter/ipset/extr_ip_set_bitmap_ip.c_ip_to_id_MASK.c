
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bitmap_ip {int first_ip; int hosts; int netmask; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32
FUNC_1(const struct bitmap_ip *VAR_0, u32 VAR_1)
{
 return ((VAR_1 & FUNC_0(VAR_0->netmask)) - VAR_0->first_ip)/VAR_0->hosts;
}
