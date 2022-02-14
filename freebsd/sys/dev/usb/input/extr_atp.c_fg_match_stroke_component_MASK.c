
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_5__ {int loc; int cum_pressure; int max_cum_pressure; int delta_mickeys; } ;
typedef TYPE_1__ fg_stroke_component_t ;
struct TYPE_6__ {int loc; int cum; } ;
typedef TYPE_2__ fg_pspan ;
typedef int boolean_t ;
typedef scalar_t__ atp_stroke_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static boolean_t
FUNC_1(fg_stroke_component_t *VAR_2,
    const fg_pspan *VAR_3, atp_stroke_type VAR_4)
{
 int VAR_5;
 u_int VAR_6;

 VAR_5 = VAR_3->loc - VAR_2->loc;

 if (FUNC_0(VAR_5) > (int)VAR_1)
  return (0);

 VAR_2->loc = VAR_3->loc;
 if (VAR_3->cum > ((3 * VAR_2->cum_pressure) >> 1))
  VAR_5 = 0;

 VAR_2->cum_pressure = VAR_3->cum;
 if (VAR_3->cum > VAR_2->max_cum_pressure)
  VAR_2->max_cum_pressure = VAR_3->cum;






 if (VAR_4 == VAR_0)
  VAR_6 = (3 * VAR_2->max_cum_pressure) >> 2;
 else
  VAR_6 = VAR_2->max_cum_pressure >> 2;
 if (VAR_2->cum_pressure < VAR_6)
  VAR_5 = 0;

 VAR_2->delta_mickeys = VAR_5;
 return (1);
}
