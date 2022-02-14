
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct htcp {int minRTT; } ;


 int FUNC_0 (struct htcp const*) ;

__attribute__((used)) static inline u32 FUNC_1(const struct htcp *VAR_0)
{
 return FUNC_0(VAR_0) / VAR_0->minRTT;
}
