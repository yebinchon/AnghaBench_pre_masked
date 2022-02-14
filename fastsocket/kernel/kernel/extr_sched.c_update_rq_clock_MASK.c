
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {scalar_t__ skip_clock_update; scalar_t__ clock; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (struct rq*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rq *VAR_0)
{
 s64 VAR_1;

 if (VAR_0->skip_clock_update > 0)
  return;

 VAR_1 = FUNC_1(FUNC_0(VAR_0)) - VAR_0->clock;
 VAR_0->clock += VAR_1;
}
