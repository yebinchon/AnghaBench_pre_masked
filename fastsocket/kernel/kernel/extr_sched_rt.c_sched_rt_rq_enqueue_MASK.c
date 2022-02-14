
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_rq {scalar_t__ rt_nr_running; } ;
struct TYPE_2__ {int curr; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct rt_rq*) ;

__attribute__((used)) static inline void FUNC_2(struct rt_rq *VAR_0)
{
 if (VAR_0->rt_nr_running)
  FUNC_0(FUNC_1(VAR_0)->curr);
}
