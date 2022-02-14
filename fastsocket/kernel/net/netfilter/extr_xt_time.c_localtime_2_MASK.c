
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct xtm {int dse; int weekday; } ;



__attribute__((used)) static inline void FUNC_0(struct xtm *VAR_0, time_t VAR_1)
{




 VAR_0->dse = VAR_1 / 86400;





 VAR_0->weekday = (4 + VAR_0->dse - 1) % 7 + 1;
}
