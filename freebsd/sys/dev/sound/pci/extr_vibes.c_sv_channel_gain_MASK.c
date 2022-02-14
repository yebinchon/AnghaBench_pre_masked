
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u_int32_t ;
struct sc_info {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {size_t max; size_t reg; scalar_t__ mute; scalar_t__ neg; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct sc_info*,size_t) ;
 int FUNC_1 (struct sc_info*,size_t,int) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_2, u_int32_t VAR_3, u_int32_t VAR_4, u_int32_t VAR_5)
{
 u_int8_t VAR_6;
 int32_t VAR_7;

 VAR_7 = VAR_1[VAR_3].max * VAR_4 / 100;
 if (VAR_1[VAR_3].neg)
  VAR_7 = VAR_1[VAR_3].max - VAR_7;
 VAR_6 = FUNC_0(VAR_2, VAR_1[VAR_3].reg + VAR_5) & ~VAR_1[VAR_3].max;
 VAR_6 |= VAR_7;

 if (VAR_1[VAR_3].mute) {
  if (VAR_4 == 0) {
   VAR_6 |= VAR_0;
  } else {
   VAR_6 &= ~VAR_0;
  }
 }
 FUNC_1(VAR_2, VAR_1[VAR_3].reg + VAR_5, VAR_6);
}
