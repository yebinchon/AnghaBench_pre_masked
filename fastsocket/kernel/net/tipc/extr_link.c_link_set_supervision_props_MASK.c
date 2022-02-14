
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link {int tolerance; int continuity_interval; int abort_limit; } ;



__attribute__((used)) static void FUNC_0(struct link *VAR_0, u32 VAR_1)
{
 VAR_0->tolerance = VAR_1;
 VAR_0->continuity_interval =
  ((VAR_1 / 4) > 500) ? 500 : VAR_1 / 4;
 VAR_0->abort_limit = VAR_1 / (VAR_0->continuity_interval / 4);
}
